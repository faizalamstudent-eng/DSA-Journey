
#include <iostream>
using namespace std;

int main() {
    int arr[7] = {2,10,5,3,7,1,4};
    int search;
    cout<<"enter search element:";
    cin>> search;
    int found = 0;
    
    
    for(int i = 0; i <7; i++){
        if(search == arr[i]){
            cout<<"found"<<endl;
            cout<<"index:"<<i;
            found = 1;
            break;
        }
    }
    if(found == 0){
        cout<<"not found ";
    }

}