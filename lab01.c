#include<stdio.h>
 int main(){
int i,j,n;
printf("enter your column and row");

scanf("%d",&n);
// nested loop
for(i=0;i<n;i++){
    for(j=0;j<=i;j++){
        printf("*");
}
printf("\n");

}
return 0;
 }
