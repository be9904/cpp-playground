#include <iostream>

using namespace std;

int main(){
    int in[3];
    int dup;

    cin >> in[0] >> in[1] >> in[2];

    // all same
    if(in[0] == in[1] && in[1] == in[2])
        cout << 10000 + in[0] * 1000 << endl;
    else if((dup = in[0]) == in[1] 
        || (dup = in[1]) == in[2]
        || (dup = in[2]) == in[0])
        cout << 1000 + dup * 100 << endl;
    else{
        // find max
        int max = -1;
        for(auto& i : in){
            if(max < i) max = i;
        }

        cout << max * 100 << endl;
    }


    return 0;
}