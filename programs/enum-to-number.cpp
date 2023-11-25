#include<iostream>
using namespace std;

enum numbers{
	one = 1 , two, three , four,five, six , seven , eight , nine ,ten 
};

void printIntro(string topic, string time){
	cout << "Program topic : " << topic<< endl ;
	cout << "Author : Jitendra Kumar Sahu" << endl ;
	cout << "Time : "<< time << endl ;
	cout << "---------------*----------------"<< endl<< endl ;
}
int main()
{
	printIntro("printing numbers with enum","10-10-23 02:59") ;
	
	cout << one << " one"<< endl ;
	cout << two << " two" << endl ;
	cout << three << " three"<< endl ;
	cout << four << " four" << endl ;
	cout << five  << " five" << endl ;
	cout << six << " six" << endl ;
	cout << seven << " seven" << endl ;
	cout << eight << " eight" << endl ;
	cout << nine << " nine"<< endl ;
	cout << ten << " ten"  << endl ;
}

