#include<stdio.h>
void delete(int a[],int n,int loc)
{  int i=loc;
    int del_item=a[loc];
    while (n-1>i){
       
    a[i]=a[i+1];
    i++;
    }
    n=n-1;
printf("item is deleted\n%d",del_item);
for(int i=0; i<n; i++){
printf("\n%d",a[i]);
}

}
int main()
{ int  a[20],n,loc;
    printf("ENTER number of arry");
    scanf("%d",&n);
    if (n>20){
        printf("invalid");
    return 1;
    }
    for (int i=0;i<n;i++){
    scanf("%d",&a[i]);
    printf("number=%d\n",i+1);

}printf("enter the location ");
scanf("%d",&loc);
delete(a,n,loc);
return 0;
}