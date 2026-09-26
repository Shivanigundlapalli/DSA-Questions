class Solution {
public:
    bool isPalindrome(int x) {
    int tem=x;
    long long rev=0;
    if(x<0){
        return false;
    }
       while(x!=0){
        int last_digit=x%10; 
        rev=rev*10+last_digit;
        x/=10;
        
       }
       return rev==tem; 
    }
};