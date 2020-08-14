// Swapping two numbers using pointers or Functions
#include <stdio.h>
void swap(int *,int *);
int main()
{
   int x, y, *a, *b, temp;
 
   printf("Enter the values of x & y:\n ");
   scanf("%d%d", &x, &y);
 
   printf("\nBefore Swapping\nx = %d  y = %d", x, y);
   a = &x;   b = &y;
 
   //Uisng pointer
   temp = *b;   *b = *a;   *a = temp;
 
   printf("\nAfter Swapping using pointers:\nx= %d    y=%d" ,x,y );
     
   //Using function
   swap(&x,&y);
   printf("\nAfter Swapping using function: \nx = %d y = %d\n", x, y);
   

   return 0;
}

void swap(int *p,int *q)
{
    int tmp;
    tmp = *p; 
    *p=*q;    
    *q=tmp;   
}
