#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
	int prime[20004];
	for(int i=0;i<=2003;i++){
		prime[i]=1;
	}
	prime[0]=0;
	prime[1]=0;
	for(int i=2;i<=2003;i++){
		if(prime[i]==1){
			for(int j=2*i;j<=2003;j+=i)
				prime[j]=0;
		}
	}
	/*for(int i=0;i<=2003;i++){
		cout<<prime[i]<<" ";
	}*/

	int t;
	cin>>t;
	while(t--){
	int x;
	cin>>x;
	int y;
	cin>>y;

	int start=x+y;
	int i=start+1;
	for(;i<=2003;i++){
		if(prime[i]==1){
			break;
		}
	}
	cout<<i-start<<endl;
 }
 
}

