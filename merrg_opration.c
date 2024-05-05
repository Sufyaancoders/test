#include <stdio.h>
void merge(int a[], int b[], int c[], int n1, int n2)
{
    int i, j, k;
    i = j = k = 0;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = b[j];
            k++;
            j++;
        }
        /* ode */
    }
    while (i < n1)
    {
        c[k] = a[i];
        k++;
        i++;

        /* code */
    }
    while (j < n2)
    {
        c[k] = b[j];
        k++;
        j++;
    }
    printf("enter the result number  ");
    
}
int main()
{
    int a[20], b[20], c[40], i, j, k, n1, n2;
    printf("how many number inter in first arrry");
    scanf("%d", &n1);
    if (n1 > 20 || n1 <= 0)
    {
        printf("invalid number");
        return 1;
    }
    printf("enter in assending order");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
        printf("number =%d", i + 1);
        printf("\n");
    }
    printf("how many number inter in secound arrry");
    scanf("%d", &n2);
    if (n2 > 20)
    {
        printf("invalid number");
        return 1;
    }
    printf("enter in assending order");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
        printf("number =%d", i + 1);
    
    }
    merge(a, b, c, n1, n2);
    printf("by");
    return 0;
}