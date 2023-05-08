//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int findNthTerm(int N) {
        // code here
        int num =1;
        int sum =0;
        for (int i =0;i<N;i++)
        {
            sum = sum +num;
            num++;
        }
        return sum ;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.findNthTerm(N) << endl;
    }
    return 0;
}
// } Driver Code Ends