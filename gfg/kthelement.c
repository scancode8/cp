#include <stdio.h>

int main() {
	int i,j,temp;
	int test;
	for (i=0;i<test;i++)
	{
	    scanf("%d\n",&test);
	    int n;
	    scanf("%d\n",&n);
	    int arr[n];
	    for(i=0;i<n;i++)
	        {
	            scanf("%d ",&arr[i]);
	        }
	   int k;
	    scanf("%d",&k);
	
	for (i=0;i<n;i++)
	    {
	        for(j=0;j<n-i-1;j++)
	        {
	            if(arr[j]>arr[j+1])
	            {
	                temp=arr[j];
	                arr[j]=arr[j+1];
	                arr[j+1]=temp;
	            }
	        }
	    }
	printf("%d",arr[k]);
	}
	
	return 0;
}