#include <iomanip>
#include <iostream>
using namespace std;

void printIntro(string topic, string time) {
  cout << "Topic : " << topic << endl;
  cout << "Author : Jitendra Kumar Sahu" << endl;
  cout << "Time : " << time << endl;
  cout << "--------------------*--------------------" << endl;
}

int main() {
  printIntro("Program to demonstrate some iomanip functions",
             "05:30 13-11-2023");
  const int num = 123;
  const double pi = 3.14159265358979323846;

  cout << "setw() \n";
  cout << setw(10) << num << endl;
  cout << setw(10) << pi << endl;

  cout << "\nsetprecision() \n";
  cout << setprecision(6) << num << endl;
  cout << setprecision(6) << pi << endl;

  cout << "\nsetbase() \n";
  cout << setbase(16) << num << endl;
  cout << setbase(8) << pi << endl;

  cout << "\nsetfill() \n";
  cout << setfill('*')<< setw(10) << num << endl;
  cout << setfill('#')<< setw(10) << pi << endl;

  return 0;
}