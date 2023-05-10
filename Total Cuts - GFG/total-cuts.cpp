//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int totalCuts(int N,int K,vector<int> &A){
        // Code here
       int  leftmax[N];
        int  rightmin[N];
       leftmax[0]=A[0];
        for (int i=1;i<N;i++)
        {
          leftmax[i]=max(leftmax[i-1],A[i]);
        }
        
        rightmin[N-1]=A[N-1];
        for (int i=N-2;i>=0;i--)
        {
          rightmin[i]=min(rightmin[i+1],A[i]);  
        }
        int count =0;
        for (int i=0;i<N-1;i++)
        {
            if (leftmax[i]+rightmin[i+1]>=K)
            {
                count ++;
            }
        }
        
        return count;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,K;
        cin>>N>>K;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution ob;
        cout<<ob.totalCuts(N,K,A)<<endl;
    }
    return 0;
}
// } Driver Code Ends