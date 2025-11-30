// Question 9: Problem title : Reverse the Array (Neha’s Diary Entries)

#include<iostream>
using namespace std;
int main(){
  int n;

  cout<<"Enter how many times a week: ";
  cin>>n;
  int a[n];

  for (int i = 0; i < n; i++){
    cout << "Enter excercise time "<<i+1<<" : ";
    cin >> a[i];
  }
  cout<<"Excercise timings in reverse: ";
  for (int i = n- 1; i >= 0; i--){
    cout<<a[i]<<" ";
  }
  cout << endl;

return 0;
}