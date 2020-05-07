class Solution {
public:
    int majorityElement(vector<int> &nums) {
        unordered_map<int, int> countMap;
        int halfLength = nums.size() / 2;

        for (int x : nums) {
            if (countMap[x]) countMap[x]++;
            else countMap[x] = 1;
        }

        for (int x : nums) {
            if (countMap.at(x) > halfLength) return x;
        }
        return 0;
    }
};