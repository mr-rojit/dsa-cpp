#include<iostream>

using namespace std;

int main(){

    int num = 10;

    // printing address of num

    cout << &num <<endl;  // &   -> address of


    // storing value of a variable in pointer 

    int *ptr = &num; 

    return 0;
}