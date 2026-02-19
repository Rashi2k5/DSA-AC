#include<bits/stdc++.h>
using namespace std;

void kadans(int *arr,int n){

    int currsum = 0;
    int maxsum = INT_MIN;

for(int i = 0; i < n; i++){

    currsum += arr[i];
    maxsum = max(currsum,maxsum);
    
    if(currsum < 0){
        currsum = 0;
    }
      
}
cout<<"maximum sum of subarray : "<<maxsum;
}

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    kadans(arr,n);
}