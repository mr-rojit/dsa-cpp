#include<iostream>

using namespace std;


int main(){

    int n = 67;
    bool isPrime = true;
    for (int i = 2; i<n/2; i++){
        if(n%i == 0){
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout<< n <<" is a prime number"<<endl;
    else
        cout<<n <<" is not a prime number"<<endl;

    return 0;
}