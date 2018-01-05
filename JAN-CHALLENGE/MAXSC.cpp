#include<iostream>
#include<bits/stdc++.h>



using namespace std;
long int find_max_lt(long int x,vector<long int> input,long int n){
	long int i=n-1;
	while((input[i]>=x)&&(i!=-1))
		i--;

	if(i==-1)
		return -1;
	else
		return input[i];
}

int main(){
	long int t;
	cin>>t;
	while(t--){
		long int n;
		cin>>n;
		vector<long int> input[n];
		for(long int i=0;i<n;i++){
			for(long int j=0;j<n;j++){
				long int a_ij;
				cin>>a_ij;
				input[i].push_back(a_ij);
			}
			sort(input[i].begin(),input[i].end());
		}
		long int sum=input[n-1][n-1];
		int flag=0;
		long int max=input[n-1][n-1];
		//cout<<"max"<<max<<endl;

		for(long int i=n-2;i>=0;i--){

			long int new_max=find_max_lt(max,input[i],n);
			//cout<<"new_max "<<new_max<<endl;
			if(new_max==-1){
				flag=1;
				break;
			}
			else{
				sum+=new_max;
				max=new_max;
			}
		}

		if(flag==0)
			cout<<sum<<endl;
		else
			cout<<-1<<endl;

	}

}