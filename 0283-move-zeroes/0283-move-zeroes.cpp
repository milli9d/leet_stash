class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size() == 0u) {return;}
        
        vector<int>::iterator insert_itr = nums.begin();
        vector<int>::iterator itr = nums.begin();

        while(insert_itr != nums.end() && itr != nums.end()) {
            if(*itr != 0u) {
                *(insert_itr++) = *itr;
            }
            itr++;
        }

        std::fill(insert_itr, nums.end(), 0u);
    }
};