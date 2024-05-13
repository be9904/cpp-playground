#include <iostream>
#include <queue>

#define MAX 100001

void BFS(int N, int K, std::queue<int> &q, int* path, bool* visited);

int main(){
    int N{}, K{};
    bool visited[MAX]{};
    int path[MAX];
    std::queue<int> q;

    std::cin >> N >> K;

    BFS(N, K, q, path, visited);

    std::cout << "[PATH]" << std::endl;
    for (int i = N; i <= K; i++) {
        printf("%2d ", i);
    }
    printf("\n");
    for (int i = N; i <= K; i++) {
        printf("%2d ", path[i]);
    }
    printf("\n");

    std::cout << path[K] << std::endl;

    return 0;
}

void BFS(int N, int K, std::queue<int> &q, int* path, bool* visited){
    path[N] = 0;
    visited[N] = true;
    q.push(N);

    while(!q.empty()){
        int pos = q.front();
        if(pos == K) break;
        q.pop();

        if(pos+1 >= 0 && pos+1 < MAX && !visited[pos+1]){
            visited[pos+1] = true;
            q.push(pos+1);
            path[pos + 1] = path[pos] + 1;
        }

        if(pos-1 >= 0 && pos-1 < MAX && !visited[pos-1]){
            visited[pos-1] = true;
            q.push(pos-1);
            path[pos - 1] = path[pos] + 1;
        }

        if(pos*2 >= 0 && pos*2 < MAX && !visited[pos*2]){
            visited[pos*2] = true;
            q.push(pos*2);
            path[pos * 2] = path[pos] + 1;
        }
    }
}