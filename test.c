#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void seq(int);
void main()
{
    int m;
    printf("m= ");
    scanf("%d",&m);
    printf("Numbers are ");
    int b[m];
    for (int i = 0; i <m; i++)
    {
        scanf("%d",&b[i]);
        printf("%d, ",b[i]);
        seq(b[i]);
    }  
    printf("\n"); 
}
void seq(int n){
    int i=0,t,a[50];
    while(n!=0){
t=n%10;
n /=10;
a[i]=t;
i++;
    }
    int k_seq=0;
    for(int j=i;j>0;j--){
        if(a[j]<=a[j-1]){
          k_seq++;
        }
        
    }
    printf("k_sequence is %d\n",k_seq );
}