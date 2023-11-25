#include <iostream> 
using namespace std ;

class Parent{
	public :
	 int parentDataMember ;
} ;

class Child : public Parent{
	
	public :
	 int childDataMember ;
	
	 void setParentDataMember(int x){
		 parentDataMember = x ;
	 }	  
	 void setChildDataMember(int x){
		 childDataMember = x ;
	 }	 
	 void printValues(){
		 cout << "Child Data member value : "<< childDataMember << endl ;
		 cout << "Parent Data member value : "<< parentDataMember << endl ;
	 } 
} ;

void printIntro(string topic, string time) {
	 cout<<"Topic : " << topic << endl ;
	 cout<<"Author : Jitendra Kumar Sahu" << endl ;
	 cout << "Time : "<< time << endl ;
	 cout <<"_____________________*_____________________"<< endl ;
}

int main(){
	printIntro("Single inheritence","23-11-23 17:53") ;

	Child object ;
	object.setParentDataMember(1) ;
	object.setChildDataMember(2) ;
	object.printValues() ;
	return 0 ;
}
