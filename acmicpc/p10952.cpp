#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<pair<int, int>> pairs;

    while(1){
        int a, b;
        cin >> a >> b;
        if(a == 0 && b == 0)
            break;
        pairs.push_back(make_pair(a, b));
    }

    for(int i = 0 ; i < pairs.size() ; i++){
        cout << pairs[i].first + pairs[i].second << endl;
    }

    return 0;
}