#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N, X;
    vector<int> res;
    cin >> N >> X;

    for(int i = 0 ; i < N ; i++){
        int tmp;
        cin >> tmp;
        res.push_back(tmp);
    }

    for(int i = 0 ; i < res.size() ; i++){
        if(res[i] >= X){
            res.erase(res.begin() + i);
            i--;
        }
    }

    for(int i = 0 ; i < res.size() ; i++){
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}