// operation overlaoding means redifing the oprators as per our neeeds 
// can overload +.-.*,/,<,>,==,&&,||,[],->,=,<<,>>
/*Rules of opertor ovetloading :
    Only existing operators can be overloaded
    The basic meaning of the operator can not be changed
    must follow the syntax
    binary operator should return a value
    when binary operators overloaded throught a member function, the left hand operand must be an object of relevant class
    */

#include <iostream>

using namespace std;

//unary operator overloading
class Increase{
    private : 
    int value;

    public:
    Increase()
    {
        value = 10;
    }

    void operator ++(){
        value = value + 5;
        
    }

    void display(){
        cout<<"Value is : " <<value<<endl;
    }
};

//binary operator overloading

class complex {
    private:
    int real;
    int img;

    public:
    void input(){
        cout<<"Enter real and imagenry parts respectively : "<<endl;
        cin>>real;
        cin>>img;

    }

    complex operator+ (complex obj){
        complex temp;
        temp.real = real+obj.real;
        temp.img = img+obj.img;
        return temp;

    }

    void output(){
        cout<<"Output is : "<<real <<"+"<< img <<"i"<<endl;
    }
};

int main(){
    Increase inc;
    ++inc;
    inc.display();


    complex com1,com2,result;
    cout<<"Enter first complex number : "<<endl;
    com1.input();
    cout<<"Enter second complex number : "<<endl;
    com2.input();

    result = com1 + com2;
    result.output();
    return 0;
}

