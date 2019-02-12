#include<iostream>
using namespace std;
int main(){
	printf("Enter no of processes and resources");
	int n,res;
	cin >> n >> res;
	int flag[n]={false};
	int allocation[n][res],max[n][res],available[res],need[n][res];
	printf("Fill the allocation table");
	for(int i=0;i<n;i++){
		for(int j=0;j<res;j++){
			cin >> allocation[i][j];
		}
	}
	printf("Fill the maximum table");
	for(int i=0;i<n;i++){
		for(int j=0;j<res;j++){
			cin >> max[i][j];
			need[i][j]=max[i][j]-allocation[i][j];
		}
	}
	printf("Enter the resources available");
	for(int i=0;i<res;i++){
		cin >> available[i];
	} 
	int y=0;
	for(int i=0;i<n;i++){
		if(flag[i]==false && available[y]>=need[i][y]){
			//cout<< "Entered loop";
			while(y<res-1)
			{
			if(available[y++]>=need[i][y++]){

			}
			else{
				y=0; break;
				} 
			}
			y++;
			if(y>=res) {
				flag[i]=true;
				printf("%d",i);
				for(int j=0;j<res;j++){
					available[j]+=need[i][j];
				}
			}
		
	i=0;
	continue;		
	}
	
	}
}
