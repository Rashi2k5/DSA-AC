#include<bits/stdc++.h>
using namespace std;

bool even_odd(int num){

    if(num % 2 == 0){
        return true;
    }
    
    return false;
}


int main(){

    int num;

    cout<<"enter the number : "<<endl;
    cin>>num;

     cout<<"the number is even: "<<even_odd(num);
}