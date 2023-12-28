class MovingAverage {
    int32_t _cap = 0;
    int32_t _sum = 0;
    std::queue<int> _memo{};

public:
    MovingAverage(int size) : _cap(size) {}

    double next(int val) {
        /* correct buffer */
        if (_memo.size() >= _cap) {
            _sum -= _memo.front();
            _memo.pop();
        }

        _sum += val;
        _memo.push(val);

        return ((double)_sum / _memo.size());
    }
};

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */