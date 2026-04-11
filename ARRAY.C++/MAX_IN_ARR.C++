
#include <iostream>
using namespace std;

int main() {
    int arr[7] = {2,10,5,3,11,1,4};
    int max = arr[0];
    int index = 0;
    
    for(int i = 1; i <7; i++){
        if(max < arr[i]){
            max = arr[i];
            index = i;
        }
        
    }
    cout<<max<<" is at index "<<index;

}