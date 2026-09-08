/*
QUESTION:-
Given an array A[] of size n. The task is to find the largest element in it.

Example:

Input:
n = 5
A[] = {1, 8, 7, 56, 90}
Output:
90
Explanation:
The largest element of given array is 90
*/

/*
APPROACH:-
-> Intialize the ans with starting element
-> Traverse the entire array and update the ans if the element is greater then ans
-> Finally, return the ans
*/

// CODE:-

#include<iostream>
using namespace std;
int largest(int arr[], int n){
    int ans =arr[0];
    for(int i=0; i<n; i++){
        if(ans<arr[i]){
            ans=arr[i];
        }
    }

    return ans;

}

int main(){
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
     int n = 7;
     cout<<largest(arr,n)<<endl;
     return 0;
}


// TIME COMPLEXITY = O(N)
// SPACE COMPLEXITY = O(0)