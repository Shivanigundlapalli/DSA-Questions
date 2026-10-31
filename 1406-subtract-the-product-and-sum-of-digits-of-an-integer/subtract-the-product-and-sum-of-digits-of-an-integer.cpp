class Solution {
public:
    int subtractProductAndSum(int n) {
        int res=0;
        int product=1;
        int sum=0;
        while(n>0){
            int last_digit=n%10; 
            product*=last_digit;
            sum+=last_digit;
            res=product-sum;
            n/=10;
        }
        return res;
    }
};