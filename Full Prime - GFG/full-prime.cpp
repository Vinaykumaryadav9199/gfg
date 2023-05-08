//{ Driver Code Starts
//Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
    
    bool prime(int x)
    {   int count=0;
    if (x==1)
    {
        return 0;
    }
    if (x==0)
    {
        return 0;
    }
        for (int i=2;i<=x/2 ;i++)
        {
            if (x%i==0)
            {
                return 0;
            }
        }
        
       return 1;
    }
	int fullPrime(int N){
	    //code here
	    int c=0;
	    if (!prime(N))
	    {
	       return 0;
	    }
	    while (N!=0)
	    {
	        if (!prime(N%10))
	        {
	           return 0;
	        }
	        N=N/10;
	        
	    }
	   
	 return 1;
	    
	}
};


//{ Driver Code Starts.
int main()
{
	int t;
    cin>>t;
    while(t--){
	   int N;
	   cin>>N;
       Solution ob;
       cout << ob.fullPrime(N)<<"\n";
    }
}
// } Driver Code Ends