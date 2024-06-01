
#include<iostream>
using namespace std;
int main(){

    int a = 16;
    if(a<=12){
        cout<<"you are a kid"<<endl;
    }
    else if(a>=12 && a<=19){
        cout<<"you are a teen"<<endl;
    }
    else{
        cout<<"you are an adult now";
    }

    return 0;
}