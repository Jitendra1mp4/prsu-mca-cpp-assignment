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
  printIntro("Program to append content File", "05:30 13-11-2023");
  try {
    ifstream myFile(fileName, ios::in);  // opening file in reading mode
    cout << "content of the file BEFORE APPEND\n" << endl;
    string s;
    while (getline(myFile, s)) {  // reading content line by line
      cout << s;                  // printing content of line
    }
    cout << endl << endl;
    myFile.close();
  } catch (const exception &e) {
    cerr << "Sorry something went wrong! \n";
    cerr << e.what() << endl;
  }

  try {
    ofstream myFile(fileName, ios::app);  // open file with truncate
    // APPENDING content to file
    myFile << "\nWE ARE THE NEW CONTENT APPENDED TO FILE SHIVA.TXT\n";
    cout << "Successfully APPENDED!\n" << endl;
    myFile.close();
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
  }

  try {
    ifstream myFile(fileName, ios::in);
    cout << "content of the file AFTER Append\n" << endl;
    string s;
    while (getline(myFile, s)) {
      cout << s;
    }
    cout << endl << endl;
    myFile.close();
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
  }

  return 0;
}
