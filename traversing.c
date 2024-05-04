#include<stdio.h>
void traversing(int a[],int n )
{
    int k=0;
    while (k<n){
        printf("%d",a[k]);
        k++;
    }
}
int main()
{
    int a[20],i,n;
    printf("enter number of elemnt");
    scanf("%d",&n);
      if (n > 20 || n <= 0)
    {
        printf("Invalid size\n");
        return 1; // Returning an error code
    }

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        printf("number=%d",i+1);
printf("\n");
    }
    traversing(a,n);
    printf("\n");
   
return 0;
}