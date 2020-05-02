// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        return check(1, n);
    }
    
    int check(int S, int L) {
        int M = S + ((L - S) / 2);
        
        if(isBadVersion(M)) {
            if(isBadVersion(M - 1)) {
                return check(S, M);
            } else {
                return M;
            }
        } else {
            return check(M + 1, L);
        }
    }
};