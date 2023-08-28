#include <iostream>
#include <vector>

class Solution {
public:
    int findPivot(std::vector<int> arr) {
        int s = 0;
        int e = arr.size() - 1;
        int mid = s + (e - s) / 2;

        while (s <= e) {
            if (s == e) {
                return s;
            }
            if (mid <= e && arr[mid] > arr[mid + 1]) return mid;
            if (mid - 1 >= s && arr[mid - 1] > arr[mid]) return mid - 1;

            if (arr[s] > arr[mid]) e = mid - 1;
            else s = mid + 1;
            mid = s + (e - s) / 2;
        }
        return -1;
    }

    int binarysearch(std::vector<int> arr, int s, int e, int target) {
        int mid = s + (e - s) / 2;

        while (s <= e) {
            if (arr[mid] == target) {
                return mid;
            }
            if (arr[mid] > target) {
                e = mid - 1;
            }
            else {
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
        return -1;
    }

    int search(std::vector<int>& nums, int target) {
        int pivotindex = findPivot(nums);
        int ans = 0;
        if (target >= nums[0] && target <= nums[pivotindex]) {
            ans = binarysearch(nums, 0, pivotindex, target);
        }
        else {
            ans = binarysearch(nums, pivotindex + 1, nums.size() - 1, target);
        }
        return ans;
    }
};

int main() {
    Solution solution;
    std::vector<int> rotatedArray = {4, 5, 6, 7 ,8, 0, 1, 2};
    int target = 0;

    int result = solution.search(rotatedArray, target);

    if (result != -1) {
        std::cout << "Target " << target << " found at index " << result << std::endl;
    }
    else {
        std::cout << "Target " << target << " not found in the rotated array." << std::endl;
    }

    return 0;
}
