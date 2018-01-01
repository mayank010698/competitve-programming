#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	
	long int t;
	cin>>t;

	while(t--){
		long int x,y,k,n ;
		cin>>x>>y>>k>>n;
		long int diff=x-y;
		int flag=0;

		for(int i=0;i<n;i++){
			long int pi,ci;
			cin>>pi>>ci;

			if(pi>=diff&&ci<=k)
			{
				flag=1;
			}
			
		}
		if(flag==1){
			cout<<"LuckyChef\n";
		}
		else
		{	
			cout<<"UnluckyChef\n";
		}
	}
	return 0;
}