#include<iostream>
using namespace std;

void printIntro(string topic, string time){
	cout << "Program topic : " << topic<< endl ;
	cout << "Author : Jitendra Kumar Sahu" << endl ;
	cout << "Time : "<< time << endl ;
	cout << "---------------*----------------"<< endl<< endl ;
}

void swap(int *a, int *b){
	int temp = *a;
	*a =  *b;
	*b = temp ;
	
	cout << "\nafter swap : " << endl ;
	cout << "a : " << *a << endl ;
	cout << "b : " << *b << endl ;
}

int main()
{
	printIntro("Swap number using call by address ","10-10-23 01:18");
	int a = 2 , b = 4 ; 

	cout << "\nbefore swap : " << endl ;
	cout << "a : " << a << endl ;
	cout << "b : " << b << endl ;

	swap(&a, &b);
	
	return 0 ;
}
