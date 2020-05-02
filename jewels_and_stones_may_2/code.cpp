#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<char, bool> jewelMap;
    string J = "aAB", S = "aAAbbbb";
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

    cout << count << "\n";

    return 0;
}