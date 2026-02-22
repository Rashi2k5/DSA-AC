#include<bits/stdc++.h>
using namespace std;

int main(){

    char ch[] =  "word";

    int st = 0;
    int end = strlen(ch) - 1;

    while(st < end){
        swap(ch[st++],ch[end--]);
        
    }

    cout<<ch<<endl;
}