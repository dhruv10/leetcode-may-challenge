class Solution {
public:
    int findComplement(int num) {
        string binary = bitset<32>(num).to_string();

        bitset<32> flipMe(binary);
        string flippedBinary = flipMe.flip().to_string();

        flippedBinary.erase(0, flippedBinary.find_first_not_of('1'));

        unsigned long decimal = bitset<32>(flippedBinary).to_ulong();

        return decimal;
    }
};