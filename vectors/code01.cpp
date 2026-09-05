#include <iostream>
#include <vector>
using namespace std;

int main(){
    // vector<int> vec(5,0);       //size of the vec, index value for each
    // vector<int> vec = {1,2,3};

    // cout<<vec[0]<<endl;
    // cout<<vec[1];

    // cout<<"size = "<< vec.size()<<endl;
    

    // for(int i: vec){
    //     cout<<i<<endl;
    // }


    // vector<char> vec = {'a','b','c','d','e'};

    // for(char i: vec){
    //     cout<<i<<endl;
    // }

    // cout<<"size = "<<vec.size()<<endl;

    vector<int>vec;
    cout<<"size = "<<vec.size()<<endl;
    vec.push_back(25);
        vec.push_back(45);
            vec.push_back(65);

    cout<<"after push back size  = "<<vec.size()<<endl;

    vec.pop_back();
        cout<<"after pop back size  = "<<vec.size()<<endl;

                    vec.push_back(75);
            vec.push_back(95);
        cout<<"capacity = "<<vec.capacity()<<endl;




        cout<<vec.front()<<endl;
        cout<<vec.at(1)<<endl;

    
    return 0;
}
