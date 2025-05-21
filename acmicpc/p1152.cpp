#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char* sentence = new char[1000001];
    cin.getline(sentence, 1000001);

    int count{};

    if(sentence[0] == ' '){
        if(strlen(sentence) == 1){
            cout << 0 << endl;
            return 0;
        }
        count--;
    }
    if(sentence[strlen(sentence)-1] == ' ') count--;

    for(int i = 0 ; i < strlen(sentence) ; i++){
        if(sentence[i] == ' '){
            count++;
        }
    }

    cout << (count <= 0 ? 1 : count+1) << endl;

    delete[] sentence;
    return 0;
}