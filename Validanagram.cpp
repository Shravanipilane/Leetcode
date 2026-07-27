class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length())
            return false;

        int freq[26] = {0};

        for(int i = 0; i < s.length(); i++)
        {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        for(int i = 0; i < 26; i++)
        {
            if(freq[i] != 0)
                return false;
        }

        return true;
    }
};



class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length())
            return false;

        int n = s.size();
        int freqS[26] = {0};
        int freqT[26] = {0};

        for(char ch : s)
            freqS[ch - 'a']++;
        for(char ch : t)
            freqT[ch - 'a']++;
        for(int i=0;i<n;i++)
        {
            if(freqS[i] != freqT[i])
                 return false;
        }
        

        return true;
    }
};