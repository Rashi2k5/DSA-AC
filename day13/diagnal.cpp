#include<bits/stdc++.h>
using namespace std;

int main(){

    int sum = 0;
    int n;
    cin>>n;

    int m;
    cin>>m;

    int arr[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

          cin>>arr[i][j];

        }
    }

    for(int i = 0; i < n; i++){
        
        sum += arr[i][i];

        if(i != n-i-1){

            sum += arr[i][n-i-1];

        }
    }

       cout<<"sum of diagnals are : "<<sum;
}