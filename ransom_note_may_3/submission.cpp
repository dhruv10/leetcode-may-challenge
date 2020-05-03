class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> MagzineMap;

        // create map for magzine characters
        for (auto x : magazine)
        {
            MagzineMap[x]++;
        }

        // checking can construct or not
        for(auto k : ransomNote) {
            if (MagzineMap[k]) MagzineMap[k]--;
            else return false;
        }
        
        return true;
    }
};