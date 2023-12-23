class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor_sum = nums.size();
        for (int i = 0; i < nums.size(); i++) {
            xor_sum ^= i ^ nums[i];
        }
        return xor_sum;
    }
};