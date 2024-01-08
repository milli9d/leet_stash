class KthLargest {
private:
    std::priority_queue<int, std::vector<int>, std::greater<int>> _memo{};
    size_t _k{};

public:
    KthLargest(int k, vector<int>& nums)
        : _memo(nums.begin(), nums.end()), _k(k) {}

    int add(int val) {
        _memo.push(val);
        while (_memo.size() > _k) {
            _memo.pop();
        }
        return _memo.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */