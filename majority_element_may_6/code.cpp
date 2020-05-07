#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    vector<int> nums = {3, 2, 3};
    unordered_map<int, int> countMap;
    int halfLength = nums.size() / 2;
    cout << halfLength << "\n";

    for (int x : nums) {
        if (countMap[x]) countMap[x]++;
        else countMap[x] = 1;
    }

    for (int x : nums) {
        if (countMap.at(x) > halfLength) cout << x;
    }
  
    return 0; 
}