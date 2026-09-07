// pass by value - Pass by value ka matlab hota hai ki jab tum ek function ko argument dete ho, us argument ki copy function ke andar jaati hai — original variable nahi. Matlab function ke andar jo bhi changes karoge, wo sirf us copy par honge, original variable par koi effect nahi hoga

// pass by refernce - Pass by reference ka matlab hai ki function ko original variable ka address diya jaata hai, copy nahi. Isliye function ke andar jo bhi changes karoge, wo directly original variable par reflect honge.

#include<iostream>
using namespace std;

void changeArr(int arr[] , int size){
    cout<<"in function\n";
    for(int i=0 ; i<size; i++){
        arr[i] = 2*arr[i];
    }
}
int main(){
   int arr[] ={1,2,3};

   changeArr(arr,3);

   cout<<"in main \n";
   for(int i=0 ; i<3; i++){
        cout<<arr[i]<<" ";
        
    }
    return 0;
}