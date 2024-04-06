/* "std::cin"
    - when cascaded the inputs on the terminal can be separated by spaces or a new line and it will still read them the same 
*/

/* "std::getline()"
    - if you want to enter data/strings with spaces and want the spaces to be considered then getline can be used
    - part of the <string> header. The getline() function extracts characters from the input stream and appends it to the string object until the delimiting character is encountered. 
    - SYNTAX : 
            istream& getline(istream& is, string& str, char delim);
                is: It is an object of istream class and tells the function about the stream from where to read the input from.
                str: It is a string object, the input is stored in this object after being read from the stream.
                delim: It is the delimitation character which tells the function to stop reading further input after reaching this character.
*/

/* "cin.ignore(num,delim)"
    - it ignores the number of characters you specify when you call it, up to the char you specify as a delimiter.
*/

#include<iostream>

int main (){
    std::string name,age;
    std::cin>>name>>age;
    std::cout<<name<<"-"<<age<<std::endl; //endl only clears the output stream buffer
    // to clear the input buffer before using std::getline()
    //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.ignore();
    std::string full_name;
    std::getline(std::cin,full_name); //std::cin is required to tell the getline() which file stream it should read input from
    std::cout<<full_name;
    return 0;

}
