#include <iostream>
#include<bits/stdc++.h>
#define max(a,b)(a>b?a:b)

using namespace std;
int main(){
	long int t;
	cin>>t;

	while(t--){
		long int n;
		cin>>n;
		long int k;
		cin>>k;
		long int prod=k;

		
		long int a[n];
		


		for(long int i=0;i<n;i++){

			cin>>a[i];
		}
		long int dp[n+1][1024];
		dp[0][0]=1;
		for(long int i=0;i<=n;i++){
			for(long int j=0;j<=1023;j++)
				dp[i][j]=0;
		}
		dp[0][0]=1;
		for(long int i=1;i<=n;i++){
			for(long int j=0;j<=1023;j++){

				dp[i][j]=dp[i-1][j]||dp[i-1][j^a[i-1]];
				//cout<<"i"<<i<<" j"<<j<<" "<<dp[i][j]<<endl;
			}
		}
		long int res=0;
		for(long int j=0;j<=1023;j++){
			res=max(res,dp[n][j]*(j^k));
		}
		cout<<res<<endl;

	}
}