#include <stdio.h>

int main(){
    int px,py,pz,c;
    scanf("%d %d %d %d",&px,&py,&pz,&c);

    if((px - c <= py && px + c >= py)  && (px - c <= pz && px + c >= pz) && (py-c <= pz && py +c >= pz)){
        printf("1\n");
    } else printf("0\n");

    return 0;

}
