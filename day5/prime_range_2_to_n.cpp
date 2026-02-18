#include<bits/stdc++.h>
using namespace std;

bool isprime(int num){

    for(int j = 2;j*j <= num; j++){
            if(num % j == 0){
                return false;
            }
    }
    return true;
}

int main(){

    int n;
    cout<<"enter the value of n: "<<endl;
    cin>>n;

    for(int i = 2; i <= n;i++){
        if(isprime(i)){
            cout<<i<<endl;
        }
    }
}