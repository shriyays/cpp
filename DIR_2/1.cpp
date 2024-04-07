#include<iostream>

using namespace std;

int main(){

    int v;
    cout<<"Enter value for v :";
    cin>>v;
    cout<<endl;


    // if else if construct 
    if (v<10){
        cout<<"v is less than 10"<<endl;

    }
    else if (v>10){
        cout<<"v is greater than 10"<<endl;

    }
    else {
        cout<<"V is 10"<<endl;
    }



    int v1{};
    cout<<"Enter a value :";
    cin>>v1;
    cout<<endl;


    //ternary operator 
    (v1>=0)?cout<<"Whole number":cout<<"Integer";
    cout<<endl;


    int choice {};
    cout<<"1. White"<<endl;
    cout<<"2. Blue"<<endl;
    cout<<"3. Lavender"<<endl;
    cout<<"4. Pink"<<endl;
    cout<<"Enter your choice :";
    cin>>choice;



    //switch construct
    switch(choice){ //choice can only be int and char types
    
        case 1: 
        {
            cout<<"WHITE"<<endl;

        }break;
        case 2:
        {
            cout<<"BLUE"<<endl;
        }break;
        case 3:
        cout<<"Lavender"<<endl;
        break;
        case 4:
        cout<<"PINK"<<endl;
        break;
        default:
        cout<<"Pls pick a color"<<endl;

    }
    return 0;
}