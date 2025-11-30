/* Problem Title: ADTU Canteen Bill Analyzer

Story:

At Assam Down Town University (ADTU), the hostel canteen records the daily food expenses of each student.
Each row in a 2D array represents a student, and each column represents a day of the day week (from Monday to Friday).
The value bill[i][j] is the amount in ₹ spent by student i on day j.
You, as the Canteen Manager of ADTU, have been asked to analyze the weekly canteen records.

🧠 Your Tasks:

Given the 2D array bill, write a program to:

Print the total amount spent by each student in the week.

Find the day with the highest total collection.

Identify the student (or students) who spent the most overall.

Input Format:

The first line contains two integers:
n → number of students
m → number of days

The next n lines each contain m integers — the daily bill amounts.

📤 Output Format:

Print each student’s total weekly spending.

Print which day had the highest total collection.

Print which student(s) spent the most overall.
Input :
4 5
30 40 50 60 20
10 20 30 10 40
50 60 40 30 20
20 10 10 20 30

Output:

Student 1 total: ₹200  
Student 2 total: ₹110  
Student 3 total: ₹200  
Student 4 total: ₹90  

Highest collection on Day 2  
Highest spender: Student 1 and Student 3        */

#include<iostream>
using namespace std;
int main(){
  int n, m,s;
  cout << "Enter number of students: ";
  cin >> n;
  cout << "Enter number of days: ";
  cin >> m;
  int value[n][m];
  cout << "* Enter money spent by each student for days *";
  for (int i = 0; i < n; i++)
  {
      cout << "\nstudent " << i + 1 << ": ";
      for (int j = 0; j < m; j++){
          cin >> value[i][j];
      }
  }
  cout << "weekly spendature: " << endl;
  cout << "--------------------";
  int highs = 0;
  int lows = 9999;
  int tops = 0;
  int lowsp = 0;
  for (int i = 0; i < n; i++){
      s = 0;
      for (int j = 0; j < m; j++){
          s += value[i][j];
      }
      cout << "\nStudent " << i + 1 << " total: " << s << endl;
      if (s > highs){
          highs = s;
          tops = i;
      }
      if (s < lows){
          lows = s;
          lowsp = i;
      }
  }
  cout << "\n Highest spender: " << tops + 1 << " (" << highs << " )";
  cout << "\n Lowest spender: " << lowsp + 1 << " (" << lows << " )";
return 0;
}