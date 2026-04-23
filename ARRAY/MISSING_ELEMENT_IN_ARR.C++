#include <iostream>
using namespace std;

int main() {
    int arr[6] = {1,2,3,4,0,5};
    int n = 6;

    int total = n * (n + 1) / 2;
    int sum = 0;

    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    cout << "Missing = " << total - sum;

    return 0;
}