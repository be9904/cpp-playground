#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char* str = new char[101];

    cin >> str;
    cout << strlen(str) << endl;
    delete[] str;

    return 0;
}