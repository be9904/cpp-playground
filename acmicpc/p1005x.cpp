#include <iostream>
#include <vector>
#include <queue>

using std::vector;
using std::queue;

int main(){
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int T{};
    int N{}, K{};

    std::cin >> T >> N >> K;


    for(int j = 0 ; j < T ; j++){
        int D[N]{};
        int adjList[N][N]{};

        int W{};

        for(int i = 0 ; i < N ; i++){
            std::cin >> D[N];
        }

        for(int i = 0 ; i < K ; i++){
            int X{}, Y{};
            std::cin >> X >> Y;
            adjList[X - 1][Y - 1] = 1;
        }

        std::cin >> W;

        ////////////////////////////


        vector<vector<int>> hierarchy;
        queue<int> q;
        int level{};


        // 1. start from building W, push to vector
        hierarchy.push_back(vector<int> ());
        hierarchy[level++].push_back(W-1);
        q.push(W-1);

        std::cout << "[ADJ LIST]" << std::endl;
        for(int k = 0 ; k < N ; k++){
            for(int l = 0 ; l < N ; l++){
                std::cout << adjList[k][l] << " ";
            }
            std::cout << std::endl;
        }
        std::cout << "---------------------" << std::endl;
        // 2. save adjacent buildings on next level
        while(!q.empty()){
            int front = q.front();
            q.pop();
            hierarchy.push_back(vector<int> ()); // make new level

            int deg_cnt{};

            for(int i = 0 ; i < N ; i++){
                std::cout << "PATH: " << i << " -> " << front << " :: ";
                
                if(adjList[i][front] == 1){
                    q.push(adjList[i][front]);
                    hierarchy[level].push_back(adjList[i][front]);
                    deg_cnt++;
                    std::cout << "PATH EXISTS\n";
                }else{
                    std::cout << "NO PATH: " <<  adjList[i][front] << '\n';
                }
            }

            std::cout << "[HIERARCHY]" << std::endl;
            for(auto a : hierarchy){
                for(auto b : a){
                    std::cout << b << " ";
                }
                std::cout << std::endl;
            }
            std::cout << "---------------------" << std::endl;


            level++;
            std::cout << "DEGREE COUNT: " << deg_cnt << '\n';
            if(!deg_cnt) break;
        }

    }


    return 0;
}