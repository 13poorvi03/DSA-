#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        int index = 0;

        for (int x : nums) {
            if (x == target) {
                return index;
            }
            index++;
        }

        return -1;
    }
};

int main() {
    vector<int> nums = {10, 20, 30, 40, 50};
    int target = 30;

    Solution obj;
    int result = obj.linearSearch(nums, target);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}





