#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char* A = new char[1001];
    char* B = new char[1001];
    char* R = new char[2010];

    cin >> A >> B;

    int d_A = strlen(A);
    int d_B = strlen(B);

    cout << d_A << ", " << d_B << endl;

    // A + B
    

    // A - B

    // A x B

    delete[] A, B, R;

    return 0;
}