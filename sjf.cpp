//non-preemptive sjf
#include<bits/stdc++.h>
using namespace std;
bool cmp(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
} 
int main(){
	int t,total_time;
	printf("Enter the number of processes");
	scanf("%d",&t); //no of processes
	vector< pair<int,int > >v;
	printf("Enter the arrival time and burst time of the processes");
	int bt[t],at[t],w[t];
	for(int i=0;i<t;i++){
		scanf("%d%d",&at[i],&bt[i]);
		total_time+=bt[i];
		v.push_back(make_pair(at[i],bt[i]));
	}
	int i=1;
	//printf("yaaaay");
	printf("The processes are to be executed in the order: \n");
    printf("\n\n");
	
	i=1;
	sort(v.begin(),v.end());
	
	for(i=0;i<t;i++){
     printf("%d",v[i].first);
    }
	cout << v[0].first<<v[0].second<<endl;
	int temp;//=v[0].second;
	//printf("%d\t\t%d",v[0].first,v[0].second);
	while(temp<total_time){
		temp+=v[i].second;
		sort(v.begin(),v.begin()+temp,cmp);
		printf("%d\t\t%d",v[i].first,v[i].second);
		i++;
	}
}
