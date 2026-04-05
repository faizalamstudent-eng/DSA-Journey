#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    int ans = 0;
    int place = 1;

    while(n > 0){
        int rem = n % 2;
        ans = ans + (rem * place);
        place = place * 10;
        n = n / 2;
    }

    cout << "Binary: " << ans;

    return 0;
}
