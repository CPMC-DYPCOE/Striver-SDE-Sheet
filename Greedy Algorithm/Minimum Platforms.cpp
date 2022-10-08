https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1
//{ Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int findPlatform(int arr[], int dep[], int n)
    {
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	
    	int i=0,j=0;
    	int res=0;
    	int platform=0;
    	while(j<n && i<n){
    	    
    	    if(arr[i]<=dep[j]){
    	        platform++;
    	        i++;
    	    }
    	    else{
    	        platform--;
    	        j++;
    	    }
    	    res=max(res,platform);
    	}
    	return res;
    }
};


//{ Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}
// } Driver Code Ends