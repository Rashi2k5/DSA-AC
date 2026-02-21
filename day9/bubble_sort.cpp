#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int *arr,int n){

      bool isswap = false;
      for(int i = 0; i < n; i++){
        for(int j = 0;j < n-i-1;j++){

            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                isswap = true;
            }
        }
        if(!isswap){
            return;
        }
    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

}

int main(){

    int n = 5;

    int arr[5] = {5,3,4,2,1};

    bubble_sort(arr,n);
}