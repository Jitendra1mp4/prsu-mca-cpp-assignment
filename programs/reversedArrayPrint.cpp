#include <iostream>
using namespace std ;

void printIntro(string topic, string time) {
 cout<<"Topic : " << topic << endl ;
 cout<<"Author : Jitendra Kumar Sahu" << endl ;
 cout << "Time : "<< time << endl ;
 cout <<"_____________________*_____________________"<< endl ;
}

int main(){

	printIntro("Print Reversed Array","02-11-23 18:00") ;
	
	int n = 5 ;
	int arr[n] = {11,12,13,14,15}  ;
	
	cout << "Our array : " << endl ;
	
	for (int i = 0 ; i < n ; i++ ){
		cout << arr[i] << " " ;
	}
	cout << endl ;
	
	cout << "in reversed order : " << endl ;
	
	for (int i = n-1 ; i >= 0 ; i--){
		cout << arr[i] << " " ;
	}
	cout << endl ;
	
	return 0 ;
}
