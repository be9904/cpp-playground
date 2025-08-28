#include <iostream>

using namespace std;

int main(){
    int t;
    scanf("%d", &t);

    int ab[2 * t];

    for(int i = 0 ; i < 2 * t ; i += 2){
        scanf("%d %d", &ab[i], &ab[i+1]);
    }

    for(int i = 0 ; i < 2 * t ; i += 2){
        printf("%d\n", ab[i] + ab[i+1]);
    }

    return 0;
}