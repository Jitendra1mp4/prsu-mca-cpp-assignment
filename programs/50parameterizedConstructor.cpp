#include <iostream>
using namespace std;

class ParamConstruct
{
private:
	// Three private members
	int num1, num2, num3;
public:
	// constructor declaration
	ParamConstruct(int num1, int num2, int num3);
	void printData();
};
// constructor definition
ParamConstruct::ParamConstruct(int num1, int num2, int num3){
	this->num1 = num1;
	this->num2 = num2;
	this->num3 = num3;
}

void ParamConstruct ::printData(){
	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;
	cout << "num3 : " << num3 << endl;
}

void printIntro(string topic, string time){
	cout << "Topic : " << topic << endl;
	cout << "Author : Jitendra Kumar Sahu" << endl;
	cout << "Time : " << time << endl;
	cout << "------------------*------------------" << endl;
}

int main(){
	printIntro("Parametrized constructor demonstration", "24-11-23 22:46");

	int num1, num2, num3;
	cout << "Enter three integers : " ;
	cin >> num1 >> num2 >> num3 ;
	
	// creating object while passing values in to constructor
	ParamConstruct obj(num1, num2, num3);
	cout << "printing the members of object...\n";
	obj.printData();
	return 0;
}
