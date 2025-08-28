#include <iostream>

using namespace std;

int main(){
    int N{};
    cin >> N;

    float* score = new float[N];
    float max{1};

    for(int i = 0; i < N; i++){
        cin >> score[i];
        if(score[i] > max)
            max = score[i];
    }

    float sum{};
    for(int i = 0; i < N; i++){
        score[i] = (float(score[i]) / max) * 100;
        sum += score[i];
    }
    
    cout << sum / N;

    return 0;
}