class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
        int cnt = 0;
        for(int i = 0; i < flowerbed.size(); i++)
        {
            if(flowerbed[i] == 0)
            {
                bool lft = false;
                if(i==0 || flowerbed[i-1] == 0)
                    lft = true;
                bool rgt = false;
                if(i == flowerbed.size()-1 || flowerbed[i+1] == 0)
                    rgt = true;
                if(lft == true && rgt == true)
                {
                    cnt++;
                    flowerbed[i] = 1;
                }
            }
        }
        return cnt >= n;
    }
};  