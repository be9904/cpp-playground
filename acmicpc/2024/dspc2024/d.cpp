#include <iostream>
#include <string>

int main(){
    int t{};
    int min_num{}, max_num{};

    std::cin >> t;
    
    int count{};

    for(int i = 0 ; i < t ; i++){
        count = 0;

        std::cin >> min_num >> max_num;
        for(int k = min_num ; k <= max_num ; k++){
            std::string num = std::to_string(k);
            int max_found = 0;
            
            if(num.length() > 2){
                int j = 0;
                for(; j < num.length() - 1 ; j++){
                    if(!max_found){
                        if(num[j] < num[j+1])
                            continue;
                        else
                            break;
                    } else{
                        if(num[j] > num[j+1])
                            continue;
                        else
                            break;
                    }
                }
                if(j == num.length() - 2)
                    count++;
            }
        }
        std::cout << count << '\n';
    }

    
    return 0;
}