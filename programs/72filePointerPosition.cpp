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
  const char fileName[10] = "Shiva.txt";
  printIntro("finding File pointer position", "05:30 13-11-2023");
  try {
    ifstream myFile(fileName, ios::in);  // opening file in reading mode
    // printing file pointer postion
    string s;
    cout << "file pointer position before reading : " << myFile.tellg() << endl << endl;
    while (getline(myFile, s)) {  // reading content line by line
      cout << s;                  // printing content of line
    }
    // printing file pointer postion
    cout << "\n\nfile pointer position after reading : " << myFile.tellg() << endl;
    cout << endl ;
    myFile.close();
  } catch (const exception& e) {
    cerr << "Sorry something went wrong! \n";
    cerr << e.what() << endl;
  }

  return 0;
}