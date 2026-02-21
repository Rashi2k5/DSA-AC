#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int *arr,int n){

    for(int i = 1; i < n; i++){

        int curr  = arr[i];
        int prev = i - 1;

        while(prev >= 0 && arr[prev] > curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev + 1] = curr;
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

    insertion_sort(arr,n);
}