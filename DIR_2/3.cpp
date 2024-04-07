#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

    int scores[10]; //declaring datatype and size
    for(int i{};i<10;i++)
        cout<<scores[i]<<setw(4); //garbage values


    cout<<endl;
    cout<<scores;
    cout<<endl<<endl;


    float salaries[5] {1.0f, 3.9, 4.5, 6.2, 7.4}; //initialising values
    for(int i{};i<size(salaries);i++) //size() - to find the size of an array
        cout<<setprecision(2)<<salaries[i]<<setw(4); 
    cout<<endl<<salaries<<endl; // print address
    
    

    double s[] {1.0, 3.9, 4.5, 6.2, 7.4}; //also initialising values
    for(auto i:s)
        cout<<i<<setw(4);
    cout<<endl;



    char m[3] {'h','i','e'}; //not a cstring
    cout<<m<<endl;
    m[1]='o';
    cout<<m<<endl;
    for(auto i:m)
        cout<<i;

    cout<<endl;



    char m2[] {'h','i','\0'}; // cstring
    cout<<m2<<endl;


    char message[] {"hi"};// c string - equivalent to {'h','i','\0'}
    cout<<message<<endl;


    return 0;

}