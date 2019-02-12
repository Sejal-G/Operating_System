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
	int n,q,i=0;
	printf("No. of processes");
	cin>>n;
	cout << " enter the time quantum";
	cin >>quanta;
	process p[n];int arr[2*n];
	while(i<n){
		cout << "Enter bt time, priority and time respectively";
		cin >> process[i].bt;
		cin >> process[i].sequence;
		cin >> process[i].at;
		i++;
	}
	int j=0;int rear=0;
	sort(process, process+n, comparetime);
	cout <<process[0].sequence;
	process[0].bt-=quanta;
	while(quanta){
	//int num=q;
	for(i=rear;process[i].at<=quanta;i++){
		arr[j++]=process[i].sequence;
	}
		int w=i-quanta;
		process[w].bt-=quanta;
		if(process[w].bt>0)
		rear=rear+quanta;
	for(int j=0;j<q;j++)
		{
		
		if(process[w].at<quanta)
		
		{
			enqueue();
		}
		
	}
	for(int i=0;i<n;i++){
		rt[i]=process[i].bt;
	}
	t+=3;
    }
	
	

}
	
