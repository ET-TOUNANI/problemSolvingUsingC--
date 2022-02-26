#include<iostream>
#include<fstream>
#include<string>
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
    string calc="";
    ifstream calcFile;
    calcFile.open("calc.txt");
    // fstream vache("clevache.txt");
    // fstream terrain("terrain.txt");
    while (!calcFile.eof())
    {
        getline(calcFile,calc);
        cout << calc << endl;
    }
    calcFile.close();
    
    return 0;
}