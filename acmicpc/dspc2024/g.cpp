#include <iostream>
#include <queue>
#define MAX 1000001

using std::queue;

void magic(int a, int b, queue<int>& q, int* visited, int* path);

int main(){
    int a{}, b{};
    int path[MAX]{1};
    int visited[MAX]{};
    queue<int> q;

    std::cin >> a >> b;

    magic(a, b, q, visited, path);

    std::cout << "---------------------------" << '\n';

    std::cout << "STEPS: " << path[b] << " :: " << b << '\n';

    // for(int i = a ; i <= b ; i++){
    //     std::cout << i << " ";
    // }
    // std::cout << '\n';

    // for(int i = a ; i <= b ; i++){
    //     std::cout << path[i] << " ";
    // }
    // std::cout << '\n';

    // int magic3_used{};

    // for(int j = path[b]-1 ; j >= 1 ; j--){
    //     std::cout << j << " :: ";
    //     for (int i = a; i <= b; i++){
    //         if(path[i] == j){
    //             if(b / 10 == i && !magic3_used){
    //                 std::cout << i << '\n';
    //                 b /= 10;
    //                 magic3_used == 1;
    //             }
    //             if(b / 2 == i){
    //                 b /= 2;
    //                 std::cout << i << '\n';
    //             }
    //             if(b - 1 == i){
    //                 b -= 1;
    //                 std::cout << i << '\n';
    //             }
    //         }
    //     }
    // }

    std::cout << path[a] << " :: " << a << '\n';

    return 0;
}

void magic(int a, int b, queue<int>& q, int* visited, int* path){
    visited[a] = 1;
    q.push(a);

    while(!q.empty()){
        int score = q.front();
        if(score == b) break;
        q.pop();

        if(score + 1 <= b && !visited[score + 1]){
            visited[score + 1] = 1;
            q.push(score + 1);
            if(path[score] < 0)
                path[score + 1] = path[score] - 1;
            else
                path[score + 1] = path[score] + 1;
        }

        if(score * 2 <= b && !visited[score * 2]){
            visited[score * 2] = 1;
            q.push(score * 2);
            if(path[score] < 0)
                path[score * 2] = path[score] - 1;
            else
                path[score * 2] = path[score] + 1;
        }

        if(score * 10 <= b && !visited[score * 10] && path[score] > 0){
            visited[score * 10] = 1;
            q.push(score * 10);
            path[score * 10] = -(path[score] + 1);
        }
    }
}