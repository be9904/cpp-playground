#include <iostream>
#include <string>
#include <algorithm>

int main(){
    std::string in1, in2, in3;

    std::cin >> in1 >> in2 >> in3;

    char init_char[3]{};

    init_char[0] = in1[0];
    init_char[1] = in2[0];
    init_char[2] = in3[0];

    std::sort(init_char, init_char + 3);

    if(init_char[0] == 'k' && init_char[1] == 'l' && init_char[2] == 'p'){
        std::cout << "GLOBAL" << std::endl;
    } else {
        std::cout << "PONIX" << std::endl;
    }

    return 0;    
}