#include <iostream>
#include <conio.h>
using namespace std; 

int main(){
    int a = 10 , ctr = -1 ; 
    goto check ;
    
    even : 
         cout << " Even "<< endl ;
         goto check ;
    odd : 
         cout << " Odd " << endl ;
  
    check : 
          ctr++ ; 
          cout << ctr ;
          if(ctr <= a) { 
              if( ctr%2 == 0 ) goto even ;
              else goto odd ;
          }
     getch() ;
    return 0 ;
}
