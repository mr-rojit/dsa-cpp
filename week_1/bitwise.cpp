#include<iostream>

using namespace std;


void bitwiseAnd(){

    int a = 3;  //   0 1 1
    int b = 6;  //   1 1 0 
                //  &  1 0  -> 2

    cout<<(a&b)<<endl;
}




void bitwiseOr(){
    int a = 3;  //   0 1 1
    int b = 6;  //   1 1 0 
                // | 1 1 1  -> 7

    cout<<(a|b)<<endl;
}


void bitwiseNot(){

    

}

void bitwiseXor(){
    //    x    y     output       ->  gives 1 if finds single 1

    //    0    1      0
    //    0    0      1
    //    1    1      1
    //    1    0      0
    
    int a = 3;  //   0 1 1
    int b = 6;  //   1 1 0 
                // | 1 0 1  -> 5

    cout<<(a^b)<<endl;

    
}


int main(){

    // Bitwise operation works in bit level
    // AND  &
    // OR   |
    // NOT  ~
    // XOR  ^


   bitwiseAnd();
   bitwiseOr();
   bitwiseXor();

    return 0;
}