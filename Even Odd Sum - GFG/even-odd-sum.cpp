//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> EvenOddSum(int N, int Arr[]) {
        // code here
        vector <int > ans;
        int even =0;
        int odd =0;
        for (int i=0;i<N;i++)
        {
            if (i%2==0)
            {
                even+=Arr[i];
            }
            else
            {
                odd+=Arr[i];
            }
       
            
        }
        ans.push_back(even);
        ans.push_back(odd);
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int Arr[N];
        for (int i = 0; i < N; i++) cin >> Arr[i];
        Solution ob;
        vector<int> ans = ob.EvenOddSum(N, Arr);
        cout << ans[0] << " " << ans[1] << "\n";
    }
}
// } Driver Code Ends