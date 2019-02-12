#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t,r,b;
    scanf("%d",&t);
	while(t-- && scanf("%d%d%d",&n,&r,&b);)
	{
	int a[n];int j=0,bob=0,alice=0;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]%r==0 && a[i]%b==0){
			j++;
		}
		else if(a[i]%r==0) {
			bob++;
		}
		else if(a[i]%b==0){
			alice++;
		}
	}
	if(j){
		if(alice==0)
			printf("BOB\n");
		else if(alice>bob)
			printf("ALICE\n");
		else
			printf("BOB\n");
	}
	else
	{   if(bob==0) printf("ALICE\n");
		else if(alice<bob){
			printf("BOB\n");
		}
		else printf("ALICE\n");
	}
}
}
