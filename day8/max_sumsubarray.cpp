#include<bits/stdc++.h>
using namespace std;

void maxsubarray(int *arr, int n){
    
    int maxsum = INT_MIN;

    for(int start = 0; start < n; start++){
        int currsum = 0;
        for(int end = start; end < n; end++){
            
                currsum += arr[end];

            maxsum = max(maxsum,currsum);
        }
        
        cout<<endl;
    }
    cout<<"maximum subarray sum : "<<maxsum;

}

int main(){

    int arr[5] = {2,3,-1,2,3};
    int n = sizeof(arr)/sizeof(int);

   maxsubarray(arr,n);

}