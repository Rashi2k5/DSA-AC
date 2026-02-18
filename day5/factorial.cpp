#include<bits/stdc++.h>
using namespace std;

int fact(int num){

    int product = 1;

    for(int i = 1; i <= num; i++){

        product = product * i;
    }
    return product;
}

int main(){
    
    int n;
    cout<<"enter the number n : "<<endl;
    cin>>n;
    cout<<"the factorial of number n : " <<fact(n)<<endl;
}