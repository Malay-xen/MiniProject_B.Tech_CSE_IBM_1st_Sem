// Question 10: Problem: Count Positive and Negative Numbers (Weather Sensor Data)

#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter number of readings: ";
  cin >> n;
  int a[n];

  for (int i = 0; i < n; i++){
      cout << "Enter reading "<<i+1<<" : ";
      cin >> a[i];
  }
  int pos = 0, neg = 0, z = 0;
  for (int i = 0; i < n; i++){
    if (a[i] > 0){
        pos++;
    }else if (a[i] < 0){
        neg++;
    }else{
        z++;
    }
  }
  cout << "Positive: " << pos << endl;
  cout << "Negative: " << neg << endl;
  cout << "Zero: " << z << endl;
  return 0;
}