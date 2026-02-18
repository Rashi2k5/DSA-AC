#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n){

    int copy[n];
   
    for(int i = 0 ;i < n; i++){

        int j = n-i-1;

        copy[i] = arr[j];

    }
      for(int i = 0 ;i < n; i++){

      cout<<copy[i]<<" ";

    }
}

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    reverse(arr,n);
}