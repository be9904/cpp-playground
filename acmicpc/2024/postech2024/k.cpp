#include <iostream>
#include <deque>
#include <cmath>

void query2(std::deque<int> &d);

int main(){
    int num_query{};
    std::deque<int> d;

    std::cin >> num_query;

    int Q{}, num{};

    for(int i = 0 ; i < num_query ; i++){
        std::cin >> Q;
        if(Q == 1){
            std::cin >> num;
            d.push_back(num);
        }
        else if (Q == 2){
            int sum_front{}, sum_back{};
            query2(d);
        }
    }

    // print deque
    for(int i = 0 ; i < d.size() ; i++){
        std::cout << d[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

void query2(std::deque<int> &d){
    int div = std::floor(d.size() / 2);
    int front{}, back{};

    for(int i = 0 ; i < d.size() ; i++){
        if(i < div)
            front += d[i];
        else
            back += d[i];
    }

    // erase front
    if(front <= back){
        for(int i = 0 ; i < div ; i++)
            d.pop_front();
        std::cout << front << std::endl;
    }
    else{ // erase back
        int sz = d.size();
        for(int i = div ; i < sz ; i++)
            d.pop_back();
        std::cout << back << std::endl;
    }

    return;
}