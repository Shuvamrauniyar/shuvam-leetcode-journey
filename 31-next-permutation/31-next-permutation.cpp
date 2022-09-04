class Solution {
public:
    void nextPermutation(vector<int>& permutation) {
        int n=permutation.size();
           int i;
    for( i=n-2;i>=0;i--)
    {
        if(permutation[i]<permutation[i+1])
            break;
    }
    int j;
    if(i<0)
    {
        reverse(permutation.begin(),permutation.end());
    }
    else{
    for( j=n-1;j>i;j--)
    {
        if(permutation[i]<permutation[j])
            break;
    }
    
    swap(permutation[i],permutation[j]);
    reverse(permutation.begin()+i+1,permutation.end());
    }
    }
};