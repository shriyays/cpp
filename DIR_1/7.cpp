#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    // DATATYPES 

    // int - integers 
    int a = 10;

    //double - decimals
    double b = 29.32425235;

    //float - decimals with lesser range
    float c = 342.423523613261613f;
    float pi=3.14;

    //long double
    long double ld = 342.423523613261613;

    //char - single characters with single quotes
    char d = 'f';

    //bool - true/false
    bool e = true; //1
    bool f = false; //0

    cout<<setprecision(10);// only sets precision
    cout<<a<<" "<<b<<" "<<c<<" "<<pi<<" "<<ld<<" "<<d<<" "<<e<<" "<<boolalpha<<f<<endl;
    //std::boolalpha forces the output of booleamn variables in true/false only not 1/0
    cout<<endl;



    //CONVERSION OF CHAR TO INT

    char aa {65};
    cout<<endl<<aa; //prints A
    cout<<endl<<static_cast<int>(aa); //prints 65

    cout<<endl;




    //SIZEOF()

    std::cout<<"Size of char : "<<sizeof(char)<<std::endl;
    std::cout<<"Size of bool : "<<sizeof(bool)<<std::endl;
    std::cout<<"Size of int : "<<sizeof(int)<<std::endl;
    std::cout<<"Size of short : "<<sizeof(short)<<std::endl; 
    //std::cout<<"Size of short short : "<<sizeof(short short)<<std::endl;
    std::cout<<"Size of long : "<<sizeof(long)<<std::endl; 
    std::cout<<"Size of long long : "<<sizeof(long long)<<std::endl;
    std::cout<<"Size of float : "<<sizeof(float)<<std::endl;
    std::cout<<"Size of double : "<<sizeof(double)<<std::endl;
    std::cout<<"Size of long double : "<<sizeof(long double)<<std::endl;
    std::cout<<"Size of string : "<<sizeof(std::string)<<std::endl;
    
    return 0;
}

//weird integral types - char , short int - they do not support basic arithmetic operations as they result in int type and not short int or char