int n1 = w1.size();
int n2 = w2.size();
string ans;
int i = 0, j = 0;
while(i<n1 && j<n2)
{
    ans += w1[i];
    ans += w2[j];
    i++;
    j++;
}
if(i < n1)
{
    while(i < n1)
    {
       ans += w1[i];
        i++;
    }
}
else
{
    while(j < n2)
    {
       ans += w2[j];
       j++;
    }
}
return ans;
