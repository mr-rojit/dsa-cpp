#include<iostream>

using namespace std;


int main(){

    int arr[] = {4,6,3,8,9,17};
    int n = sizeof(arr)/sizeof(arr[0]);

    int start = 0, end = n-1;

    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<endl;
    }

}