int cnt = 0;
int n1 = s.size();
int n2 = t.size();
int i=0, j=0;
if(n2 < n1)
    return false;
while(i<n1 && j<n2)
{
    if(s[i] == t[j])
    {
        i++;
        j++;
        cnt++;
    }
    else
    {
        j++;
    }
}
if(n1 == cnt)
    return true;
else
    return false;



