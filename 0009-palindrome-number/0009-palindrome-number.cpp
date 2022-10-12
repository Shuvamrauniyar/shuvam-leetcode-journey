class Solution {
public:
    
    bool isPalindrome(int x) {
        long long int rev=0;
        int m=x;
        while(x>0)
        {
            rev=rev*10+x%10;
            x=x/10;
        }
        if(m==rev)
        {
            
            return true ;
        }
    return false;
    }
  
};