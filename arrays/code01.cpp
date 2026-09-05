#include<iostream>
using namespace std;
int main(){
// int marks[5] = {99,100,54,36,88};
//     double price [] = {98.67, 34.98, 54.32};
    // cout<<"printing first student marks :"<<marks[0]<<endl;

    int marks[5];
    for(int i=0; i<5; i++){
        cout<<"enter the marks :";
        cin>>marks[i];
    }
    for( int i=0 ; i<5 ; i++){
        cout<<"printing every student marks : "<<i<<" index :"<<marks[i]<<endl;
    }


    return 0;
}


