// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"enter number of row:";
    cin>>num;
    bool n = 1;
    for(int i =1;i<=num; i++){
        n = i%2;
        for(int j=1;j<=i;j++){
            cout<<n;
            n = !n;
        }
        cout<<endl;
    }

    return 0;
}