#include<iostream>
using namespace std;

void printIntro(string topic, string time) {
 cout<<"Topic : " << topic << endl ;
 cout<<"Author : Jitendra Kumar Sahu" << endl ;
 cout << "Time : "<< time << endl ;
 cout <<"_____________________*_____________________\n"<< endl ;
}

int main()
{
	printIntro("sum even and odds till 20","27-10-13 08:51") ;

int numberOfDigits = 10 ;
int OddStart = 1 , EvenStart = 2, OddResult = 0 ,  EvenResult =0;

while (numberOfDigits--){
	
	OddResult += OddStart ;
	EvenResult += EvenStart ;
	
	OddStart +=2 ;
	EvenStart += 2;
	
}
	cout << "Sum of odd numbers till 20 : "<< OddResult<<endl  ;
	cout << "Sum of even numbers till 20 : "<< EvenResult<<endl  ;
}
