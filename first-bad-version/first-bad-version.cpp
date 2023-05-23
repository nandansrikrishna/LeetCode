// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long lower = 1;
        long upper = n;
        long mid = (n) / 2;

        while (lower < upper) {
            if (!isBadVersion(mid)) {
                if (isBadVersion(mid + 1)) {
                    return mid + 1;
                }
                lower = mid;
            }
            else {
                upper = mid;
            }
            mid = (upper + lower) / 2;
        }

        return upper;
    }
};