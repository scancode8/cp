#include <stdio.h>

int main() {
	//code
// 	for each test case 
// 	l1: size of array
// 	l2: elements of array
// 	l3: element to be found
int test;int i;
scanf("%d\n",&test);
for(i=0;i<test;i++)
{   
    int size;int index=-1;
    scanf("%d",&size);
    int arr[size];int j;
    for(j=0;j<size;j++)
    {
        scanf("%d ",&arr[j]);
    }
    int ele;
    scanf("%d",&ele);
    int k;
    for(k=0;k<size;k++)
    {
        if(arr[k]==ele)
        {  
            index=k;
            
            break;
            
        }
       
    }
    printf("%d\n",index);
}

}