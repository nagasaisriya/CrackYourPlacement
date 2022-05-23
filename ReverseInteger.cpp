class Solution {
public:
    int reverse(int x) {
        int m=x,d=0;
        long long int rev=0,rem=0;
        while(x!=0){
            rem=x%10;
            rev=rev*10+rem;
            x=x/10;
        }
       return (rev<INT_MIN || rev>INT_MAX) ? 0 : rev;
          
    }
};
