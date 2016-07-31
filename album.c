#include<stdio.h>
#include <stdbool.h>
int main()
{

int i, n,fa,ra,fb,rb;
scanf("%d %d %d %d %d", &n,&fa,&ra,&fb,&rb);

int ta[fa],r1[ra], tb[fb], r2[rb];

for (i=0; i <fa; i++)
{
    scanf("%d", &ta[i]);
}

for (i=0; i <ra; i++)
{
    scanf("%d", &r1[i]);
}

for (i=0; i <fb; i++)
{
    scanf("%d", &tb[i]);
}

for (i=0; i <rb; i++)
{
    scanf("%d", &r2[i]);
}

int j,k,l,troca=0;
int tena=rb,tenb=ra;


bool btem=false,atem=false;
    //figurinhas do albtero, nas repitidas do bruno)

        if(n>=10 && n<=1000){
            for(i=0; i<rb; i++){
                for(j=0; j<fa; j++){
                    if(r2[i]==ta[j]){
                        i++;
                        tena--;
                    }
                }
            }
            for(k=0; k<ra; k++){
                for(l=0; l<fb; l++){
                    if(r1[k]==tb[l]){
                        k++;
                        tenb--;
                    }
                }
            }
        }
        printf("%d\n",tenb < tena?tenb:tena);
return 0;
}
