#include<iostream>
using namespace std;
int main()
{
    //Arrays in cpp
    //syntax of an array -> int arr[] = {value/elements}


    int arr[] = {1,2,3,4,5,6,7};
    cout<<arr[1]<<endl;
    //printing out whole array
    for(int i = 0; i<=7; i++){
        cout<<arr[i]<<endl;
    }
    //changing value of in an array
    arr[1] = 2;
    cout<<arr[1]<<endl;

    return 0;
} 
