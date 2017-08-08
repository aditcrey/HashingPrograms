#include <iostream>
#include<map>
using namespace std;
int sumOfArr(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++) sum+=arr[i];
    
    return sum;
}



bool possibleExchange(int arr1[],int arr2[],int n,int m){
    map<int,bool> exist;
    int sum1 = sumOfArr(arr1,n);
    int sum2 = sumOfArr(arr2,m);
    
    for(int i=0;i<n;i++){
            exist[arr1[i]]=true;
    }
    
    for(int j=0;j<m;j++){
        if(exist[arr2[j] - (sum2-sum1)/2] ) return true;
    }
    
    return false;
    
    
    
    
}

int main() {
	int t;cin>>t;
	
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    
	    int arr1[n];
	    int arr2[m];
	    
	    for(int i=0;i<n;i++) cin>>arr1[i];
	    for(int i=0;i<m;i++) cin>>arr2[i];
	    
	    
	    
	    if(possibleExchange(arr1,arr2,n,m)) cout<<1<<endl;
	    else cout<<-1<<endl;
	    
	    
	}
	return 0;
}
