#include <iostream>

using namespace std;

int main(){
    int lines;
    int hash = 1;

    scanf("%d", &lines);

    for(int i = 0 ; i < lines ; i++){
        for(int j = 0 ; j < lines ; j++){
            if(j < hash){
                printf("#");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        hash++;
    }
}