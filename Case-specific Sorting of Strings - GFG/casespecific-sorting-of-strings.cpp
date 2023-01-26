//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        string lc="" , uc = "" ;
        for(char ch :str)
        {
            if(ch >= 'A' && ch <= 'Z')
            uc += ch;
            else
            lc += ch;
        }
        sort(lc.begin(),lc.end());
        sort(uc.begin(),uc.end());
        string newString = "";
        int lc_idx = 0, uc_idx = 0;
        for(char ch:str)
        {
            if(ch >= 'A' && ch <= 'Z')
              newString += uc[uc_idx++];
             else
             newString += lc[lc_idx++];
        }
        return newString;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends