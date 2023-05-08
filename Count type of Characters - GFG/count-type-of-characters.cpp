//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> count (string s)
        {
            //code here.
            vector <int > ans;
            int l=0,u=0,sp=0,nu=0;
            for (int i=0;i<s.length();i++)
            {
                if (s[i]>=65 &&s[i]<=90)
                {
                    u++;
                }
                else if (s[i]>=97 && s[i]<=122)
                {
                    l++;
                }
                else if (s[i]>= 48 && s[i]<=57)
                {
                    nu++;
                }
                else
                {
                    sp++;
                }
                
                
            }
            
            ans.push_back(u);
             ans.push_back(l);
              ans.push_back(nu);
               ans.push_back(sp);
               return ans;
            
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends