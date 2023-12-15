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
    printIntro("File reading", "13-12-23 21:36");
    try{
        fstream myFile("Info.txt");
        char c;
        while (c = myFile.get()){ 
            cout << c;
            if (c == EOF) {//use of end of file
              
                cout << "[Reached end of file (EOF)]";
                break;
            }
        }
    }
    catch (const std::exception &e){
        cout << "Exception : " << e.what() << endl;
    }
    return 0;
}
