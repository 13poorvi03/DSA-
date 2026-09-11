/*
QUESTION:-
Given an array Arr of size N, print second largest distinct element from an array.

Example:

Input:
N = 6
Arr[] = {12, 35, 1, 10, 34, 1}
Output: 34
Explanation: The largest element of the
array is 35 and the second largest element
is 34.
*/

/*
APPROACH
-> If the current element is larger than ‘large’ then update second_large and large variables
-> Else if the current element is larger than ‘second_large’ then we update the variable second_large.
-> Once we traverse the entire array, we would find the second largest element in the variable second_large.
*/

// CODE:-

#include<iostream>
using namespace std;
int slargest(int arr[], int n){
    int ans =arr[0];
    int smax = -1;
    for(int i=0; i<n; i++){
        if(ans<arr[i]){
            smax = ans;
            ans=arr[i];
        }
        else if(smax<arr[i] && arr[i]!=ans && smax!=ans){
            smax = arr[i];
        }
    }
    
    return smax;

}

int main(){
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
     int n = 7;
     cout<<slargest(arr,n)<<endl;


    return 0;
}
