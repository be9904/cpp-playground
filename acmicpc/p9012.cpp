#include <iostream>
#include <stack>
#include <cstring>

int main(){
    int cnt{};
    int j{};
    char input[51];

    std::cin >> cnt;

    for(int i = 0 ; i < cnt ; i++){
        std::stack<int> s;
        std::cin >> input;
        
        for(j = 0 ; j < (int)strlen(input) ; j++){
            if(input[j] == '(')
                s.push(1);
            else if(input[j] == ')'){
                if(!s.empty())
                    s.pop();
                else{
                    std::cout << "NO" << std::endl;
                    break;
                }
            }
        }

        if(j == (int)strlen(input)){
            if(s.empty())
                std::cout << "YES" << std::endl;
            else
                std::cout << "NO" << std::endl;
        }
    }

    return 0;
}