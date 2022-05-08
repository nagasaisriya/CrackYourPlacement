class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end());
    if(n<m)
    {
        return -1;
    }
    int d=0,min=9999999999;
    for(int i=0;i+m-1<n;i++)
    {
        d=a[i+m-1]-a[i];
        if(d<min){
            min=d;
        }
    }
    return min;
    }   
};
