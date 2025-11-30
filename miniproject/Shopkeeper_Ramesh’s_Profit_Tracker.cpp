// Question 12: Problem Title: Shopkeeper Ramesh’s Profit Tracker 

#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter no. of days: ";
  cin >> n;
  int rec[n];

  for (int i = 1; i <= n; i++){
    cout << "Enter income for the day "<<i<<":";
    cin >> rec[i];}
    int p = 0, l = 0, net = 0;
    for(int i=1;i<=n;i++){
    if (rec[i]>0){
        p+=rec[i];
    }else if(rec[i]<0){
        l+=(-rec[i]);
    }

  }
  net=p-l;
  cout<<"Profit: "<<p<<endl;
  cout<<"Loss: "<<l<<endl;
  cout<<"Net Balance: "<<net<<endl;
  return 0;
}