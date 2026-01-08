/* Problem Title: HOSTEL ATTENDANCE TRACKER 

Assam Down Town University maintains a strict hostel monitoring system to ensure student safety.
Every hostel student must mark attendance daily.
The warden keeps attendance for 7 days (Monday to Sunday) for 10 students.

The attendance is stored in a 2D array A[10][7], where:
A[i][j] = 1 → Student i was Present on Day j

A[i][j] = 0 → Student i was Absent on Day j

Here:

i = Student number (1 to 10)

j = Day number (1 to 7)

The warden wants a weekly summary of attendance.

Your Task: Write the algorithm or C program to do the following:
(a) Calculate and print the total number of days each student was present.

Total present days = sum of each row.

(b) Identify the student who has the highest attendance in the week.

If two students have the same highest attendance, print the one with the lower student number.

Find the day (1–7) on which overall hostel attendance was the lowest.

Total attendance on a day = sum of each column.
Input :
1 1 0 1 1 0 1
1 0 1 1 1 1 1
0 1 1 0 1 1 0
1 1 1 1 0 1 1
1 0 1 0 1 0 1
0 0 1 1 1 1 1
1 1 0 0 0 1 1
1 1 1 1 1 0 0
0 1 1 1 1 1 1
1 0 0 1 1 1 1

Output:
Weekly Attendance Summary
-------------------------

Total Present Days:
Student 1: 5
Student 2: 6
Student 3: 4
Student 4: 6
Student 5: 4
Student 6: 5
Student 7: 5
Student 8: 5
Student 9: 6
Student 10: 5

Student with Highest Attendance: Student 2 (6 Days)

Day with Lowest Overall Attendance: Day 2         */

#include<iostream>
using namespace std;
int main(){
  int attd[10][7];

  cout << "Enter attendance of 10 Hostellers fo 7 days(1 for present & 0 for absent): \n";
  for (int i = 0; i < 10; i++){
    cout << "Student " << i + 1 << " :";
    for (int j = 0; j < 7; j++){
      cin >> attd[i][j];
      }
  }
  cout << "Weekly aatendance summary: \n";
  cout << "--------------------------------\n";
  int highat=0;
  int lowat=7;
  int topS=0;
  int lowS=0;
  for(int i = 0; i < 10; i++){
    int at = 0;

    for (int j = 0; j < 7; j++){
      if (attd[i][j] == 1){
          at++;
      }
    }
    cout << "\nStudent " << i + 1 << ":" << at << " days present\n";
    if(at>highat){
      highat=at;
      topS=i;
    }
    if(at<lowat){
      lowat=at;
      lowS=i;
      }
  }
  cout<<"\nStudent with Highest Attendance: Student "<<topS+1<<" ("<<highat<<" Days)";
  cout<<"\nStudent with Lowest Attendance: Student "<<lowS+1<<" ("<<lowat<<" Days)";
return 0;
}