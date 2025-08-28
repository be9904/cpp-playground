#include <iostream>

using namespace std;

int main(){
    char string[1001];
    int i{};
    cin >> string >> i;
    
    cout << string[i-1];

    delete[] string;
    
    return 0;
}