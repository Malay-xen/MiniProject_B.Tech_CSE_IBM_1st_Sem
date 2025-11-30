// Question 14 : Problem Title : HOSTEL ATTENDANCE TRACKER 

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