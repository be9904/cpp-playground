#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int T{};
    int H{}, W{}, N{};

    cin >> T;
    for(int i = 0 ; i < T ; i++){
        cin >> H >> W >> N;
        int h{}, w{};
        h = N%H == 0 ? H : N%H;
        w = N%H == 0 ? N/H : N/H + 1;
        cout << 100 * h + w << '\n';
    }

    return 0;
}