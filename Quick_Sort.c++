#include <bits/stdc++.h> 

int partition(vector<int> &arr,int s,int e)
{
    int pivot =arr[s];

    int count=0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivot)
        {
            count++;
        }
    }

    int pi=s+count;
    swap(arr[pi],arr[s]);
    
    int i=s,j=e;
    while(i<pi && j>pi)
    {
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        if(i<pi && j>pi)
        {
            swap(arr[i++],arr[j--]);
        }

    }


    return pi;

}


void Quicksort(vector<int> &arr,int s,int e)
{
    if(s>=e)
    {
        return ;
    }
    int p=partition(arr,s,e);
    

    Quicksort(arr,s,p-1);

    Quicksort(arr,p+1,e);
    

}




vector<int> quickSort(vector<int> arr)
{
    Quicksort(arr,0,arr.size()-1);  
    return arr;
}
