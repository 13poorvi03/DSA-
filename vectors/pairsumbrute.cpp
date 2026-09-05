#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int arr[4] = {2, 7, 11, 15};
    int target = 9;   // Example target
    int pairsnum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (target == arr[i] + arr[j]) {  
                pairsnum++;
                cout << "Pair found: (" << arr[i] << ", " << arr[j] << ")\n";
            }
        }
    }

    cout << "Total num of pairs: " << pairsnum << endl;
    return 0;
}
