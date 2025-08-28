#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;

    int ab[2 * cases];
    for(int i = 0 ; i < 2 * cases ; i += 2){
        cin >> ab[i] >> ab[i+1];
    }

    for(int i = 0 ; i < 2 * cases ; i += 2){
        cout << "Case #" << (i+2)/2 << ": " 
        << ab[i] << " + " << ab[i+1] << " = "
        << ab[i] + ab[i+1] << endl;
    }

    return 0;
}