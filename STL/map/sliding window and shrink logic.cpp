class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> basket;
        int start = 0;
        int maxFruits = 0;

        for (int end = 0; end < fruits.size(); ++end) {
            basket[fruits[end]]++; // Add current fruit

            // Shrink the window if more than 2 fruit types
            while (basket.size() > 2) {
                basket[fruits[start]]--;
                if (basket[fruits[start]] == 0) {
                    basket.erase(fruits[start]);
                }
                start++; // Move window start
            }

            // Update maximum fruits collected
            maxFruits = max(maxFruits, end - start + 1);
        }

        return maxFruits;
    }
};
