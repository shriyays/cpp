/* 
INTRODUCTION TO C++ :

    - It is a statically typed compiled programming language.
    - Developed by Bjarne Stroustrup in 1979 at the AT&T Bell laboratories.
    - Owns the objected oriented programming features of Simula and high performance features of C.
    - also called as C with classes or as the sueprset of C.
    - possesses zero overhead abstractions i.e. the OOP concepts such as : POLYMORPHISM / ENCAPSULATION / INHERITANCE.
    - makes use of low level memory and hardware control like C along with the high level abstractions.

*/


//CODE 
#include<iostream>
#include<string>
using namespace std;


void func()
{
   // std::cout<<"Print"; - when "using namespace std;" is not used 
   cout<<"Print\n";

   // char hello[] = " HELLOO "; - when "include<string>" is not used
   string hello = "HELLO";
   
}

/*
OOP WITH CLASSES :

CLASS - blueprint of an object - has attributes and methods which are all private by default.

*/


class Human
{
    float DNA; // private by default
    public:    //access specifier to make it public
        string face;
        void walk() // methods defined inside a class 
        {
            cout<<"waiting\n";
        }
        void run();
};

void Human::run() //methods defined outside a clas using the Scope Resolutions Operator.
{
    cout<<"running\n";
}

/*
FUNCTION OVERLOADING :

- methods defined multiple times 
- it is a type of polymorphism

*/


class person{
    public:
        void walks(int speed){
            cout<<"walks with a speed of "<<speed<<"\n";
        }
        void walks(float speed, string injury){
            cout<<"walks with"<<injury<<"at a speed of "<<speed<<"\n";
        }

};

/*
CONSTRUCTORS :

- special methods that are auto invoked at the time of object creation
- has the same name as the class
- are of 3 types : DEFAULT CONSTRUCTORS / PARAMETERISED CONSTRUCTORS / NON-PARAMETERISED CONSTRUCTORS

*/

/*
DESTRUCTORS: 

- destroys the objects created by the constructor and releases the memory occupied previously.
- an instance member function.
- invoked when an object is being destroyed.

*/


class whatever{
    public:
        whatever(){ //constructor
            cout<<"constructor executed \n";
            cout<<"gets printed without the function being called explicitly as it is a constructor\n";

        }
        ~whatever(){
            cout<<"destructor executed \n";
        } //destructor 

};


//INHERITANCE - used for efficiently sharing code/logic in a program.
class superhero{ //BASE CLASS 
    public:
        float lifespan;
        string weapon;
        bool partner;
        void details(){
                cout<<"LIFESPAN: "<<lifespan<<"\n";
                cout<<"USES WEAPON : "<<weapon<<"\n";
                cout<<"EXISTENCE OF A PARTNER : "<<partner<<"\n";
        }

};

class marvel : public superhero{ //INHERITED CLASS  or  DERIVED CLASS
        public:
            string identity = "Thor";
            void strength(){
                cout<<identity<<" can fly with his hammer.\n";
            }
};


//INSTANTIATING AN OBJECT 
int main()
{
    func(); //function call
    Human person_A; //object creation : name of the object created is "person_A"
    Human* myptr = new Human; //object creation manually using pointers
    delete myptr; //destroying the pointer object
    unique_ptr<Human> ptrP; //Smart pointers - only one object is allocated with "unique_ptr"

    person_A.walk();
    person_A.run();

    person a;
    a.walks(8);
    a.walks(3.6,"broken arm");

    whatever obj;

    marvel hero;
    hero.lifespan = 6969.0;
    hero.weapon = "Mjollnir";
    hero.partner = true;
    hero.strength();
    hero.details();





    return 0;
}

