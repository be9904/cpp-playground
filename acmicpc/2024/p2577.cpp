#include <iostream>
#include <string>

using namespace std;

int main(){
    int A{}, B{}, C{};
    string res;
    int* count = new int[10]{};
    cin >> A >> B >> C;

    res = to_string(A*B*C);
    for(int i = 0 ; i < res.length() ; i++){
        count[res[i] - '0']++;
    }

    for(int j = 0 ; j < 10 ; j++){
        cout << count[j] << endl;
    }

    delete[] count;
    return 0;
}