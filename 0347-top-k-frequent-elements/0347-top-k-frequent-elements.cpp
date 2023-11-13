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
        
            cout << i.first << " : " << i.second << endl;
        
        }

        std::vector<int> out{};
        
        for(int i = 0 ; i < k ; i++) {
            out.push_back(_pq.top().second);
            _pq.pop();
        }
        
        return out;
    }
};