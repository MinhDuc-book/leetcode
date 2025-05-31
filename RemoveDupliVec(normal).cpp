#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> nums(5);
    vector <int> result;
    for (int i = 0; i < nums.size(); ++i) {
        cin >> nums[i];
    }
    result.push_back(nums[0]);
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] > result[result.size()-1]) {
            result.push_back(nums[i]);
        }
    }

    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
}
