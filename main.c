#include<stdio.h>
int main(){
    int n;
    printf("Enter the value: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int first=1;
        for(int j=1;j<n-i-1;j++){
            printf(" ");
        }
        for(int k=i;k<n;k++){
            printf("%d ",first);
            first = first*(i+k)/(k-1)
        }
        printf("\n");
    }
    return 0;
}