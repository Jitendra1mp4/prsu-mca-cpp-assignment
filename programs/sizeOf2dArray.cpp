#include <iostream>
using namespace std ;

void printIntro(string topic, string time) {
 cout<<"Topic : " << topic << endl ;
 cout<<"Author : Jitendra Kumar Sahu" << endl ;
 cout << "Time : "<< time << endl ;
 cout <<"_____________________*_____________________"<< endl ;
}

int main(){

	printIntro("size of different types of array","02-11-23 18:16") ;

	int p, r, c ;
	
	cout << "\n1D array \n" ;
	cout << "enter number of elements : " ;	
	cin >> c ;
	int arr1d[c] ; // 2d array
	cout << "number of elements : " << c << endl ;
	cout << "size : " << sizeof(arr1d) << endl ;

	cout << "\n2D array \n" ;
	cout << "enter number of rows and columns : " ;	
	cin >> r >> c ;
	int arr2d[r][c] ; // 2d array
	cout << "number of elements : " << (r*c)<< endl ;
	cout << "size : " << sizeof(arr2d) << endl ;
	
	cout << "\n3D array \n" ;
	cout << "enter number of pages, rows and columns : " ;
	cin >> p >> r >> c ;
	int arr3d[p][r][c] ; // 3d array
	cout << "number of elements : " << (p*r*c)<< endl ;
	cout << "size : " << sizeof(arr3d) << endl ;
	return 0 ;
}
