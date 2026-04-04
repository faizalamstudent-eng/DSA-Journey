
// #include <iostream>
// using namespace std;

// int main() {
//     char alpha;
//     cout<<"entre alpha:";
//     cin>>alpha;
//     for(char i ='A';i<=alpha; i++){
//         for(char j='A';j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }

//     return 0;
// }


// TWO DIFFERENT APPROACHES TO PRINT ALPHABET TRIANGLE

#include <iostream>
using namespace std;

int main() {
    char alpha;
    cout << "Enter alpha: ";
    cin >> alpha;

    for(char i = 'A'; i <= alpha; i++){
        for(int j = 1; j <= (i - 'A' + 1); j++){
            cout << i;
        }
        cout << endl;
    }

    return 0;
}