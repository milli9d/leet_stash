auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int right = 0;
        int left = 0;
        for (right = 0; right < nums.size(); right++) {
            /* if right element is zero, then remove k */
            if (nums[right] == 0) {
                k--;
            }
            /* if k is zero , we are at max window size , reduce from left to
             * continue on right */
            if (k < 0) {
                /* if left element is 0 , then add 1 to k */
                k += 1 - nums[left];
                left++;
            }
        }
        return right - left;
    }
};