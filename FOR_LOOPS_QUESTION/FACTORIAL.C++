
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter number: ";
    cin>>n;
    
    long long fact=1;
    for(int i =1; i<=n; i++){
        fact = fact*i;
    }
    cout<<"factorial:"<<fact;

    return 0;
}