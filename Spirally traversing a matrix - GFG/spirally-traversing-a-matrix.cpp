//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        int startRow = 0;
        int startCol =0;
        int row = matrix.size();
        int col = matrix[0].size();
        int totalElement = row*col;
        int rowIndex = row -1;
        int colIndex = col-1;
        int count  =0;
        vector<int> ans;
        while (count<totalElement)
        {
            for (int i = startCol; count<totalElement && i<=colIndex;i++)
            
            {
                ans.push_back(matrix[startRow][i]);
                count++;
            }
            startRow++;
        
             for (int i = startRow; count<totalElement && i<=rowIndex;i++)
            
            {
                ans.push_back(matrix[i][colIndex]);
                count++;
            }
            colIndex--;
             for (int i = colIndex; count<totalElement && i>=startCol;i--)
            
            {
                ans.push_back(matrix[rowIndex][i]);
                count++;
            }
            rowIndex--;
           
            for (int i = rowIndex; count<totalElement && i>=startRow;i--)
            
            {
                ans.push_back(matrix[i][startCol]);
                count++;
            }
            startCol++;
            
            
            
            
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends