#include <iostream>

using namespace std;

int main(){
    int total;
    int type;

    cin >> total >> type;

    int price[type], quantity[type];
    int calculated_total = 0;

    for(int i = 0 ; i < type ; i++){
        cin >> price[i] >> quantity[i];
        calculated_total += price[i] * quantity[i];
    }

    if(total == calculated_total)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}