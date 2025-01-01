#include <iostream>

// this is how a namespace is declared.
namespace mycode {
    void foo(){
        std::cout << "foo() called in \'mycode\' namespace" << std::endl;
    }
}

int main(){
    // foo() in namespace mycode can be declared using the scope resolution operator '::'.
    mycode::foo();

    return 0;
}