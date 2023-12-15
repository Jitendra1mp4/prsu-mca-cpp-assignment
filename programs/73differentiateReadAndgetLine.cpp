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
  printIntro("Program to differentiate read() and getLine()", "05:30 13-11-2023");
  const char fileName[10] = "Shiva.txt";
  char buff[11];
  buff[10] = '\0';
  try {
    ifstream myFile(fileName, ios::in);  // opening file in reading mode
    myFile.read(buff, 10);               // reading 10 characters using read()
    cout << "content of the file using read() : " << endl;
    cout << buff << endl;

    cout << "content of the file using getline() : " << endl;
    string s;
    while (getline(myFile, s)) {  // reading content line by line
      cout << s;                  // printing content of line
    }
    cout << endl << endl;
    myFile.close();
  } catch (const exception& e) {
    cerr << "Sorry something went wrong! \n";
    cerr << e.what() << endl;
  }

  return 0;
}