
#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"enter number: ";
    cin>>num;
    cout<<"sum of square of 1 to "<<num<<": ";
    int sum = 0;
    for(int i=1;i<=num;i++){
        sum = sum+i*i;
    }
    cout<<sum;
    
}