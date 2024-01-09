class Solution {
public:
    static inline double distance(const std::vector<int>& p1,
                                  const std::vector<int>& p2) {
        double q1 = pow(p1[0] - p2[0], 2);
        double q2 = pow(p1[1] - p2[1], 2);
        return sqrt(q1 + q2);
    }

    typedef std::pair<double, size_t> point_pair;

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        std::priority_queue<point_pair, std::vector<point_pair>, std::greater<>> _pq{};

        size_t sz = points.size();
        for (size_t i = 0u; i < sz; i++) {
            double dist = distance(points[i], {0, 0});
            _pq.push({dist, i});
            cout << dist << endl;
        }

        std::vector<std::vector<int>> out{};
        while (k--) {
            out.push_back(points[_pq.top().second]);
            _pq.pop();
        }

        return out;
    }
};