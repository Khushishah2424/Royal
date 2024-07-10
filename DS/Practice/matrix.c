// #include<stdio.h>
// int main(){

//     int a[4][4];
//     for(int i = 0 ; i < 4 ; i++){
//         for(int j = 0 ; j < 4 ;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//      for(int i = 0 ; i < 4 ; i++){
//         for(int j = 0 ; j < 4 ;j++){
//             printf(" %d",a[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;

// }
#include<stdio.h>


void scanArray()
{
    int i,a[4][4],j;
    
    for ( i = 0; i <4; i++)
    {
        for ( j = 0; j <4; j++)
        {
            printf("[%d] is connected with [%d] :\t",i,j);
           scanf("%d",&a[i][j]);
        }
    }

}

void printArray()
{
    int i,j,a[4][4];
    printf("\nVALUES:\n");
    for ( i = 0; i <4; i++)
    {
        for ( j = 0; j <4; j++)
        {
           printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

void printConnectedNode(int node)
{
    int i,a[4][4];
    for (i = 0; i < 4; i++)
    {
        if(a[node][i])
        {
            printf("%d",i);
        }
    }
    
  
}
int main()
{
    scanArray();
    printArray();
    printConnectedNode(2);
  
    
    printf("\n");
    return 0;
}