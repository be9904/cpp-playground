#include <iostream>

using namespace std;

int main(){
    int N{};
    cin >> N;

    char* str = new char[N];
    int sum{};

    cin >> str;
    for(int i = 0 ; i < N ; i++){
        sum += static_cast<int>(str[i])-48;
    }
    cout << sum << endl;

    return 0;
}