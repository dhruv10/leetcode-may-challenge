class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> characterCnt;

        if (s == "")
            return -1;

        // Create hash map of counts
        for (auto x : s)
        {
            if (characterCnt[x])
            {
                characterCnt[x]++;
            }
            else
            {
                characterCnt[x] = 1;
            }
        }

        // Iterate for string and check count
        unsigned index = 0;
        for (auto x : s)
        {
            if (characterCnt[x] == 1)
            {
                return index;
            }
            ++index;
        }

        return -1;
    }
};