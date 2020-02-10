#include<iostream>
using namespace std;

int binarysearch(int arr[],int l,int r,int x)
{
    if (r>=l)
    {
        int mid=l+(r-1)/2;
        
        if(arr[mid]==x)
        {
            return mid;
        }
        
        if(arr[mid]>x)
        {
            return binarysearch(arr,l,mid-1,x);
            
        }
        
        else{
            return binarysearch(arr,mid+1,r,x);
        }
    }
    
    else{
        
        return -1;
    }
    
}


int main()
{
 int arr[]={2,3,4,6,7,10,70};
 int x=99;
 int n=sizeof(arr)/sizeof(int);
 int result=binarysearch(arr,0,n-1,x);
 
 if(result!=-1)
 {
     cout<<"Element at index:"<<result;
 }
 else{
     cout<<"Element Not Present in Array";
 }
}


