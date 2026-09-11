/*
QUESTION:-
Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.
There may be duplicates in the original array.
Example 1:

Input: nums = [3,4,5,1,2]
Output: true
Explanation: [1,2,3,4,5] is the original sorted array.
You can rotate the array by x = 3 positions to begin on the the element of value 3: [3,4,5,1,2].
Example 2:

Input: nums = [2,1,3,4]
Output: false
Explanation: There is no sorted array once rotated that can make nums.

*/

/*
APPROACH:-
Compare all neignbour elements (a,b) in A,
the case of a > b can happen at most once.

Note that the first element and the last element are also connected.

If all a <= b, A is already sorted so answer is true.
If all a <= b but only one a > b, and the first element is greater than equal to last element
we can rotate and make b the first element so answer is true.
Other case, return false.
*/

// CODE:-




#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i] < arr[i-1]){   // check ascending order
            return false;
        }
    }
    return true;
}

void rotateArray(int arr[], int n, int pos){
    int rotated[n];
    int k = 0;

    // copy elements from pos to end
    for(int i=pos; i<n; i++){
        rotated[k++] = arr[i];
    }
    // copy elements from start to pos-1
    for(int i=0; i<pos; i++){
        rotated[k++] = arr[i];
    }

    // print rotated array
    cout << "Rotated array: ";
    for(int i=0; i<n; i++){
        cout << rotated[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int pos = 3;   // rotate from index 3 (0-based)

    // print original array
    cout << "Original array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // check sorted
    if(isSorted(arr, n)){
        cout << "Array is sorted" << endl;
    } else {
        cout << "Array is not sorted" << endl;
    }

    // rotate and print
    rotateArray(arr, n, pos);

    return 0;
}



// check array is sorted or not


//  #include<iostream>
// using namespace std;

// bool isSorted(int arr[], int n){
//     for(int i=1; i<n; i++){
//         if(arr[i] < arr[i-1]){   // if any element is smaller than previous
//             return false;        // array is not sorted
//         }
//     }
//     return true;                 // if no violation found
// }

// int main(){
//     int arr[] = {1,2,3,4,5};
//     int n = 5;

//     if(isSorted(arr, n)){
//         cout << "Array is sorted" << endl;
//     } else {
//         cout << "Array is not sorted" << endl;
//     }

//     return 0;
// }





// TIME COMPLEXITY = O(N)
// SPACE COMPLEXITY = O(0)