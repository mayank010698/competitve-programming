#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	long int t;
	cin>>t;

	
	while(t--){
		vector<long int> sides;
		for(int i=0;i<4;i++){
		long int side;
		cin>>side;
		sides.push_back(side);
		}
		sort(sides.begin(),sides.end());

		
		if(sides[0]!=sides[1])
			cout<<"NO\n";
		else if(sides[2]!=sides[3])
			cout<<"NO\n";
		else
			cout<<"YES\n";

	}
}