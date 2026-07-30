#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int end = s.size() - 1;

        // Remove trailing spaces
        while (end >= 0 && s[end] == ' ') {
            end--;
        }

        int start = end;

        // Move to the beginning of the last word
        while (start >= 0 && s[start] != ' ') {
            start--;
        }

        return end - start;
    }
};