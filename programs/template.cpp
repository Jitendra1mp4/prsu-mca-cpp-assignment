#include <iostream>
using namespace std ;

void printIntro(string topic, string time) {
 cout<<"Topic : " << topic << endl ;
 cout<<"Author : Jitendra Kumar Sahu" << endl ;
 cout << "Time : "<< time << endl ;
 cout <<"_____________________*_____________________"<< endl ;
}
template<class T>
class A
{
public:
T a,b;
T add()
{
cout<<"Enter a and b is: "<<endl;
cin>>a>>b;
cout<<"Addition is : "<<a+b<<endl;
//return a+b ;
}
};
int main()
{
A<int>d;
A<float>d1;
d.add();
d1.add();
return 0;
}
