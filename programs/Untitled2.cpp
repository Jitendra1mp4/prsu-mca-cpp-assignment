#include <iostream>
using namespace std ;

inline void printIntro(string topic, string time) {
 cout<<"Topic : " << topic << endl ;
 cout<<"Author : Jitendra Kumar Sahu" << endl ;
 cout << "Time : "<< time << endl ;
 cout <<"-----------------*_____________________"<< endl ;
}

int main(){

	printIntro("Program to find size of multidiamention array","27-10-23 15:51") ;
	
	int arr[2][3] ={
	{12,13,14},
	{26,27,28}
	} ;
	
	cout << "size " << sizeof(arr[0][0])*2*3 << endl ;
	
	return 0 ;
}



