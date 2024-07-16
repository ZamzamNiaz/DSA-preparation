#include <iostream>
using namespace std;
class Solution {
public:
    int getPivot(vector<int>& nums, int n) {
        int start = 0;
        int end = n - 1;
        int mid = start + (end - start) / 2;

        while (start < end) {
            if (nums[mid] >= nums[0]) {
                start = mid + 1;
            } else {
                end = mid;
            }
            mid = start + (end - start) / 2;
        }

        return start;
    }

    int binarySearch(vector<int>& nums, int s, int e, int key) {
        int start = s;
        int end = e;
        int mid = start + (end - start) / 2;

        while (start <= end) {
            if (nums[mid] == key) {
                return mid;
            }

            // go to right
            if (key > nums[mid]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
            mid = start + (end - start) / 2;
        }

        return -1;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if (n == 0) return -1; // Handle the case for empty input

        int pivot = getPivot(nums, n);
        if (target >= nums[pivot] && target <= nums[n - 1]) {
            // binarySearch on second half
            return binarySearch(nums, pivot, n - 1, target);
        } else {
            // binarySearch on first half
            return binarySearch(nums, 0, pivot - 1, target);
        }
    }
};
