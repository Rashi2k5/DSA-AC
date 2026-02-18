#include<bits/stdc++.h>
using namespace std;

int main(){

for(int j = 1; j <= 4;j++){
    for(int k = 0; k <= 4-j; k++){
        cout<<" ";
    }
    for(int i = 1; i <= j; i++){
        cout<<"*";
    }
    cout<<endl;
}

}