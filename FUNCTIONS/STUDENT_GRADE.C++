#include <iostream>
using namespace std;

void grade(int marks){
    if(marks>100 || marks<0){
        cout<<"invalid marks";
    }
    else if(marks>=90){
        cout<<"A+";
    }
    else if(marks>=60){
        cout<<"B";
    }
    else{
        cout<<"fail";
    }
}


int main() {
    int student1;
    cout<<"enter student 1 marks:";
    cin>>student1;
    grade(student1);

}