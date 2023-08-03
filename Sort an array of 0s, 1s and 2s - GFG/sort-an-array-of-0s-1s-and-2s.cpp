//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int zcount=0, ocount=0,tcount=0;
        for (int i=0; i<n;i++)
        {
            if (a[i]==0)
            {
                zcount++;
            }
            else if (a[i]==1)
            {
                ocount++;
            }
            else
            {
                tcount++;
            }
        }
        
        for (int i=0;i<n;i++)
        {
            if (i<zcount)
            {
                a[i]=0;
            }
            else if (i>=zcount && i< zcount+ocount)
            {
                a[i]=1;
            }
            else 
            {
                a[i]=2;
            }
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends