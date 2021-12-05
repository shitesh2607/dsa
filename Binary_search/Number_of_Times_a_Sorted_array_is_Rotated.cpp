// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    int s = 0;
	    int e = n-1;
	    while(s<=e){
	        int mid = s+(e-s)/2;
	        int next = (mid+1)%n ;
	        int prev = (mid-1+n)%n ;
	        
	        if(arr[mid]<=arr[next] && arr[mid]<=arr[prev]){
	            return mid;
	        }else{
	            if(arr[mid]<=arr[e] && arr[mid]>=arr[s]){
	              return s;
	            }else if(arr[s]<=arr[mid]){
	            s = mid+1;
	            }else if(arr[mid]<=arr[e]){
	            e = mid-1;
	           }
	        } 
	    }
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends