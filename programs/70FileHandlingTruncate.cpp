#include <fstream>
#include <iostream>
using namespace std;

void printIntro(string topic, string time) {
  cout << "Topic : " << topic << endl;
  cout << "Author : Jitendra Kumar Sahu" << endl;
  cout << "Time : " << time << endl;
  cout << "_____________________*_____________________" << endl;
}

int main() {
  printIntro("Program to TRUNCATE File", "05:30 13-11-2023");
  const char fileName[5] = "File" ;
  try {
    ifstream myFile(fileName, ios::in);  // opening file in reading mode
    cout << "content of the file BEFORE TRUNCATE\n" << endl;
    string s;
    while (getline(myFile, s)) {  // reading content line by line
      cout << s;                  // printing content of line
    }
    cout << endl << endl;
    myFile.close();

    ofstream file(fileName, ios::trunc);  // open file with truncate
    cout << "Successfully TRUNCATE\n" << endl;
    myFile.close();

    cout << "content of the file AFTER TRUNCATE\n" << endl;
    while (getline(myFile, s)) {
      cout << s;
    }
    cout << endl;
    myFile.close();
  } catch (const exception &e) {
    cerr << "Sorry something went wrong! \n";
    cerr << e.what() << endl;
  }
  return 0;
}