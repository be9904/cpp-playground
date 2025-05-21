#include <iostream>

using namespace std;

int main(){
    long N{}, M{};

    cin >> N >> M;
    cout << (N-M > 0 ? N-M : M-N) << endl;

    return 0;
}