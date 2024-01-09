class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        std::priority_queue<int, std::vector<int>, std::greater<>> _pq = {
            nums.begin(), nums.end()};

        while (_pq.size() > k) {
            _pq.pop();
        }

        return _pq.top();
    }
};