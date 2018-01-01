#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	
	long int t;
	cin>>t;

	while(t--){
		long int n ;
		long int k;
		cin>>n>>k;
		long int sum=0;
		for(int i=0;i<n;i++){
			long int ak;
			cin>>ak;
			sum+=ak;
		}
		if(sum<=k){
			cout<<"Yes\n";
		}
		else
		{	
			cout<<"No\n";
		}
	}
	return 0;
}