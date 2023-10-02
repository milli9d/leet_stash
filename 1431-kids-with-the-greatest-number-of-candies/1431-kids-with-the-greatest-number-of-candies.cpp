class Solution {
  public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        /* sanity check */
        if (candies.size() == 0u) {
            return {};
        }

        /* find out max */
        int max = 0;
        for (int i: candies) { if (i > max) { max = i; } }

        /* iterate through all kids and find out if giving them extra candies makes them higher than max */
        vector<bool> out(candies.size());
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= max) { out[i] = true; }
        }

        return out;
    }
};