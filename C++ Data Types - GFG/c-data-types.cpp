//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int cppIntType() {
        // code here
        int x;
        cin>>x;
        return x;
        
    }
    
    char cppCharType() {
        // code here
        char y;
        cin>>y;
        return y;
    }
    
    float cppFloatType() {
        // code here
        float z;
        cin>>z;
        return z;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        Solution ob;
        cout << ob.cppIntType() << endl;
        cout << ob.cppCharType() << endl;
        cout << ob.cppFloatType() << endl;
    }
    return 0;
}
// } Driver Code Ends