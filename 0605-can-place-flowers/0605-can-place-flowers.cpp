class Solution {
  public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if (flowerbed.size() == 0u) {
            return false;
        }

        int count = 0u;
        for (int i = 0u; i < flowerbed.size(); i++) {
            if (flowerbed[i] == 0u) {
                /* check if can be inserted */
                bool left_empty = (i == 0u) ? true : (flowerbed[i - 1u] == 0u);
                bool right_empty = (i == flowerbed.size() - 1u) ? true : (flowerbed[i + 1u] == 0u);
                if (left_empty && right_empty) {
                    flowerbed[i] = 1u;
                    count++;
                }
            }
            /* early exit */
            if(count >= n) { return true; }
        }
        return (count >= n);
    }
};