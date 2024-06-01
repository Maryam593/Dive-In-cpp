#include<iostream>
using namespace std;

class person {
    //class is a blueprint and object is the instance of the class
    public:  //access specifier -> three types: public,private, protected
    void display(){
     cout<<"Hello World";
    }
   
};
int main(){
    //obj is object of class
  person obj;
  //.display is a method
  obj.display();
  return 0;
}