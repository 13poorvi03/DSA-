#include <iostream>
using namespace std;

// int main() {
//     int arr[] = {4, 2, 7, 8, 1, 2, 5};
//     int n = 7;
//     int target = 8;
//     bool found = false;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] == target) {
//             cout << "Target found at index " << i 
//                  << " with value " << arr[i] << endl;
//             found = true;
//             break; // stop searching once found
//         }
//     }

//     if (!found) {
//         cout << "Target is not found in the array" << endl;
//     }

//     return 0;
// }



int linearsearch (int arr[],int size,int target ){

        for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; //found
        }
    }
  
    return -1;  //not found

}

int main(){
  
        int arr[] = {4, 2, 7, 8, 1, 2, 5};
        int target = 8;
        int size =7 ;

       cout<< linearsearch(arr,size,target)<<endl;
        
    return 0;
}