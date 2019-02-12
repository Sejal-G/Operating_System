//non preemtpive priority scheduling

#include<bits/stdc++.h>
using namespace std;
struct p{
	double time;
	int priority;
	int burst;
	int sequence;
};

bool comparePriority(process i1, process i2) 
{ 
    return (i1.priority < i2.priority); 
} 

bool compareArrival(process i1,process i2)
{
	return(i1.time < i1.time);
}
p process[10];   
int wait_time=0;
int callfun(int wait_time,int i){
	while(i--)
	{
	if(wait_time >= process[i].time){
	flag=true;
	no=i+1;
	break;
	}
   }
   return no;
}

int main(){
	int n,i=0;
	/*printf("No. of processes");
	cin >> n;*/

	while(i<n){
		cout << "Enter burst time, priority and time respectively";
		cin >> process[i].burst;
		cin >> process[i].priority;
		cin >> process[i].time;
		process[i].sequence=i;
		i++;
	}
	sort(process,process+n,compareArrival);
//	cout << "P1\n";
	bool flag=false;int no=0;int j=1;
	wait_time=process[0].burst;
	cout << process[0].sequence<<endl;
	//callfun(wait_time,)
	while(j<n){
    int t=callfun(wait_time,n); 
    sort(process+j,process+t,comparePriority);
    cout << process[j].sequence;
    wait_time+=process[j].burst;
    j++;
    //callfun(wait_time,n);
	}
	
	/*if(!flag){
		cout <<"idle\n";
	}*/

}
