#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter 2 no."<<endl;
	cin>>a>>b;
	cout<<(a<b) && (a>b)<<endl;
	cout<<(a<b) || (a>b)<<endl;
	cout<<!(a<b)<<endl;
	
	return 0;
}