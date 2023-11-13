auto init =[] {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return true;
}();

class Solution
{
    public:
        vector<vector < string>> groupAnagrams(vector<string> &strs) {
            unordered_map<string, vector < string>> _count {};
            for (auto i: strs) {
                string str = i;
                sort(str.begin(), str.end());
                _count[str].push_back(i);
            }

            vector<vector < string>> out {};
            for (auto i: _count) {
                out.push_back(i.second);
            }

            return out;
        }
};