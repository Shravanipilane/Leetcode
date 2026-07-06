class Solution 
{
    public:
     bool repeatedSubstringPatterns(string s)
     {
        int sz = s.size();
        for(int i=0;i<sz/2;i++)
        {
            int Len = i+1;
            if(sz % Len != 0)
                continue;

            string s1 = s.substr(0, Len);
            string s2 = "";

            int rep = sz / Len;
            for(int j=0;j<rep;j++)
            {
                s2 += s1;
            }
            if(s2 == s) return true;
        }
        return false;
     }
};