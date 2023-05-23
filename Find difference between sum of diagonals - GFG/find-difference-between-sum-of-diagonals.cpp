//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int diagonalSumDifference(int N, vector<vector<int>> Grid) {
        // code here
        
        int n = Grid.size();
        int a= 0;
        int b=0;
        int c=0;
        int d =n-1;
        int count =0;
        int sum1=0;
        int sum2=0;
        while (count <n)
        {
        
            sum1 = sum1 + Grid[a][b];
            sum2 = sum2 + Grid[c][d];
            
            a++;
            b++;
            c++;
            d--;
            count++;
        }
        
        int x= sum1-sum2;
        if (x<0)
        {
            return (-x);
        }
        else 
        {
            return x;
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
        vector<vector<int>> Grid1(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> Grid1[i][j];
        Solution ob;
        cout << ob.diagonalSumDifference(N, Grid1) << "\n";
    }
}
// } Driver Code Ends