class Solution
{
    public:
    bool isAlphaNum(char ch)
    {
        if((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
        {
            return true;
        }
        return false;
    }

    bool isPalindrome(string s)       
    {
        int L = 0, R = s.length() - 1;
        while(L < R)
        {
            if(!isAlphaNum(s[L]))
            {
                L++; continue;
            }
            if(!isAlphaNum(s[R]))
            {
                R--; continue;
            }
            if(tolower(s[L]) != tolower(s[R])) 
            {
                return false;
            }
            L++;
            R--;
        }
        return true;
    }
};