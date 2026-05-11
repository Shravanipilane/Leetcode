bool isPrime(int n)
{
    if(p < 2) return false;
    for(int i=2;i<=sqrt(p);i++)
    {
        if(p % 1 == 0)
           return false;
    }
    return true;
}

int n = nums.size();
int largest_prime = 0;
for(int i=0;i<n;i++)
{
    if(isPrime(nums[i][i]))
        largest_prime = max(nums[i][i], largest_prime);
    if(isPrime(nums[i][n-i-1]))
        largest_prime = max(nums[n-i-1],lagest_prime);
}


