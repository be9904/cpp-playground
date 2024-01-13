// helloworld.cpp

// This is a comment.
/* This is a multiline comment.
   The compiler will ignore it.
*/

#include <iostream> // preprocessor directive to import contents of iostream header file
// import <iostream>; // importing modules is supported in C++20.

using std::cout, std::endl; // referring to specific items in a namespace with the 'using' directive. '::' is the scope resolution operator.

int main(int argc, char* argv[]){ // main function with input parameters
    cout << "Hello, World!" << endl; // iostream. it is recommended to use std::format() in C++20 because printf() and scanf() do not provide type safety.
    
    cout << "Total " << argc << " argument(s). ";
    for(int i = 0 ; i < argc ; i++)
        cout << "\'" << argv[i] << "\' ";
    cout << endl;
    
    return 0;
}