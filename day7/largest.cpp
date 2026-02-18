#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;
int max = -1;
int min = INT_MAX;

int arr[n];

for(int i = 0; i < n; i++){

    cin>>arr[i];

}

for(int i = 0; i < n; i++){

    if(arr[i] > max){

        max = arr[i];

    }

    if(arr[i] < min){

        min = arr[i]; 

    }

}

cout<<"the largest element is : "<<max<<endl;
cout<<"the minimum element is : "<<min<<endl;

}