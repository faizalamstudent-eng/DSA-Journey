
#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter number: ";
    cin>>num;
    
    int sqroot =0;
    
    for(int  i= 1; i*i<=num; i++){
        sqroot = i;
    }
    cout<<sqroot;
    
}