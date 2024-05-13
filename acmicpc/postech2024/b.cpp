#include <iostream>

int inspect(int* score);

int main(){
    int result{}, N{};

    std::cin >> N;

    int report[N][3]{};

    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < 3 ; j++){
            std::cin >> report[i][j];    
        }
        result += inspect(report[i]);
    }

    std::cout << result << std::endl;
}

int inspect(int* score){
    int done = 0;
    // -1  n -> 0
    //  n -1 -> 1
    // -1 -1 -> 1
    //  n  n -> undef
    if(score[0] == -1)
        return 0;

    for(int i = 0; i < 2 ; i++){
        if(!done){
            if(score[i] <= score[i+1])
                continue;
            else if(score[i+1] == -1){
                done = 1;
                continue;
            }
            else
                return 0;
        }
        else{
            if(score[i+1] != -1)
                return 0;
        }
    }

    return 1;
}