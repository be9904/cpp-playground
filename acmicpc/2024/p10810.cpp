#include <iostream>

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;

    int basket[N] = {0};

    for(int x = 0 ; x < M ; x++){
        int i, j, k;
        cin >> i >> j >> k;

        for(int y = i-1 ; y < j ; y++){
            basket[y] = k;
        }
    }

    for(int x = 0 ; x < N ; x++){
        cout << basket[x] << " ";
    }

    return 0;
}