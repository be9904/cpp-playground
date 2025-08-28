#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int iterations{};

    cin >> iterations;

    for(int i = 0 ; i < iterations ; i++){
        char* str = new char[1001];
        cin >> str;
        cout << str[0] << str[strlen(str)-1] << endl;
        delete[] str;
    }

    return 0;
}