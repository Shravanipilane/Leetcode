int sz = gain.size();
int maxA = 0, currA = 0;
for(int i=0;i<sz;i++)
{
    currA  = currA + gain[i];
    if(currA > maxA)
       maxA = currA;

    // maxA = max(currA,maxA)
}
return maxA;