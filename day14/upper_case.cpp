#include<bits/stdc++.h>
using namespace std;

int main(){

    char word[] = "apPLe";

    for(int i = 0; i < strlen(word); i++){
       
        char ch = word[i];
        if(ch >= 'A' && ch <= 'Z'){
            continue;
        }
        else{
          word[i] = ch - 'a' +'A';
        }
    }

    cout<<word<<endl;
    
}