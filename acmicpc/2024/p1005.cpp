#include <iostream>
#include <algorithm>
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
        int indegree[N]{};
        int toBuild[N]{};
        vector<int> built;

        int W{};

        for(int i = 0 ; i < N ; i++){
            std::cin >> D[N];
        }

        for(int i = 0 ; i < K ; i++){
            int X{}, Y{};
            std::cin >> X >> Y;
            adjList[X - 1][Y - 1] = 1;
            indegree[Y-1]++;
            if(!toBuild[X - 1]){
                toBuild[X - 1] = 1;
                built.push_back(X - 1);
            }
            if(!toBuild[Y - 1]){
                toBuild[Y - 1] = 1;
                built.push_back(Y - 1);
            }
        }

        std::sort(built.begin(), built.end());

        std::cin >> W;

        ///////////////////////////////////////
        
        queue<int> q;
        for(auto b : built){
            if(indegree[b] == 0) q.push(b);
        }

        int min_time{999999999};

        while(!q.empty()){
            int start = q.front();
            q.pop();

            vector<int> torder;
            queue<int> q2;
            torder.push_back(start);
            q2.push(start);

            while(!q2.empty()){
                int next = q2.front();
                if(next == W-1) break;
                q2.pop();

                for(int i = 0 ; i < N ; i++){
                    if(adjList[next][i] == 1){
                        indegree[i]--;
                        torder.push_back(i);
                        q2.push(i);
                    }
                }
            }

            int time{};

            time += D[start];

            for(auto t : torder){
                int max{};
                for(int i = 0 ; i < N ; i++){
                    if(adjList[t][i] == 1)
                        if(max < D[i])
                            max = D[i];
                }
            }

            if(min_time > time) min_time = time;

        }

        std::cout << "TIME: " << time << std::endl;

    }


    return 0;
}