class Solution {
public:
    int subtractProductAndSum(int n) {
        int pdt=1;
        int sum=0;
        while(n>0)
        {
            int digit=n%10;
            sum=sum+digit;
            pdt=pdt*digit;
            n=n/10;

        }
        return pdt-sum;
    }
};