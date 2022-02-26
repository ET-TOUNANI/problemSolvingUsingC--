#include<iostream>
using namespace std;

class Calc
{
    public :
    double a,b;
    double Add(){
        return a+b;
    }
    double Sub(){
        return a-b;
    }
    double Mult(){
        return a*b;
    }
    double Div(){
        double c;
         if (b != 0) 
            c = (double) a / b;
        else return -1;
        return c;
    }
};

int main()
{

}