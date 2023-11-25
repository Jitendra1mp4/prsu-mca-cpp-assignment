#include<iostream>
using namespace std;

class Great
{
  
	   int max( int a , int b){
		   return a>b ? a : b ;
	   }   	
	   public: 
	   
	   int getMax(int a , int b, int c){
	   	return max(a, max(b,c)) ;
	   }
	   	   

};




int main()
{
	Great obj;
//     int d, first , second ,  third ;
//	cout<<"Enter two number : ";cin>>first>>second;
//    
//	d= obj.max(first,second);;
//	cout<<"Enter third number : ";cin>>third;
//	obj.max2(third,d);


	cout << "mAX " << obj.getMax(21,12,3)  ;

	
	return 0 ;
}
