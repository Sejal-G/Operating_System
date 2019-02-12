//non-preemptive sjf
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t); //no of processes
	vector< pair< int,int > >v;
	
	int burst_time[t], arrival_time[t],w[t];
	for(int i=0;i<t;i++){
		scanf("%d",&arrival_time[i]);
	}
	for(int i=0;i<t;i++){
		scanf("%d",&burst_time[i]);
	}
	int j=burst_time[0];
	//printf("%d\t%d\n",burst_time[0],arrival_time);
	for(int i=1;i<t;i++){
		v.push_back( make_pair(burst_time[i],arrival_time[i]));
	}
	
	for(int i=0;i<t-1;i++)
	{
		printf("%d ",v[i].first);
		printf("%d\n",v[i].second);
	}
	
	
}
