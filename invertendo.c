#include <stdio.h>
#include <stdlib.h>

int main(){

    char a[121];
    char b[121];
    gets(&a);
    int i,c,d,e;
    for(i=0; i<strlen(a); i++){
        e=0;
        while(a[i]!=' ' && a[i]!='\0' && a[i]!='.' && a[i]!=','&& a[i]!=';'&& a[i]!='!'&& a[i]!='?'){
            b[e++]=a[i++];
        }
        b[e]='\0';
        for(c=strlen(b)-1; c>=0; c--)
            printf("%c",b[c]);
        if(a[i]!='\0'){
            if(a[i]==' ')
                printf(" ");
            else
            if(a[i]=='.')
                printf(".");
            else
            if(a[i]==',')
                printf(",");
            else
            if(a[i]==';')
                printf(";");
            else
            if(a[i]=='!')
                printf("!");
            else
            if(a[i]=='?')
                printf("?");
        }
    }
    printf("\n");
    return 0;
}
