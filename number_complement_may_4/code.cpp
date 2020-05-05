#include <iostream>
#include <bitset>
#include <string.h>

using namespace std;

int main()
{
    string binary = bitset<32>(1111).to_string();

    bitset<32> flipMe(binary);
    string flippedBinary = flipMe.flip().to_string();

    flippedBinary.erase(0, flippedBinary.find_first_not_of('1'));

    unsigned long decimal = bitset<32>(flippedBinary).to_ulong();

    cout << decimal << "\n";
    return 0;
}