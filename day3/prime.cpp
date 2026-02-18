#include<bits/stdc++.h>
using namespace std;

int main(){

    int num;
    cout<<"enter the number: "<<endl;
    cin>>num;
    
    for(int i = 2; i < num; i++){

         if(num % i == 0){
            cout<<"it is not a prime number"<<endl;
            break;
         }
         cout<<"it is a prime number"<<endl;
    }

}