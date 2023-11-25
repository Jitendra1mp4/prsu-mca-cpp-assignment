#include<iostream>
using namespace std;

void printIntro(string topic, string time){
	cout << "Program topic : " << topic<< endl ;
	cout << "Author : Jitendra Kumar Sahu" << endl ;
	cout << "Time : "<< time << endl ;
	cout << "---------------*----------------"<< endl<< endl ;
}

void swap(){
	int a = 5, b = 6 ;
	cout << "a " << a << endl ;
	cout << "b " << b << endl ;
	
	a = a + b ;
	b = a - b ;
	a = a - b ;
	
	cout << "\nafter swap : " << endl ;
	cout << "a " << a << endl ;
	cout << "b " << b << endl ;
}

int main()
{
	printIntro("Swap number without using thired variable","10-10-23 03:18");
	swap();
	return 0 ;
}
