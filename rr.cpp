//Round Robin Scheduling

#include<bits/stdc++.h>
using namespace std;
struct process{
	double at;
	int bt;
	int sequence;
};
bool comparetime(process p1,process p2){
	return(p1.at > p2.at);
}

int main(){
	int quanta;
	int n,q,i;int time=0;
	printf("No. of processes\n");
	cin>>n;
	cout << " enter the time quantum" <<endl;
	cin >>quanta;
	process p[n];int arr[2*n];arr[0]={process[0].sequence};
	while(i<n){
		cout << "Enter bt time, priority and time respectively";
		cin >> process[i].bt;
		cin >> process[i].sequence;
		cin >> process[i].at;
		i++;
	}
	int g=0;int rear=0;
	sort(process, process+n, comparetime);
	for(i=0;i<2*n-1;i++){
		if(process[i].bt>quanta){
			time+=3;
		}
		else{
			time+=process[i].bt;
		}
		if(process[i].bt>0)
		{
			for(int j=process[i].at,int k=0;j<process[i].at+quanta;k++,j++){
			
				arr[g++]=process[i].sequence;
			}
	    }
	    else continue;
	}
