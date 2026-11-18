#include <iostream>
#include <vector>
using namespace std;
int main(){

    // vector<int>vec
    // cout<<vec[0]<<endl;

    // vector<int>vec = {1,2,3};
    // cout<<vec[0]<<endl;

    // first is for size of vector and second one is each value of each indexs----------

    // vector<int>vec (5,0);
    // cout<<vec[0]<<endl;


    // loops-------

    //  vector<int>vec (5,0);

    //  for(int i : vec){
    //     cout<<i<<endl;
    //  }

    //  cout<<endl; 

    // vector<char>vect ={'a','b','c','d','e'};

    //  for(char i : vect){
    //     cout<<i<<endl;
    //  }



// vector<char>vect ={'a','b','c','d','e'};
//  cout<<"size = "<<vect.size()<<endl;
       
 
 vector<int>vec;
vec.push_back(25);
vec.push_back(35);
vec.push_back(45);
vec.push_back(55);
vec.push_back(65);
vec.push_back(75);

cout<<"after push back size = "<<vec.size()<<endl;
for(int val : vec){
    cout<<val<<endl;
}



vec.pop_back();
cout<<"after pop back size = "<<vec.size()<<endl;
for(int val : vec){
    cout<<val<<endl;
}
cout<<endl;

cout<<vec.front()<<endl;

cout<<endl;

cout<<vec.back()<<endl;

    return 0;

}