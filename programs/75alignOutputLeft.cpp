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
  printIntro("Aligning output left and setfill #",
             "05:30 13-11-2023");
  string name ;
  cout << "enter name : " ;
  getline(cin,name) ;
  cout << "\nleft aligned output\n";

  cout << left << setw(30) << setfill('#')<< name << endl;
  return 0;
}
