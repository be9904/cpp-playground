#include <iostream>

using namespace std;

int main(){
    int* code = new int[5];
    int tail{};
    
    for(int i = 0 ; i < 5 ; i++){
        cin >> code[i];
        tail += code[i] * code[i];
    }

    cout << tail % 10 << endl;

    delete[] code;
    return 0;
}