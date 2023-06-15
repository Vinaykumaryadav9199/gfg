//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string S) {
        // code here
        int n = S.size();
        int len =0, start =-1;
        
        for (int i =0;i<n;i++)
        {
            int s= i ,e = i; ;
            
            while (s>=0 && e<=n  && S[s]== S[e])
            {
                int curlen = e-s+1;
                if (curlen>len)
                {
                    start =s;
                    len= curlen;
                }
                
                s--;
                e++;
            }
            
            s=i-1 , e=i;
            while (s>=0 && e<n && S[s]==S[e])
            {
                int curlen = e-s+1;
                if (curlen>len)
                {
                    start =s;
                    len = curlen;
                }
                s--;
                e++;
            }
        }
        
        return S.substr(start , len);
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends