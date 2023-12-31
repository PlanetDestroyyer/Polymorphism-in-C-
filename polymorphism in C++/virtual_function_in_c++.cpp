//A virtual function is a member function that is declared within a base class and redefined by a dervied class
#include <iostream>
using namespace std;

class base {
    int i ;
    base(int x){
        i = x;
    }

    virtual void function(){
        cout<<"Using base version of function "<<endl;
        cout<<i<<endl;
    }
};

class derived1 : public base{
    derived1(int x):base(x){}
    void function(){
        cout<<"Using Derived 1 version of function ";
        cout<<i+1<<endl;
    }
};

class derived2 : public derived1{
    derived2(int x):base(x){}
    void function(){
        cout<<"Using Derived 2 version of function ";
        cout<<i*i<<endl;
    }
};

int main(){
    base *ptr;
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    base obj(num);
    derived1 d1_obj(num);
    derived2 d2_obj(num);
    ptr = &obj;
    ptr->function();
    ptr = &d1_obj;
    ptr->function();
    ptr = &d2_obj;
    ptr->function();
    return 0;
}