// Question 3: Problem-title: The Shopkeeper’s Lucky Number

#include<iostream>
using namespace std;
int main(){
  int a;
  cout << "Enter a number: ";
  cin >> a;
  if (a % 2 == 0){
    cout << a << " is even number." << endl;
  }else{
    cout << a << " is odd number." << endl;
  }
  if (a % 5 == 0){
    cout << a << " is divisible by 5." << endl;
  }else{
    cout << a << " is not divisible by 5." << endl;
  }

  return 0;
}