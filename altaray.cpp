#include<iostream>
#include<vector>

using namespace std;

int main(){
	long int t;
	cin>>t;

	while(t--){
		long int n;
		cin>>n;

		vector<long int> input;
		input.resize(n);

		vector<long int> longest_alternating_seq;
		longest_alternating_seq.resize(n);
		
		for(int i=0;i<n;i++){
			cin>>input[i];
		}

		longest_alternating_seq[n-1]=1;

		for(int i=n-2;i>=0;i--){
			if(input[i]*input[i+1]<0){
				longest_alternating_seq[i]=longest_alternating_seq[i+1]+1;
			}
			else{
				longest_alternating_seq[i]=1;
			}
		}
		for(int i=0;i<n;i++){
			cout<<longest_alternating_seq[i]<<" ";
		}
		cout<<endl;
	}
}