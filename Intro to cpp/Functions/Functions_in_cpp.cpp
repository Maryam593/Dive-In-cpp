#include<iostream>
using namespace std;
int sum(int a, int b){
    return a+b;
}

//function overloading
int plusFuncInt(int x, int y) {
  return x + y;
}

double plusFuncDouble(double x, double y) {
  return x + y;
}
int main(){

  //functions in cpp
  cout<<"The sum of two number is "<<sum(5,6)<<endl;

   int myNum1 = plusFuncInt(8, 5);
  double myNum2 = plusFuncDouble(4.3, 6.26);
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;

    return 0;
}