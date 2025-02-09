class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        /* allocate output array */
        std::vector<int> out(nums.size());
        
        /* start from both ends, choose largest number and place on end of output array */
        auto out_ptr = out.rbegin();
        
        auto left = nums.begin();
        auto right = nums.end() - 1u;
        while (std::distance(left , right) >= 0) {
            if (abs(*left) > abs(*right)) {
                *(out_ptr++) = pow(*left, 2u);
                left++;
            } else if (abs(*left) <= abs(*right)) {
                *(out_ptr++) = pow(*right, 2u);
                right--;
            }
        }
                
        return out;
    }
};