#include<bits/stdc++.h>
using namespace std;

int main(){

   //we don't need to apply for loop for taking input for character array

   char word[30];
   cin>>word;

   cout<<"your  word is : "<<word<<endl;

   //white space ke baad vale letter ko ignore kr deta h to hum to hum  getline use krege
   char sentence[30];
   cin.getline(sentence,30);

   cout<<sentence<<endl;

   char sen[30];
   cin.getline(sen,30,'*');// here 3rd is delimiter which stops the word at * 

    
}