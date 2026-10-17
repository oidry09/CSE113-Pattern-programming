#include<stdio.h>
int main (){
int i,j,n,stars;
printf("enter your numbers of rows:");
scanf("%d",&n);
for(i=1;i<=2*n;i++){
    if(i<=n)
        stars=i;
    else
        stars=2*n-i;
    for(j=1;j<=stars;j++)
        printf("*");
    for(j=1;j<=2*(n-stars);j++)
    printf(" ");
        for(j=1;j<=stars;j++)
        printf("*");
    printf("\n");
}
return 0;
}



