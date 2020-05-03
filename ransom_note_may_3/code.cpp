#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<char, int> MagzineMap;
    string ransomNote = "aa", magzine = "ab";

    // create map for magzine characters
    for (auto x : magzine)
    {
        MagzineMap[x]++;
    }

    for(auto k : ransomNote) {
        if (MagzineMap[k]) MagzineMap[k]--;
        else cout << false;
    }
    return 0;
}