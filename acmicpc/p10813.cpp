#include <iostream>

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;

    int basket[N];

    // fill baskets
    for(int x = 0 ; x < N ; x++){
        basket[x] = x+1;
    }

    // swap balls
    for(int x = 0 ; x < M ; x++){
        int i, j;
        cin >> i >> j;
        i--; j--;

        // swap basket i and j
        int tmp;
        tmp = basket[i];
        basket[i] = basket[j];
        basket[j] = tmp;
    }

    // print results
    for(int x = 0 ; x < N ; x++){
        cout << basket[x] << " ";
    }


    return 0;
}