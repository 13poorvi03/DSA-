// wap to calculate sum and product of all numbers in an array 

#include<iostream>
using namespace std;

int product (int arr[],int sz){
    int total = 1;
    for(int i=0 ; i<sz ; i++){
        total *= arr[i];

    }

    return total;
 
}

int sum(int arr[] ,int sz){
    int tsum = 0;
    for(int i=0; i<sz; i++){
        tsum +=arr[i];
    }
    return tsum;
}

int main(){

    int arr[] = {4, 2, 7, 8, 1, 2, 5};
     int sz = 7;

     cout<<product(arr,sz)<<endl;
     cout<<sum(arr,sz)<<endl;

    return 0;
}



// wap to swap the max and minn number of an array 

#include <iostream>
#include <climits>
using namespace std;

void swapMaxMin(int arr[], int sz) {
    int maxVal = INT_MIN, minVal = INT_MAX;
    int maxIndex = -1, minIndex = -1;

    // find max and min with their indexes
    for (int i = 0; i < sz; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIndex = i;
        }
        if (arr[i] < minVal) {
            minVal = arr[i];
            minIndex = i;
        }
    }

    // swap max and min
    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;
}

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int sz = 7;

    swapMaxMin(arr, sz);

    cout << "Array after swapping max and min: ";
    for (int i = 0; i < sz; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}



// wap to print all the unique values in an array 

#include <iostream>
using namespace std;

void printUnique(int arr[], int sz) {
    for (int i = 0; i < sz; i++) {
        bool isUnique = true;
        for (int j = 0; j < sz; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int sz = 7;

    cout << "Unique values in the array: ";
    printUnique(arr, sz);

    return 0;
}

// wap to print intersection of 2 arrays 

#include <iostream>
using namespace std;

void printIntersection(int arr1[], int sz1, int arr2[], int sz2) {
    cout << "Intersection of arrays: ";
    for (int i = 0; i < sz1; i++) {
        for (int j = 0; j < sz2; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break; // avoid printing duplicates for same element
            }
        }
    }
    cout << endl;
}

int main() {
    int arr1[] = {4, 2, 7, 8, 1, 2, 5};
    int arr2[] = {3, 7, 2, 9, 8, 6};

    int sz1 = 7, sz2 = 6;

    printIntersection(arr1, sz1, arr2, sz2);

    return 0;
}
