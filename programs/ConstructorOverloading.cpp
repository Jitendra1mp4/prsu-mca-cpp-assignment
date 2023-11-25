#include <iostream>
using namespace std ;

class Scooter{
	string brandName ; 
	string color ;
	
	public : 
	 Scooter(){
	 	brandName = "Honda" ;
	 	color = "white" ;
	 }
	 
	Scooter(string clr){
	    brandName = "Suzuki"  ;
	 	color = clr ;
	 }
	 
	Scooter(string var, string clr){
	 	brandName = var ;
	 	color = clr ;
	 }
	 
	 void printDetails(){
	 	cout << "Brand Name : " << brandName << endl ;
	 	cout << "color : " << color <<endl<< endl  ;
	 }
} ;
void printIntro(string topic, string time) {
 cout<<"Topic : " << topic << endl ;
 cout<<"Author : Jitendra Kumar Sahu" << endl ;
 cout << "Time : "<< time << endl ;
 cout <<"_____________________*_____________________"<< endl ;
}

int main(){
	printIntro("Constructor overloading","23-11-23 22:14") ;
	
	Scooter activa ;
	Scooter pleasure("red") ;
	Scooter mastro("hero","blue") ;
	
	activa.printDetails() ;
	pleasure.printDetails() ;
	mastro.printDetails() ;
	
	return 0 ;
}
