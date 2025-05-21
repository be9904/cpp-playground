#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int T{};
    cin >> T;

    for(int i = 0 ; i < T ; i++){
        char* quiz = new char[81];
        cin >> quiz;
        int score{}, rep{1};

        if(quiz[0] == 'O') score += rep;
        for(int j = 1 ; j < strlen(quiz) ; j++){
            if(quiz[j] == 'O'){
                if(quiz[j-1] == 'O'){
                    score += ++rep;
                }
                else
                    score += rep;
            }
            else{
                rep = 1;
            }
        }
        cout << score << '\n';

        delete[] quiz;
    }

    return 0;
}