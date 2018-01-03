#include <iostream>
#include<bits/stdc++.h>

using namespace std;
#define max(a,b) (a>b ? a : b)
#define min(a,b) (a<b ? a : b)
int main() {
    long long int t;
    cin>>t;
    
    while(t--){
        long long int n;
        cin>>n;
        vector<long long int> input;
        input.resize(n);
        
        for(int i=0;i<n;i++)
            cin>>input[i];
        
        vector<long long int> min_ending;
        min_ending.resize(n);
        min_ending[0]=input[0];
        for(int i=1;i<n;i++){
            min_ending[i]=min(min_ending[i-1]+input[i],input[i]);
        }
        
        vector<long long int> max_ending;
        max_ending.resize(n);
        max_ending[0]=input[0];
        for(int i=1;i<n;i++){
            max_ending[i]=max(max_ending[i-1]+input[i],input[i]);
        }
        vector<long long int> min_starting;
        min_starting.resize(n);
        min_starting[n-1]=input[n-1];
        for(int i=n-2;i>=0;i--){
            min_starting[i]=min(min_starting[i+1]+input[i],input[i]);
        }
        
        vector<long long int> max_starting;
        max_starting.resize(n);
        max_starting[n-1]=input[n-1];
        for(int i=n-2;i>=0;i--){
            max_starting[i]=max(max_starting[i+1]+input[i],input[i]);
        }
        
        
        long long int delish=0;
        for(long long int j=0;j<n-1;j++){
            
            if(abs(max_ending[j]-min_starting[j+1])>delish)
                delish=abs(max_ending[j]-min_starting[j+1]);
            if(abs(max_starting[j+1]-min_ending[j])>delish)
                delish=abs(max_starting[j+1]-min_ending[j]);
            
        }
        cout<<delish<<endl;
    }
	
	return 0;
}
