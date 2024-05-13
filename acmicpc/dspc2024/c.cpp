#include <iostream>
#include <algorithm>

int main(){
    int N{};
    std::cin >> N;

    int profit[N]{}, profit_sorted[N]{};
    int price[N]{};
    int max_profit{}, max_profit_cnt{1};

    for(int i = 0 ; i < N ; i++){
        std::cin >> profit[i];
        profit_sorted[i] = profit[i];
    }

    std::sort(profit_sorted, profit_sorted + N, std::greater<>());

    max_profit = profit_sorted[0];

    for(int i = 0 ; i < N-1 ; i++){
        if(profit_sorted[i] == profit_sorted[i+1]){
            max_profit_cnt++;
        }
        else break;
    }

    for(int i = 0 ; i < N ; i++){
        std::cin >> price[i];
    }


    if(max_profit_cnt == 1){
        int second{};
        for(auto p : profit){
            if(p != max_profit){
                if(p > second) second = p;
            }
        }
        for(int i = 0 ; i < N ; i++){
            if(profit[i] == max_profit)
                std::cout << profit[i] - (second - price[i]) - price[i] << " ";
            else
                std::cout << profit[i] - (max_profit - price[i]) - price[i] << " ";
        }
    }

    if(max_profit_cnt > 1){
        for(int i = 0 ; i < N ; i++){
            std::cout << profit[i] - (max_profit - price[i]) - price[i] << " ";
        }
    }

    return 0;
}