#include <iostream>
using namespace std;

// void reverse(int arr[], int size) {
//     for (int i = 0; i < size / 2; i++) {
//         int temp = arr[i];
//         arr[i] = arr[size - 1 - i];
//         arr[size - 1 - i] = temp;
//     }
// }

// int main() {
//     int arr[] = {4, 2, 7, 8, 1, 2, 5};
//     int n = 7;

//     reverse(arr, n);

//     cout << "Reversed array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }


/////////////////////////////////////////////////////

void reversearray(int arr[] , int sz){
    int start = 0, end =sz-1;

    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
 int main(){
     int arr[] = {4, 2, 7, 8, 1, 2, 5};
     int sz = 7;

     reversearray(arr,sz);

     for(int i=0; i<sz; i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
    return 0;
 }