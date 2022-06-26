// monk and rotation of elements in array

#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,k,i,j,m;
	cin>>t;
	cin>>n>>k;
	int A[n];
	int B[n];
	for(i=0;i<t;i++){
		for(j=0;j<n;j++){
			cin>>A[j];
		}
		j=k-1;
		for(m=n-1;m>=n-k;m--){
			
			B[j]=A[m];
			j--;
			
		}
		if(k!=n){
		    j=k;
			for(int x=0;x<n-k;x++){
				B[j]=A[x];
			    j++;

			}
		}
		for(j=0;j<n;j++){
			cout<<B[j]<<" ";
		}
	}
	return 0;

}


