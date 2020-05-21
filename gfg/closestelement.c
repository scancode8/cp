#include <stdio.h>
#include <stdlib.h>
int main() {
// 2
// 4 4                       mi?
// 1 3 6 7                     res:3,1,2,3
// 7 4                      3,2,1,-1
// 1 2 3 5 6 8 9
int test;int t;
scanf("%d",&test);
for(t=0;t<test;t++)
{
    int size; int i;
    scanf("%d",&size);
    int ele;
    scanf("%d",&ele);
    int arr[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int res[size];
    for(i=0;i<size;i++)
    {
        res[i]=ele-arr[i];
        
    }
    int min=res[0];int index;
    for(i=0;i<size;i++)
    {
        if(abs(res[i])<abs(min))
        {
            min=res[i];
            index=i;
        }
        if(abs(res[i])==abs(min))
        {
            min=abs(min);
        }
    }
    printf("%d ",res[index]);
}
}