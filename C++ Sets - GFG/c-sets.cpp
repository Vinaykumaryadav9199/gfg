//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution{
    public:
    vector<set<int>> setOperations(set<int> A, set<int> B){
        // code here
        vector<set<int>> ans ;
        set <int > un;
        set <int> in;
        set <int> deff;
         set_union(A.begin(), A.end(), B.begin(), B.end() , inserter(un , un.begin()));
         set_difference(A.begin(), A.end(), B.begin(), B.end() , inserter(deff , deff.begin()));
           set_intersection(A.begin(), A.end(), B.begin(), B.end() , inserter(in , in.begin()));
         if (deff.empty())
         {
             deff.insert(0);
         }
          if (un.empty())
         {
             un.insert(0);
         }
          if (in.empty())
         {
             in.insert(0);
         }
         ans.push_back(un);
         ans.push_back(deff);
         ans.push_back(in);
          return ans ;
        
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N, M;
        cin>>N>>M;
        set<int> A, B;
        int x;
        for(int i = 0;i < N;i++){
            cin>>x;
            A.insert(x);
        }
        for(int i = 0;i < M;i++){
            cin>>x;
            B.insert(x);
        }
        
        Solution ob;
        vector<set<int>> result = ob.setOperations(A, B);
        for(int i = 0;i < 3;i++){
            for(auto &it: result[i])
                cout<<it<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends