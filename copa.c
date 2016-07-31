#include <stdio.h>

int main(){

    int n,r;


    scanf("%d %d",&n,&r);

    int mat[n][n];



    int i, j, v;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            mat[i][j] = -1;
        }
    }

    while(r-->0){
        scanf("%d %d",&i,&j);
        scanf("%d",&mat[i-1][j-1]);
    }

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    int menorc=1001,aux,aux2,valor_t=0;
    aux2=aux=n-1;

    for(j=0; j<n; j++){
        menorc=1001;
        printf("\n%d\n",valor_t);
        for(i=n-1; i>=0; i--){
            if(mat[i][aux]!=-1){
                printf("mat[%d][%d]= %d\n",i,aux,mat[i][aux]);
                if(mat[i][aux] < menorc){
                    printf("[%d] vai para [%d] custo: ",aux+1,i+1);
                    menorc = mat[i][aux2];
                    aux2=i;
                    printf("%d\n",menorc);

                }
            }

        }
                    if(menorc<1001) { valor_t+=menorc; aux = aux2;}

    }

    printf("%d",valor_t);

    return 0;




}
