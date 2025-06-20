#include <vector>
#include <algorithm>
#include <iostream> // Added for output
using namespace std;

class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        if (nums.empty()) return 0;

        // Custom sorting (Selection Sort)
        selectionSort(nums);

        int count = 1;
        int start = nums[0]; // First element of the current group

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] - start > k) {
                // Start a new group
                count++;
                start = nums[i];
            }
        }

        return count;
    }

private:
    void selectionSort(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; ++i) {
            int min_idx = i;
            for (int j = i + 1; j < nums.size(); ++j) {
                if (nums[j] < nums[min_idx]) {
                    min_idx = j;
                }
            }
            swap(nums[i], nums[min_idx]);
        }
    }
};

// Test driver
int main() {
    Solution sol;
    vector<int> nums = {3,6,1,2,5};
    int k = 2;
    
    int result = sol.partitionArray(nums, k);
    cout << "Minimum number of subsequences needed: " << result << endl;
    
    return 0;
}