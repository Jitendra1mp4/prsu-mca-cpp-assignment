#include <iostream>
#include <fstream>
using namespace std;

void printIntro(string topic, string time){
    cout << "Topic : " << topic << endl;
    cout << "Author : Jitendra Kumar Sahu" << endl;
    cout << "Time : " << time << endl;
    cout << "_____________________*_____________________" << endl;
}

int main(){
    printIntro("Creating a file with C++", "13-12-23 21:36");
    try{
        // creating a file with constructor
        fstream myFile("Rudra.txt", ios::out);
    }
    catch (const std::exception &e){
        cout << "Unable to create file." << endl;
        cout << "Exception : " << e.what() << endl;
    }

    return 0;
}
