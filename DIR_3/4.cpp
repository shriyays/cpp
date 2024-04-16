#include<iostream>
using namespace std;

int main(){

    int *ptr {new int{5}};
    // delete ptr;
    // ptr=nullptr;
    //null pointer safety is to just check first if a pointer is null or not and only then use it
    if (ptr){
        cout<<"valid address"<<endl;

    }
    else 
        cout<<"INvalid address"<<endl;
    return 0;
}