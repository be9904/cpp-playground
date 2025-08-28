#include <iostream>

int main(){
    long K, N{};

    std::cin >> K >> N;

    if(N == 1){ // K == 1
        long len;
        std::cin >> len;
        std::cout << len << std::endl;
        return 0;
    }
    else if(K == 1){
        long len;
        std::cin >> len;
        std::cout << len / N << std::endl;
        return 0;
    }

    long lan[K]{};
    long maxVal = 2;

    for(int i = 0 ; i < K ; i++){
        std::cin >> lan[i];
        if(lan[i] > maxVal) maxVal = lan[i]; // find maximum value
    }

    long len_max = maxVal;
    long len_min{1};
    
    long len = len_max;
    int cnt = 0;

    while(cnt != N){
        for(int i = 0 ; i < K ; i++){
            cnt += lan[i] / len;
        }

        if(cnt == N){
            break;
        } else if (cnt > N){ // len too short, len has to be longer
            len_min = len + 1;
        } else if (cnt < N){ // len too long, len has to be shorter
            len_max = len - 1;
        }

        len = (len_min + len_max) / 2;

        cnt = 0;

        if(len_min + 1 == len_max || len_min == len_max)
            break;
    }

    while(len > 1){
        cnt = 0;

        // get count
        for(int i = 0 ; i < K ; i++){
            cnt += lan[i] / (len + 1);
        }

        if(cnt != N){
            break;
        }

        len++;
    }

    std::cout << len << std::endl;

    return 0;
}