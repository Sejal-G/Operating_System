int n,j=0,k=0,a=0;
scanf("%d",&n);
char s[n];
for(int i=0;i<n;i++){
	cin >> s[i];
	if(s[i]=='1'){one[j++]=i;
	}
	else if(s[i]=='0'){zero[k++]=i;
	}
	else two[a++]=i;
}
if(one==two && two==zero){
	for(int i=0;i<n;i++){
		cout << s[i];
	}
}
else{
	if(j==k){ //one and zero equal
		for(int i=0;i<(a-j);i++){
			while(j!=a){
				two[a--]=''
			}
		}
	}
}

