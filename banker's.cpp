#include<iostream>
using namespace std;
int main(){
	printf("Enter no of processes and resources");
	int n,res;
	cin >> n >> res;
	bool flag[n]={false};
	int allocation[n][res],max[n][res],available[res],need[n][res];
	printf("Fill the allocation table");
	for(int i=0;i<n;i++){
		for(int j=0;j<res;j++){
			cin >> allocation[i][j];
		}
	}
	printf("Fill the maximum resources available table");
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
	int y=0,j;
	for(int i=0;i<n && !flag[i];i++){
		for(j=0;j<n;j++){
			if(available[j]>=need[j][i]){
				available[j]-=need[j][i];
				need[j][i]=0; 
			}
			break;
		}
		if(j==n){
			flag[i]=true;
			cout << i << endl;
			for(int j=0;j<res;j++){
				available[j]+=need[j][i];
			}
		}
	}
}
