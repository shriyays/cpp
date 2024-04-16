#include<iostream>
#include<string>

int main(){
    std::string name; //empty string
    std::string message {"hello world"};  // initialisation
    std::string message2 {message};
    std::string message3 {"hello world",3} ; // first 3 characters of another string 
    std::string message4 (4,'e');
    std::string message5 { message,2,3}; // a part of another string starting from index 2
    std::string message6 { message,2}; //string from index 2

    std::cout<<"name : "<<name<<std::endl; // 
    std::cout<<"message : "<<message<<std::endl; //hello world 
    std::cout<<"message2 : "<<message2<<std::endl; // hello world
    std::cout<<"message3 : "<<message3<<std::endl; //hel
    std::cout<<"message4 : "<<message4<<std::endl; //eeee
    std::cout<<"message5 : "<<message5<<std::endl; //llo
    std::cout<<"message6 : "<<message6<<std::endl; //llo world

    return 0;
}