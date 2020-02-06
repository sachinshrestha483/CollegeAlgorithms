#include<iostream>
using namespace std;


int binarysearch(int arr[],int l,int r,int x)
{
	while(l<=r)
	{
		int m=l+(r-1)/2;
		
		if(arr[m]==x)
		{
			return m;
		}
		
		if(arr[m]<x)
		 l=m+1;
		
		else
		 r=m-1;
		
	}
	
	return -1;
}

int main()
{
	int arr[]={1,5,7,9,10,14,56};
	int x=10;
	int n=sizeof(arr)/sizeof(int);
	int result=binarysearch(arr,0,n-1,x);
	if(result!=-1)
	{
		cout<<result;
	}
	else{
		cout<<"Not in array";
	}
	
}
