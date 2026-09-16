#include<iostream>
#include<vector>
using namespace std;
int main(){
// vector<int> vec = {1,2,3,4,5};
// cout<<vec[0];

// vector<char>vec = {'a','b','c','d','e'};
// cout<<"size = "<<vec.size()<<endl;
// for(char val : vec){
//     cout<<val<<endl;
// }



// vector<int>vec;
// vec.push_back(25);
// vec.push_back(35);
// vec.push_back(45);
// vec.push_back(55);
// vec.push_back(65);
// vec.push_back(75);

// cout<<"after push back size = "<<vec.size()<<endl;
// for(int val : vec){
//     cout<<val<<endl;
// }
// vec.pop_back();
// cout<<"size = "<<vec.size()<<endl;

// cout<<vec.front()<<endl;

// cout<<vec.back()<<endl;

// cout<<vec.at(3)<<endl;

vector<int> vec;
vec.push_back(3);
vec.push_back(4);
vec.push_back(5);
cout<<"after push back size = "<<vec.size()<<endl;
cout<<vec.capacity()<<endl;
return 0;


}