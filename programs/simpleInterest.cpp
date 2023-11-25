#include <iostream>
using namespace std ;

void printIntro(string topic, string time) {
 cout<<"Topic : " << topic << endl ;
 cout<<"Author : Jitendra Kumar Sahu" << endl ;
 cout << "Time : "<< time << endl ;
 cout <<"_____________________*_____________________"<< endl ;
}
float getSimpleInterest(float p=0,float r=0 , float t=0){
	return (p*r*t)/100;
}
int main(){
	printIntro("Calculate simple interest using default argument","28-10-23 19:30") ;
	float p = 100, r = 5 , t = 5 ;
	cout << "simple interest : " << getSimpleInterest(p,r,t); 
	cout << endl ;
	return 0 ;
}
