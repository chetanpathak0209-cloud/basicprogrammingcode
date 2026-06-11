#include<stdio.h>
int main(){
    int m,n;
    printf("enter the rows: ");
    scanf("%d",&n);
    printf("enter the column: ");
    scanf("%d",&m);

    for(int i=1;i<=n;i++){
        for(int i=1;i<=m;i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
