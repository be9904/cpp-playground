#include <iostream>
#include <algorithm>

int binarySearch(int *A, int low, int high, int target);

int main(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int N{};
    std::cin >> N;
    int A[100001]{};

    // get elements of array A[N]
    for(int i = 0 ; i < N ; i++){
        std::cin >> A[i];
    }

    std::sort(A, A + N); // simple approach

    // get target values
    int M{};
    std::cin >> M;

    for(int i = 0 ; i < M ; i++){
        int target{};
        std::cin >> target;
        std::cout << binarySearch(A, 0, N-1, target) << "\n"; // apply binary search
    }

    return 0;
}

int binarySearch(int *A, int low, int high, int target){
    // check if target is out of bounds
    if(target < A[low] && target > A[high]){
        return 0;
    }
    
    int mid = (low + high) / 2;
    int mid_val = A[mid];

    while(high >= low){
        // check if target is out of bounds
        if(target < A[low] && target > A[high]){
            return 0;
        }

        mid = (low + high) / 2;
        mid_val = A[mid];

        if(mid_val > target){ // target smaller than mid_val
            high = mid - 1;
            // binarySearch(A, low, mid, target);
        } else if(mid_val < target){ // target bigger than mid_val
            low = mid + 1;
            // binarySearch(A, mid + 1, high, target);
        } else { // found target
            return 1;
        }
    }
    
    // // if high - 1 = low
    // if(high - 1 == low){
    //     return (target == A[low] || target == A[high]) ? 1 : 0;
    // }

    return 0;
}