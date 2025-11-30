// Question 11: Problem Title: Professor Neo’s Attendance Analyzer 🎓

#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter No. of students: ";
  cin >> n;
  int attd[n];
  int p = 0, a = 0;

  cout<<"*Press 0 for Absent and 1 for Present*"<<endl;
  for (int i = 0; i < n; i++){
    cout << "Attendance of " << i+1 << " : ";
    cin >> attd[i];
    if (attd[i] == 1){
        p++;
    }else if (attd[i] == 0){
        a++;
    }
  }
  cout << "present: " << p << endl;
  cout << "Absent: " << a << endl;
  return 0;
}