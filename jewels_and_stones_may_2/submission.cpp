class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_map<char, bool> jewelMap;
        int count = 0;

        // create a hash map of Jewels
        for (auto x : J)
        {
            jewelMap[x] = true;
        }

        // count jewels in stone string
        for (auto y : S) {
            if (jewelMap[y]) count += 1;
        }

            return count;
        }
};