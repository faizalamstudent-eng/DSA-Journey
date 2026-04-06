#include <iostream>
using namespace std;

int main() {
    int m;
    cout<<"enter number:";
    cin >> m;
    int n = m;
    int num =0;
    while(n>0){
        int rem = n%10;
        num = rem*rem*rem+num;
        n = n/10;
        
    }
    if(num == m){
        cout<<"yes it's armstrong number;";
    }
    else{
        cout<<"it's not a armstrong number";
    }

}
