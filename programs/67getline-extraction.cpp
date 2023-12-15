#include <iostream>
#include <fstream>
using namespace std;

void printIntro(string topic, string time)
{
    cout << "Topic : " << topic << endl;
    cout << "Author : Jitendra Kumar Sahu" << endl;
    cout << "Time : " << time << endl;
    cout << "_____________________*_____________________" << endl;
}

int main()
{
    printIntro("program to illustrate\nextraction operator and getline() function.", "13-12-23 21:36");

    try
    {
        ifstream myFile("Info.txt",ios::in);
        string s1, s2;

        getline(myFile, s1); // use of getline()
        cout << "content read using getline from file : \n"
             << s1 << endl ;

        cout << "content read using >> operator : \n"; // example of extraction operator (>>)
        myFile >> s2;
        cout << s2 << endl ;
    }
    catch (const std::exception &e)
    {
        cout << "Exception : " ; 
        std::cerr << e.what() << '\n';
    }

    return 0;
}
