//non-pre-emptive process
#include<iostream>
using namespace std;
int main(){
	int t;
	printf("Enter the number of processes:: ");
	scanf("%d",&t);
	 //no of processes
	int b[t], turn_around[t],w[t];
	for(int i=0;i<t;i++){
		scanf("%d",&b[i]);
	}
	w[0]=0;
	for(int i=1;i<t;i++){
		w[i]=b[i-1]+w[i-1];
	}
	for(int i=0;i<t;i++){
		turn_around[i]=b[i]+w[i];
	}
	float avg_wait=0.0,avg_turn=0.0;
	for(int i=0;i<t;i++){
		avg_wait+=w[i];
		avg_turn+=turn_around[i];
	}
	avg_wait/=t;
	avg_turn/=t;
	printf("Processes\tBurst T\tWait T\t Turn around t\n");
	for(int i=0;i<t;i++){
	printf("%d\t\t%d\t\t%d\t\t%d\n",(i+1),b[i],w[i],turn_around[i]);
	
}
    printf("Average Waiting time = %f\n",avg_wait);
	printf("Average Turn around time = %f",avg_turn);
	return 0;
}
