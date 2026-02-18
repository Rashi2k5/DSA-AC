#include<bits/stdc++.h>
using namespace std;

int dectobin(int num){
    
    int n = num;
    int bin = 0;
    int pow = 1;

    while(n > 0){
        
        int rem = n % 2;
        bin += rem * pow;
        n = n/2;
        pow *= 10; 
         
    }
    return bin;
}

int main(){

    cout<<dectobin(4);    

}