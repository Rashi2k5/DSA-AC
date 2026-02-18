#include<bits/stdc++.h>
using namespace std;

int main(){

    int num;
    cout<<"enter the value of n: "<<endl;
    cin>>num;

    int sum = 0;

    while(num > 0 ){

        int rem = num % 10; 

        if(rem % 2 != 0){

            sum = sum + rem; 

        }
                  
            num = num / 10;
        
    }     

cout<<sum<<endl;

}