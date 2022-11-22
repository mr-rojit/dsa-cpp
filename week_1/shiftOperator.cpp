#include<iostream>

using namespace std;


int main(){


    /*

         <<     left shift     **    in majority cases (gets multipled by 2) if not reaching MSB
         >>     right shift

         In case of positive number Padding is done by zeros

         If the number is negetive then It is compiler dependent


    */

    // left shift example
    int x = 5;

    cout<<(x<<2)<<endl;  //  ->  results to 20

    /*  
    
    Explanation  

    5 in binary -> 00000101    (extra zeros infront exists because it is an 32 bit int and bits before are populated by zeros)
    5 << 1   -> meaning shift every bit by 1 to left

    now shifting 101 by 2 positions to left   -> 0010100   -> results 20
 

    */

    // Right Shift
    int a = 10;    //   0001010
    cout<< (a>>2)<<endl; //   0010    -> results 2

    








    return 0;
}