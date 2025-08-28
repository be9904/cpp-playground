#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char* input = new char[101];
    cin >> input;
    int* count = new int[26]{};

    for(int x = 0; x < 26; x++){
        count[x] = -1;
    }

    for(int i = 0; i < strlen(input); i++){
        if(count[input[i]-97] == -1){
            count[input[i]-97] = i;
        }
    }

    for(int j = 0 ; j < 26 ; j++){
        cout << count[j] << " ";
    }
    cout << '\n';

    delete[] input, count;
    return 0;
}