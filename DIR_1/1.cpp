//(terms)
//INPUT - direction of bytes from device to main memory 
//OUTPUT - direction of bytes from main memory to device 
//STREAM - flow of data into or out of a program
//FUNCTION - block of code that only runs when it is called - set of statements that take inputs, dooes some specific computation, and produces output 

#include<iostream>
int main()
{
    std::cout<<"hello world\n";
    //std::cerr<<"no";
    return 0 ;
}

/* HEADER FILES

"iostream" - standard input output stream - definitions of cout/cin/cerr/clog
"iomanip" - input/output manipulators - has methods for manipulating streams : setw/setprecision
"fstream" - file stream - to handle data being read from / written to, a file
"ios" - 
"cmath" - math functions
*/

/* VARIOUS OBJECTS/METHODS

"main()" - the function called when the program is run - execution of cpp programs begin with the main function, regardless of where the function is actually located


(instances of iostream class)

"cout"
        - standard output stream 
        - instance of ostream class 
        - "<<" the insertion operator is used to insert the data in the output stream/cout(stored in a file) 
        - then displays it on screen

"cin" 
        - standard input stream 
        - instance of istream class 
        - ">>" extraction operator extracts data from cin which is entered using keyboard

"cerr" 
        - un-buffered standard error stream 
        - instance of iostream class 
        - to display error message immediately 
        - cannot display messages later( not stored in a file)

"clog" 
        - buffered standard error stream 
        - instance of ostream class 
        - to display errors 
        - the error is first inserted and stored in a buffer until not fully filled
        - explicitly cleared by flush() 
        - then displayed on screen 

"good()"
"bad()"
"setstate()"
"eof()"
"clear()"
"rdstate()"
"operator()"
"operator!()"


(instances of iomanip class)

"setprecision(int n)" 
        - instance of iomanip 
        - to set the ios library floating point precision based on the precision specified as the parameter to this method ("n") 
        - does not return anything 
        - works as a stream manipulators 

"setw()" -
"setioflag()" - 
"resetiosflags (ios_base::format_flag)" - 
"setbase()"
"setfill()"
"left"-left jsutified
"right"- right justified


(cwchar.h file)

"wcscpy"
"wcscmp"
"wcsspn"
"wcslen"
"btowc"
"quick_exit()"
"comj()"
"norm()"

(cmath header file)
"floor()"
ceil()
abs()
cos()
exp()
log()
pow()
sqrt()
round()
sin()
tan()

*/

