//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int distributeTicket(int N, int K) {
        // code here
        int a=1;
        int b=N;
        int c=1;
        while(b-a>=K)
        {
         if(c%2==0)
         {
             b=b-K;
             c++;
             
         }
         else
         {
             a=a+K;
             c++;
         }
        }
        if(c%2==0)
        {
            return a;
        }
        else{
            return b;
        }
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends