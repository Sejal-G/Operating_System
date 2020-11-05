//Shortest Job frist
//pre-emptive mode


#include <iostream>
#include <algorithm>
using namespace std;

int ab;

typedef struct process
{
	string pro_id;
	int at,bt,ct,ta,wt;
}process;

bool compare(process a,process b)
{
	return a.at < b.at && ;
}

bool comparator(process a,process b)
{
	return a.bt < b.bt && a.at <= ab;
	/* This process will always return TRUE 
	if above condition comes*/
}

int main()
{
	process arr[10];
	
	int n,i,j;
	//n = number of processes, i= iteration variable

	cout<<"Enter the number of processes::";
	cin>>n;
	cout<<"Enter the schedule id, arrival time, burst time :::";

	for(i=0;i<n;i++)
	{
		cin>>arr[i].pro_id;
		cin>>arr[i].at;
		cin>>arr[i].bt;
	}

	sort(arr,arr+n,compare);


	arr[0].ct=arr[0].bt+arr[0].at;
	arr[0].ta=arr[0].ct-arr[0].at;
	arr[0].wt=arr[0].ta-arr[0].bt;

	for(i=1;i<n;i++)
	{
		ab=arr[i-1].ct;
		sort(arr+i,arr+n,comparator);
		if(arr[i-1].ct<arr[i].at)
		{
			arr[i].ct=arr[i-1].ct+arr[i].bt+(arr[i].at-arr[i-1].ct);
		}
		else
		{

			arr[i].ct=arr[i-1].ct+arr[i].bt;

		}
		arr[i].ta=arr[i].ct-arr[i].at;
		arr[i].wt=arr[i].ta-arr[i].bt;
	}

	for(i=0;i<n;i++)
	{
		
		cout<<arr[i].pro_id<<"\t"<<arr[i].at<<"\t"<<arr[i].bt
		<<"\t"<<arr[i].ct<<"\t"<<arr[i].ta<<"\t"<<arr[i].wt;
		
		cout<<endl;
	}
	
	return 0;
}

