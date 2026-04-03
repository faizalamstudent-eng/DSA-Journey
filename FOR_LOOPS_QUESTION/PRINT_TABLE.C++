
#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"enter table number: ";
    cin>>num;
    cout<<"table of "<<num<<": "<<endl;
    for(int i=1;i<=10;i++){
        cout<<num<<" x "<<i<<":"<<num*i<<endl;
    }
    
}
