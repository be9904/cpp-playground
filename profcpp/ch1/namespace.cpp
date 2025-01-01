#include <iostream>

// this is how a namespace is declared.
namespace mycode {
    void foo(){
        std::cout << "foo() called in \'mycode\' namespace." << std::endl;
    }
}

// this is how a nested namespace is declared.
namespace mycode::mynestedcode{
    void foo(){
        std::cout << "foo() called in \'mynestedcode\' namespace in \'mycode\' namespace." << std::endl;
    }
}

int main(){
    // foo() in namespace mycode can be declared using the scope resolution operator '::'.
    mycode::foo();
    mycode::mynestedcode::foo();

    // declaring the usage of namespace std with the 'using' keyword
    // cout << "" << endl; // this will not execute because it is out of the std namespace scope.
    using namespace std;
    cout << endl << "we can print a line by defining the std namespace scope with the \'using\' keyword." << endl;

    // declaring a namespace alias to give a shorter name
    namespace NestedNamespace = mycode::mynestedcode;
    cout << endl << "The line below is printed using a namespace alias." << endl;
    NestedNamespace::foo();

    return 0;
}