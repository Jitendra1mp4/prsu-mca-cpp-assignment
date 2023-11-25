#include <iostream>
using namespace std ;

class Candidate{
    long Rno ;
    string name , remark;
    float score ;
    void assignRem() ;
public :
 void enter(){
    cout << "Enter roll : " ;
    cin >> Rno ;
    cout << "Enter Name : " ;
    getline(cin,name) ;
    getline(cin,name) ;
    cout << "Enter score : " ;
    cin >> score ;
    assignRem() ;
 }
};


void Candidate :: assignRem(){
    score >= 50 ? remark = "Selected" : remark = "Not Selected" ;
}

int main(){

   Candidate c ;
   c.enter() ;

    return 0 ;
}