#include<bits/stdc++.h>
using namespace std;

int bintodec(int n){

    int num = n;
    int dec = 0;
    int pow = 1;

    while(num > 0){

        int rem = num % 10;
        num /= 10;
        dec += pow * rem;
        pow = pow*2;

    }
    return dec;
}

int main(){

    cout<<bintodec(1010);

}