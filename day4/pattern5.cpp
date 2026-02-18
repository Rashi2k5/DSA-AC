#include<bits/stdc++.h>
using namespace std;

int main(){

    // A
    // B C
    // D E F 
    // G H I J
    char ch = 'A';
    for(int i = 1; i <= 4; i++){
        for(int j = 1;j <= i;j++){
            cout<<char(ch++)<<" ";
        }
        cout<<endl;
    }

}