#include<stdio.h>
struct Edge
{
   int src;
   int desti;
};
int main(){
    int totalEdge,i;
    int s,d;

    struct Edge e[10];
    printf("Howmany Eges you want : ");
    scanf("%d",&totalEdge);
    for(int i = 0 ; i < totalEdge*2 ;i++){
        printf("Enter Source and Destination : ");
        scanf("%d%d",&s,&d);

        e[i].src = s;
        e[i].desti = d;
        i++;
         e[i].src = d;
        e[i].desti = s;

    }
    for(i = 0 ; i < totalEdge*2 ;i++){
        printf("\n%d is connected with %d",e[i].src, e[i].desti);
    }

}
