#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char* _n = new char[1001];
    char* _m = new char[1001];
    int q{}, r{};

    cin >> _n >> _m;

    cout << strlen(_n) << endl << strlen(_m) << endl;

    delete[] _n, _m;

    return 0;
}