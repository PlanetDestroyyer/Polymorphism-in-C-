//fincion overloading is a concept in c++ in which one can use many functions having same name but can pass differnet number of parameters or different types of parameters

#include <iostream>
using namespace std;


class test 
{
private :
int a,b,c,d;
public:
    int sum(int,int);
    int sum(int,int,int);
    int sum(int,int,int,int);

};

int test :: sum(int a , int b){
    return (a+b);
}

int test :: sum(int a , int b, int c){
    return (a+b+c);
}
int test :: sum(int a , int b, int c ,int d){
    return (a+b+c+d);
}


int main(){
    test obj;
    obj.sum(2,4);
    obj.sum(2,4,5);
    obj.sum(2,4,5,7);
    return 0;
}