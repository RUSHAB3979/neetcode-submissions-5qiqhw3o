class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = static_cast<int>(nums.size()) - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;   // avoids overflow

            if (nums[mid] == target)          // found it
                return mid;
            else if (nums[mid] < target)      // look right half
                left = mid + 1;
            else                              // look left half
                right = mid - 1;
        }
        return -1;
        
    }
};
