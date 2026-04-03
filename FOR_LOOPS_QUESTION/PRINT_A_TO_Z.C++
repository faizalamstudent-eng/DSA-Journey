#include <iostream>
using namespace std;

int main() {
    char alpha;
    cout << "Enter alpha: ";
    cin >> alpha;

    cout << "a to " << alpha << ":" << endl;

    for(char i = 'a'; i <= alpha; i++) {
        cout << i << endl;
    }

    return 0;
}




// advance one to print A to Z in case of capital letter input and same for small letter input

#include <iostream>
using namespace std;

int main() {
    char alpha;
    cout << "Enter alpha: ";
    cin >> alpha;

    if(alpha >= 'a' && alpha <= 'z') {
        for(char i = 'a'; i <= alpha; i++) {
            cout << i << endl;
        }
    }
    else if(alpha >= 'A' && alpha <= 'Z') {
        for(char i = 'A'; i <= alpha; i++) {
            cout << i << endl;
        }
    }
    else {
        cout << "Invalid input!";
    }

    return 0;
}