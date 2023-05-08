//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution
{   
public:
    vector<string> splitString(string S) 
    { 
        // code here 
        vector <string > ans ;
        
        string s1="",s2="",s3="";
        for (int i=0;i<S.length();i++)
        {
            if(S[i]>=65 && S[i]<=90)
            {
                s1+=S[i];
                
            }
            else  if (S[i]>=97 && S[i]<=122)
            {
                s1+=S[i];
                
            }
            else if (S[i]>=47 && S[i]<=57)
            {
                s2 +=S[i];
            }
            else 
            {
                s3+=S[i];
            }
            
        }
       ans.push_back(s1);
       ans.push_back(s2);
       ans.push_back(s3);
       return ans ;
        
        
    } 
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        vector<string> result = ob.splitString(S);
        for (int i = 0; i < result.size(); ++i)
        {
            if(result[i] == "")
                cout<<-1<<"\n";
            else
                cout<<result[i]<<"\n";
        }
    }
    return 0; 
} 


// } Driver Code Ends