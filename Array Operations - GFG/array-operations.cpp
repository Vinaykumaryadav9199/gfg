//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int arrayOperations(int n, vector<int> &arr) {
        // code here
        int count =0;
        int x =0;
        for (int i=1;i<n;i++)
        
        {
            if (arr[i]==0)
            {
                x++;
            }
            if (arr[i-1]!=0 &&arr[i]==0)
            {
                count ++;
            }
        }
        
      if (arr[0]==0)
      {
          x++;
      }
      if (x==n)
      {
          return 0;
      }
        if (count >0)
        {   if (arr[n-1]==0)
            return (count );
            else 
            return (count +1);
        }
        else 
        {
            return  (-1);
        }
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        
        
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution obj;
        int res = obj.arrayOperations(n, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends