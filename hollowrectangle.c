#include<stdio.h>
int main(){
    int n;
    int m;
    printf("no of rows: ");
    printf("no of colmns: ");
    scanf("%d %d",&n,&m);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==1 || i==n || j==1 || j==m)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}