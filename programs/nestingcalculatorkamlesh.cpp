//comlete 
#include <iostream>
using namespace std ;
class My_class{
	int a,b;
	public:
		void getdata()
		{
			cout<<"Enter number 1 : ";cin>>a;
			cout<<"Enter number 2 : ";cin>>b;
		}
		void add(){
			getdata();
			cout<<"addition is : "<<a+b;
		}
			void sub(){
			getdata();
			cout<<"addition is : "<<a-b;
		}
			void multi(){
			getdata();
			cout<<"addition is : "<<a*b;
		}
			void divi(){
			getdata();
			cout<<"addition is : "<<a/b;
		}
		
	
};

void choice()
{
	My_class obj;
	int choice;
	cout<<"Enter choice :\n 1 fro addition \n 2 fro division \n 3 for multiplication \n 4 fro substraction : ";cin>>choice;
	switch(choice)
	{
		case 1 : 
		obj.add();
		 break;	
		case 2 : 
    	obj.divi();
     	break;
		
		case 4 :	
		obj.sub();
	     break;	

		case 3 :
		obj.multi();
        break;
		
    }
}

int main()
{
    
    choice();
	return 0 ;
}



