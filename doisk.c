#include <stdio.h>
#include <stdlib.h>

int main(){

    int mat[4][4];
    char C;
    int i,j=0;
    for(i=0; i<4; i++){
            printf("%d %d\n",i,j);
            scanf("%d ",&mat[i][0]);
            scanf("%d ",&mat[i][1]);
            scanf("%d ",&mat[i][2]);
            scanf("%d",&mat[i][3]);

            fflush(stdin);

    }

    scanf("%c",&C);

        switch(C){
            case 'C':

            break;
            case 'B':
            break;
            case 'E':

            break;
            case 'D':

            break;

    }

    for(i=0; i<4; i++){
        for(j=0; j<4; j++)
            printf("%d\n",mat[i][j]);
        printf("\n");
    }

}
