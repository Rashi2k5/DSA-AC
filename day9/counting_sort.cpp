#include<bits/stdc++.h>
using namespace std;

void counting_sort(int *arr, int n){

    int freq[100000];
    int minval = INT_MAX;
    int maxval = INT_MIN;

    
    for(int i = 0; i < n; i++){
         
        minval = min(minval,arr[i]);
        maxval = max(maxval,arr[i]);
    }

    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
    }

    for(int i = minval,j =0 ; i <= maxval;i++){

        while(freq[i] > 0){
            arr[j++] = i;
            freq[i]--;
        }

    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

}

 int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    counting_sort(arr,n);

}