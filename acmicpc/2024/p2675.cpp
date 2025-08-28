#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int T{};
    cin >> T;

    for(int i = 0 ; i < T ; i++){
        int R{1};
        char* S = new char[21];

        cin >> R >> S;

        int result_len = R*strlen(S);
        char* result = new char[result_len];

        for(int j = 0 ; j < result_len ; j++){
            result[j] = S[j/R];
        }
        result[result_len] = '\0';

        cout << result << endl;
        delete[] S, result;
    }
    
    return 0;
}