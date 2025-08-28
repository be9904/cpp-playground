#include <iostream>

using namespace std;

int main(){
    int N, v;
    int cnt = 0;
    cin >> N;

    int num[N];

    for(int i = 0 ; i < N ; i++){
        cin >> num[i];
    }

    cin >> v;

    for(int i = 0 ; i < N ; i++){
        if(num[i] == v) cnt++;
    }

    cout << cnt << endl;

    return 0;
}