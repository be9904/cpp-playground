#include <iostream>
#include <cmath>

int main(){
    int a{}, b{}, c{};
    std::cin >> a >> b >> c;

    // a + b = c * c

    if(!a){
        a = c * c - b;
        std::cout << a << std::endl;
    } else if(!b){
        b = c * c - a;
        std::cout << b << std::endl;
    } else if(!c) {
        c = static_cast<int>(std::sqrt(static_cast<double>(a+b)));
        std::cout << c << std::endl;
    }

    return 0;
}