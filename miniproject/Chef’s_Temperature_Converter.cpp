// Question 2: Problem Title: Chef’s Temperature Converter

#include<iostream>
using namespace std;
int main(){ 
  float c;
  cout << "Enter temperature in Celsius: ";
  cin >> c;
  float f = (c * 9 / 5) + 32;
  cout << "Temperature in Fahrenheit: " << f << endl;
  return 0;
}