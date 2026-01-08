// Question 7: Problem Title: Amit’s Report Card

#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter number of Subjects: ";
  cin>>n;
  int num[n];

  cout<<"Enter marks: ";
  for(int i=0;i<n;i++){
  cin>>num[i];
  }

  int highest=num[0];
  int low=num[0];

  for(int i=0;i<n;i++){
    if( highest<num[i]){
      highest=num[i];
    }
    if(low>num[i]){
          low=num[i];
    }
  }

  cout<<"Highest marks: "<<highest<<endl;
  cout<<"Lowest marks: "<<low<<endl;
  return 0;
}
