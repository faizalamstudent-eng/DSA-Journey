#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    int ans = 0;
    int place = 1;

    while(n > 0){
        int rem = n % 10;
        ans = ans + (rem * place);
        place = place * 2;
        n = n / 10;
    }

    cout << "Binary: " << ans;

    return 0;
}
