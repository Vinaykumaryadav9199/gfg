//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
  int fact (int x)
  {
      int fact =1;
      while (x!=0)
      {
         fact*=x;
         x--;
          
          
      }
      
      return fact;
  }
    int isPerfect(int N) {
        // code here
        
        int temp = N;
        int rem =0;
        int sum =0;
        while (N!=0)
        {
            rem = N%10;
            sum += fact (rem);
            N= N/10;
            
        }
        
        if (sum==temp)
        {
            return 1;
        }
        else 
        {
            return 0;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isPerfect(N) << "\n";
    }
}

// } Driver Code Ends