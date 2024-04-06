#include<iostream>
using namespace std;
int main()
{
    auto a{10};
    auto b{10.3};
    auto c{10.3f};
    auto d{10.3l};
    auto e{'e'};

    auto v1{123u};
    auto v2{123ul};
    auto v3{123ll};

    cout<<sizeof(a)<<endl; //4 - int
    cout<<sizeof(b)<<endl; //8 - double
    cout<<sizeof(c)<<endl; //4 - float 
    cout<<sizeof(d)<<endl; //8 - long double
    cout<<sizeof(e)<<endl; //1 - char

    cout<<sizeof(v1)<<endl; //4 - unsigned
    cout<<sizeof(v2)<<endl; //8 - unsigned long
    cout<<sizeof(v3)<<endl; //8 - long long

    return 0;
}

/* "auto"
    - lets the compiler deduce the datatype of a variable based on the value given to it.

*/