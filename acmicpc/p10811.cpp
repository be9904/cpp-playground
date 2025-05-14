#include <iostream>

using namespace std;

int main(){
    int N{}, M{};
    cin >> N >> M;

    // init array
    int* arr = new int[N];
    for(int l = 0; l < N; l++){
        arr[l] = l+1;
    }

    // flip
    int i{}, j{};
    for(int k = 0; k < M; k++){
        cin >> i >> j;
        i--;    j--;
        for(int l = i; l < (i+j)/2 + 1; l++){
            int tmp{};
            tmp = arr[l];
            arr[l] = arr[j-l+i];
            arr[j-l+i] = tmp;
        }
    }

    // print results
    for(int a = 0; a < N ; a++){
        cout << arr[a] << " ";
    }

    return 0;
}