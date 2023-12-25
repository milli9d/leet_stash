class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int runningSum = 0;
        int count = 0;

        for(int i : nums) {
            runningSum+=i;
            nums[count++] = runningSum;
        }

        return nums;
    }
};