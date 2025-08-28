#include <iostream>

using namespace std;

int main(){
    int num[10];
    int rem[42] = {0};
    int cnt = 0;

    for(int i = 0 ; i < 10 ; i++){
        cin >> num[i];
        rem[num[i]%42]++;
    }

    for(int i = 0 ; i < 42 ; i++){
        cout << rem[i] << endl;
        if(rem[i] != 0) cnt++;
    }

    cout << cnt << endl;

    return 0;
}