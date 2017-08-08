//This question can also be solved by just sorting and then finding the longest consecutive subarray

#include <iostream>
#include<unordered_set>
using namespace std;

int main() {
	int t;cin>>t;
	
	while(t--){
	    int n;cin>>n;
	    
	    int arr[n];
	    
	    for(int i=0;i<n;i++) cin>>arr[i];
	    int ans = 0;
	    
	    unordered_set<int> exist;
	    
	    for(int i=0;i<n;i++) exist.insert(arr[i]);
	    
	    for(int i=0;i<n;i++){
	        int count= 0;
	        if(exist.find(arr[i]-1)==exist.end()) {//means that arr[i] is the starting element of the consecutive subsequence
	            int j=arr[i];
	            while(exist.find(j)!=exist.end()){
	                count++;
	                j++;
	            }
	            
	            ans = max(ans,count);
	            
	        }
	        
	        
	    }
	    
	    cout<<ans<<endl;
	    
	    
	}
	return 0;
}
