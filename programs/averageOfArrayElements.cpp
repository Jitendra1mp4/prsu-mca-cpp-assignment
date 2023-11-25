#include <iostream>
using namespace std ;

void printIntro(string topic, string time) {
 cout<<"Topic : " << topic << endl ;
 cout<<"Author : Jitendra Kumar Sahu" << endl ;
 cout << "Time : "<< time << endl ;
 cout <<"_____________________*_____________________"<< endl ;
}

int main(){

	printIntro("avarage of array elements","02-11-23 18:08") ;
	
	int n = 7, sum = 0 ;
	int arr[n] = {12,13,14,15,16,17,18} ;

	cout <<"Array elements : " ;
	for(int i = 0 ; i < n ; i++ ){
			cout << arr[i] << " ";
			sum += arr[i] ;
	}
	cout << endl ;
	cout << "average : " << (sum/n) << endl ;
	
	return 0 ;
}
