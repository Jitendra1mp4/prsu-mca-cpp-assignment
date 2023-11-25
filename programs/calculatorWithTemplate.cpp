#include <iostream>
using namespace std;

void printIntro(string topic, string time)
{
	cout << "Topic : " << topic << endl;
	cout << "Author : Jitendra Kumar Sahu" << endl;
	cout << "Time : " << time << endl;
	cout << "_____________________*_____________________" << endl;
}

template <typename T, typename U>
class Calc
{

public:
	void operate(T a, T b, char operation)
	{
		switch (operation)
		{
		case '+':
			cout << a + b << endl;
			break;

		case '-':
			cout << a - b << endl;
			break;

		case '*':
			cout << a * b << endl;
			break;

		case '/':
			cout << a / b << endl;
			break;

		default:
			cout << "Operation not defined " << endl;
		}
	}
};
int main()
{

	printIntro("calculator using template class", "28-10-23 19:57");
	Calc<int, int> c;
	Calc<float, float> d;

	int a = 5, b = 6;
	float x = 5.2f, y = 5.3f;
	
	cout << a << " + " <<b << " : "   ;
	c.operate(a, b, '+');

	cout << a << " - " <<b << " : "   ;
	c.operate(a, b, '-');

	cout << a << " * " <<b << " : "   ;
	c.operate(a, b, '*');

	cout << a << " / " <<b << " : "   ;
	c.operate(a, b, '/');


	cout << x << " + " << y << " : "   ;
	d.operate(x, y, '+');

	cout << x << " - " << y << " : "   ;
	d.operate(x, y, '-');

	cout << x << " * " << y << " : "   ;
	d.operate(x, y, '*');

	cout << x << " / " << y << " : "   ;
	d.operate(x, y, '/');

	return 0;
}
