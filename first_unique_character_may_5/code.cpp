#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<char, int> characterCnt;

    string s = "zzppqq";

    if (s == "")
        cout << -1 << "\n";

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
            cout << index;
            break;
        }
        ++index;
    }

    cout << "Return: " << -1 << "\n";

    return 0;
}