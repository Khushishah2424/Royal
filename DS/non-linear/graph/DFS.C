#include<stdio.h>
struct Edge
{
    int src;
    int dest;
};
int main(){
    struct Edge e[8];
    int start;
    int s,d,i;
    int visied[] = {0,0,0,0};

    for(i = 0 ; i < 8 ; i++){
        printf("SRC - DEST\n");
        scanf("%d%d",&e[i].src,&e[i].dest);
        e[i].src = s;
        e[i].dest = d;
        i++;
        e[i].src = d;
        e[i].dest = s;

    }

    printf("Enter Initial Vertex :");
    scanf("%d",&start);
    printf("\n%d",start);
    visied[start] = 1;
    for(i = 0 ; i < 8 ; i++){

        if(e[i].src == start && visied[e[i].dest] == 0){
            printf("%d",e[i].dest);
            start = e[i].dest;
            visied[start] = 1;
        }
    }   
}
