#include <stdio.h>
int main(){
     int n;
    printf("terms:");
     scanf("%d",&n);
     int hf=1;
     for(int i=1;i<=n-1;i++){
        if(n%i==0) hf=i;
     }
     printf("highest factor %d",hf);
}
