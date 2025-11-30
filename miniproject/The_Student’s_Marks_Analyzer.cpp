// Queston 6: Problem title : The Student’s Marks Analyzer

#include<iostream>
using namespace std;
int main(){
  int a, total = 0;
  cout << "Enter number of students: ";
  cin >> a;
  int marks[a];
  for (int i = 0; i < a; i++)
  {
      cout << "Enter marks of student "<<i+1<<":";
      cin >> marks[i];
      total += marks[i];
  }

  double average = total / a;

  cout << "Average marks: " << average << endl;
  cout << "Total marks: " << total << endl;
  return 0;
}