#include<iostream>
#include<limits>

using namespace std;

int main(){
    
    cout<<numeric_limits<int>::min(); cout<<endl;
    cout<<numeric_limits<int>::max(); cout<<endl;
    cout<<numeric_limits<int>::lowest(); cout<<endl;

    cout<<endl;

    cout<<numeric_limits<signed int>::min(); cout<<endl;
    cout<<numeric_limits<signed int>::max(); cout<<endl;
    cout<<numeric_limits<signed int>::lowest(); cout<<endl;

    cout<<endl;

    cout<<numeric_limits<unsigned int>::min(); cout<<endl;
    cout<<numeric_limits<unsigned int>::max(); cout<<endl;
    cout<<numeric_limits<unsigned int>::lowest(); cout<<endl;

    cout<<endl;

    cout<<numeric_limits<long long int>::min(); cout<<endl;
    cout<<numeric_limits<long long int>::max(); cout<<endl;
    cout<<numeric_limits<long long int>::lowest(); cout<<endl;

    cout<<endl;

    cout<<numeric_limits<long int>::min(); cout<<endl;
    cout<<numeric_limits<long int>::max(); cout<<endl;
    cout<<numeric_limits<long int>::lowest(); cout<<endl;

    cout<<endl;

    cout<<numeric_limits<short int>::min(); cout<<endl;
    cout<<numeric_limits<short int>::max(); cout<<endl;
    cout<<numeric_limits<short int>::lowest(); cout<<endl;

    cout<<endl;

    cout<<numeric_limits<unsigned short int>::min(); cout<<endl;
    cout<<numeric_limits<unsigned short int>::max(); cout<<endl;
    cout<<numeric_limits<unsigned short int>::lowest(); cout<<endl;

    cout<<endl;

    cout<<numeric_limits<float>::min(); cout<<endl;
    cout<<numeric_limits<float>::max(); cout<<endl;
    cout<<numeric_limits<float>::lowest(); cout<<endl;

    cout<<endl;

    cout<<numeric_limits<double>::min(); cout<<endl;
    cout<<numeric_limits<double>::max(); cout<<endl;
    cout<<numeric_limits<double>::lowest(); cout<<endl;

    cout<<endl;

    cout<<numeric_limits<long double>::min(); cout<<endl;
    cout<<numeric_limits<long double>::max(); cout<<endl;
    cout<<numeric_limits<long double>::lowest(); cout<<endl;

    cout<<endl;
    return 0;


}

//syntax : "std::numeric_limits::<datatype>::func()""