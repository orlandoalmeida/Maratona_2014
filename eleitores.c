#include <stdio.h>

int main(){

    int n;

    scanf("%d",&n);

    int i,k=0,h;

    for(i=0; i<n; i++){
        scanf("%d",&h);
        if(h > 15 && h < 151) k++;
    }

    printf("%d\n",k);

    return 0;

}
