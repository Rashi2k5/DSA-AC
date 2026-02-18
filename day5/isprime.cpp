#include<bits/stdc++.h>
using namespace std;

bool isprime(int num){

    if(num == 1){
        return false;
    }

    for(int i = 2; i*i < num; i++){

        if(num % i == 0 ){

            return false;
        }
    }
    return true;
}

int main(){

    int n;
    cout<<"enter the number you want to check ";
    cin>>n;

    if(isprime(n)){

        cout<<"number is prime  "<<endl;
    }
    else{
        cout<<"number is not prime "<<endl;
    }
}