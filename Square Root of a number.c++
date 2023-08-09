long long floorSqrt(int n)
{
     int s=0;
    int e=n;
    long long mid=s+(e-s)/2;
    long long ans=-1;
    while(s<=e)
    {
        long long square=mid*mid;
        if(square==n)
        {
            return mid;
        }
        if(square<n)
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;

    }
    return ans;
}

