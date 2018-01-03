#include<iostream>
#include<bits/stdc++.h>
#include<limits.h>
#define min(a,b)(a<b?a:b)


using namespace std;

int main(){
	long int t;
	cin>>t;

	while(t--){

		long int n;
		cin>>n;

		vector<long int> input;
		input.resize(n);
		vector<long int> exchange;
		exchange.resize(n);



		long int max=0;

		for(long int i=0;i<n;i++){
			cin>>input[i];
			input[i]*=2;
			if(input[i]>max)
				max=input[i];

		}
		//cout<<"max "<<max<<endl;
		for(long int i=0;i<n;i++){
			cin>>exchange[i];
		}

		sort(input.begin(),input.end());
		sort(exchange.begin(),exchange.end());


		long int dp[max+1];
		dp[0]=0;

		for(long int i=1;i<=max;i++){
			dp[i]=INT_MAX;
		}
		for(long int i=0;i<n;i++){
			for(long int j=exchange[i];j<=max;j++){

				dp[j]=min(dp[j],1+dp[j-exchange[i]]);
				//cout<<"j"<<j<<" dp[j]"<<dp[j]<<endl;
			}
			
		}


		long int res=0;
		for(long int i=0;i<n;i++){
			res+=dp[input[i]];
			//cout<<dp[input[i]]<<endl;
		}
		cout<<res<<endl;
	}
}