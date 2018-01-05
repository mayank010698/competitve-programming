#include<iostream>
#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
#define max(a,b)(a>b?a:b)

long int maxSubArraySum(vector<int> a, long int size)
{
    long int max_so_far = -100000000, max_ending_here = 0;
 
    for (long int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}



int main(){
	long int t;
	cin>>t;
	while(t--){
		long int n;
		cin>>n;
		long int k;
		cin>>k;
		long int max_sum;

		vector<int> input;
		long int sum_array=0;
		for(long int i=0;i<n;i++){
			long int a;
			cin>>a;
			input.push_back(a);
			sum_array+=a;
			
		}
		long int choice1=maxSubArraySum(input,input.size());
		input.insert(input.end(),input.begin(),input.end());
		long int choice2=maxSubArraySum(input,input.size());
		//cout<<"choice1"<<choice1<<" choice2"<<choice2<<endl;
		if(k==1)
			cout<<choice1<<endl;
		else
			cout<<max((k-2)*sum_array+choice2,choice2)<<endl;

	}
}