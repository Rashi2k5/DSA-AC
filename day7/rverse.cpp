#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    int arr[n];

    for(int i = 0; i < n;i++){

        cin>>arr[i];

    }
  int i = 0;
  int num = n-1;
  while(i != num){

    swap(arr[i],arr[num]);
    i++;
    num--;
    }    

     for(int i = 0; i < n;i++){

        cout<<arr[i]<<" ";

    }
}