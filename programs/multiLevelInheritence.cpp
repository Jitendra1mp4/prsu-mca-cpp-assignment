#include <iostream> 
using namespace std ;

class Vhicle{
	public :
	 void start(){
	   cout << "Vhicle is starting!"<< endl ;
	}
} ;

class Car: public Vhicle{
	public :
	 void run(){
		 cout <<"Car is running!"<<endl ;
	 }
} ;

class Creta : public Car{
	public :
	void accelerate(){ 
		cout << "accelerating the speed" << endl ;
	}
} ;

void printIntro(string topic, string time) {
	 cout<<"Topic : " << topic << endl ;
	 cout<<"Author : Jitendra Kumar Sahu" << endl ;
	 cout << "Time : "<< time << endl ;
	 cout <<"_____________________*_____________________"<< endl ;
}

int main(){
	printIntro("Multiple Inheritence","23-11-23 17:53") ;

	Creta yourCreta ;
	yourCreta.start() ;
	yourCreta.run() ;
	yourCreta.accelerate() ;
	return 0 ;
}
