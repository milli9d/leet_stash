auto init = []{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        /*  */
        unordered_map<int,int> _map{};

        for(int i : nums) {
            _map[i]++;
        }
        
        priority_queue<std::pair<int,int>> _pq{};
        
        for(auto i : _map) {    
            _pq.push({i.second, i.first});
        }

        std::vector<int> out{};
        for(int i = 0 ; i < k ; i++) {
            out.push_back(_pq.top().second);
            _pq.pop();
        }
        
        return out;
    }
};