void merge(vector < int > & arr,int s,int e)
{
    int mid=s+(e-s)/2;

    int len1=mid-s+1;
    int len2=e-mid;

    int *first=new int[len1];
    int *second=new int[len2];

    int k=s;
    for(int i=0;i<len1;i++)
    {
        first[i]=arr[k++];
    }
    k=mid+1;
    for(int i=0;i<len2;i++)
    {
        second[i]=arr[k++];
    }

    int a=0;
    int b=0;
    k=s;

    while(a<len1 && b<len2)
    {
        if(first[a]<second[b])
        {
            arr[k++]=first[a++];
        }
        else{
            arr[k++]=second[b++];
        }
    }
    while(a<len1)
    {
        arr[k++]=first[a++];
    }
    while(b<len2)
    {
        arr[k++]=second[b++];
    }
    delete []first;
    delete []second;


}


void sort(vector < int > & arr,int s,int e)
{

   
    if(s>=e)
    {
        return ;
    }
    int mid=s+(e-s)/2;
    sort(arr,s,mid);
    sort(arr,mid+1,e);
    merge(arr,s,e);

}



void mergeSort(vector < int > & arr, int n) {
    sort(arr,0,n-1);
}
