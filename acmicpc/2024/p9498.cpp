#include <iostream>

using namespace std;

int main(){
    int score;
    char grade;

    cin >> score;
    
    switch(score){
        case 90 ... 100: grade = 'A'; break;
        case 80 ... 89 : grade = 'B'; break;
        case 70 ... 79 : grade = 'C'; break;
        case 60 ... 69 : grade = 'D'; break;
        default        : grade = 'F'; break;
    }

    cout << grade << endl;

    return 0;
}