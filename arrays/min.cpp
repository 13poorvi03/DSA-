#include<iostream>
using namespace std;

int main() {
    int nums[] = {5, 15, 22, 4, 2, 6};
    int n = sizeof(nums) / sizeof(nums[0]); 

    int min = nums[0]; 

    for (int i = 1; i < n; i++) {
        if (nums[i] < min) {
            min = nums[i];
        }
    }

    cout << "Minimum element is: " << min << endl;

    return 0;
}
