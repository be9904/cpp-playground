#include <iostream>
#include <string>
#include <climits>
#include <stack>

using namespace std;

void clearBuffer(){
    cout << __func__ << std::endl;
    cin.clear();
    cin.ignore ( INT_MAX , '\n' );    // Get rid of any garbage that user might have entered
    cout << "Cleared Buffer" << std::endl;
}

int main(){
    stack<int> s;
    int cmd_cnt = 0;
    string cmd;
    int num;

    cin >> cmd_cnt;

    if(cmd_cnt < 1 || cmd_cnt > 10'000)
        return 1;

    for(int i = 0 ; i < cmd_cnt ; i++){
        cin >> cmd;

        if(cmd == "push"){
            cin >> num;
            s.push(num);
        } else if(cmd == "pop"){
            if(s.size() > 0){
                cout << s.top() << endl;
                s.pop();
            } else{
                cout << -1 << endl;
            }
        } else if(cmd == "size"){
            cout << s.size() << endl;
        } else if(cmd == "empty"){
            cout << s.empty() << endl;
        } else if(cmd == "top"){
            if(s.size() > 0)
                cout << s.top() << endl;
            else
                cout << -1 << endl;
        } else{
            cout << "Wrong Command" << endl;
        }
    }

    return 0;
}