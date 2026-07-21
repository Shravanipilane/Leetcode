class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        int n = ransomNote.size();
        int m = magazine.size();

        int freqN[26] = {0};
        int freqM[26] = {0};

        for(int i=0;i<n;i++)
            freqN[ransomNote[i] - 'a']++;

        for(int i=0;i<m;i++)
            freqM[magazine[i] - 'a']++;

        for(int i=0;i<26;i++)
            if(freqN[i] > freqM[i])
            return false;

        return true;
    }
};