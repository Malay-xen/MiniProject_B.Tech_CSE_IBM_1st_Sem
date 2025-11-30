// Question 8: Problem Title: Riya’s Secret Word

#include<iostream>
using namespace std;

int main(){
  string r="";
  string w;
  cout<<"Enter Your Word: ";
  cin>>w;
  for(int i= w.length()-1;i>=0;i--){
  r+=w[i];
  }
  if(w==r){
      cout<<"Perfect secret Word.";
  }else{
      cout<<"Not a secret word.";
  }
  return 0;
}