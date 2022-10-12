class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
    
        if(bits[bits.size()-1]==1)return false;
        int i;
        for( i=0;i<bits.size()-1;)
        {
           if(bits[i]==1){
               i=i+2;
           }
            else 
                i++;
            
        }
         if(i==bits.size()-1)
            return true;
          return false;
    }
};