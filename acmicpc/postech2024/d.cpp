#include <iostream>

int main(){
    // 1. sort
    // from front, stop when c is found
    // from back, stop when p is found
    // swap, increment count
    int N{}, K{}, swap_count{}, result{};

    std::cin >> N >> K;
    
    char str[N];
    std::cin >> str;

    int idx1{}, idx2{N-1};
    int front_stp{}, back_stp{};
    
    for(int i = 0 ; i < N/2 ; i++){
        if(swap_count == K)
            break;

        // front
        if(str[i] == 'C' & !front_stp){
            idx1 = i;
            front_stp = 1;
        }

        // back
        if(str[N-1-i] == 'P' & !back_stp){
            idx2 = N-1-i;
            back_stp = 1;
        }
        
        // swap
        if(front_stp & back_stp){
            char tmp;

            tmp = str[idx1];
            str[idx1] = str[idx2];
            str[idx2] = tmp;

            ++swap_count;
            front_stp = 0;
            back_stp = 0;
        }
    }

    // middle alphabet
    if(N%2 == 1 && str[N/2] == 'C'){
        int k = N-1;
        while(str[k] != 'P'){
            k--;
        }
        // swap
        char tmp;

        tmp = str[k];
        str[k] = str[N/2];
        str[N/2] = tmp;
    }

    // 2. count
    // count num of p
    // when c is found nump C 2
    int num_p{};
    for(int i = 0 ; i < N ; i++){
        if(str[i] == 'P') ++num_p;
        if(str[i] == 'C') result += num_p * (num_p-1) / 2;
    }

    std::cout << result << std::endl;
    
    return 0;
}