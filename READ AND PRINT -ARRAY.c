
#include <stdio.h>

int main()
{
    int n1=6,n2=6,n3=6;
    int a1[n1];
    float a2[n2];
    char a3[n3];
    printf("MR.INT ENTER THE DAILY WAGES FORM MONDAY TO SATURDAY: ");
    for(int i=0;i<n1;i++)
    {
      
      scanf("%d",&a1[i]);
    }
    printf("MR.FLOAT ENTER THE DAILY WAGES FORM MONDAY TO SATURDAY: ");
      for(int i=0;i<n2;i++)
    {
      scanf("%f",&a2[i]);
    }
     printf("MR.CHAR ENTER A WAY TO REMENMER THE DAYS FROM MONDAY TO SATURDAY: ");
     for(int i=0;i<n3*2;i++)
    {
      scanf("%c",&a3[i]);
    }
    printf("\nMR.INT'S DAILY WAGES FORM MONDAY TO SATURDAY IS: \n");
    for(int i=0;i<n1;i++)
    {
      printf("%d ",a1[i]);
    }
    printf("\nMR.FLOATS'S DAILY WAGES FORM MONDAY TO SATURDAY IS: \n");
     for(int i=0;i<n2;i++)
    {
      printf("%0.3f ",a2[i]);
    }
    printf("\nMR.CHARS WAY TO REMENMER THE DAYS FROM MONDAY TO SATURDAY IS: \n");
     for(int i=0;i<n3*2;i++)
    {
      printf("%c ",a3[i]);
    }
      printf("\nMR.INT'S DAILY WAGES FORM SATURDAY TO MONDAY IS: \n");
    for(int i=n1-1;i>=0;i--)
    {
      printf("%d ",a1[i]);
    }
    printf("\nMR.FLOATS'S DAILY WAGES FORM SATURDAY TO MONDAY IS: \n");
     for(int i=n2-1;i>=0;i--)
    {
      printf("%0.3f ",a2[i]);
    }
    printf("\nMR.CHARS WAY TO REMENMER THE DAYS FROM SATURDAY TO MONDAY IS: \n");
     for(int i=(n3*2)-1;i>=0;i--)
    {
      printf("%c ",a3[i]);
    }
    
    

    return 0;
}
