#include<stdio.h>
#include<stdlib.h>
struct students
{
    char name[30];
    int c,cpp,java;
    float per;
};

void add(int std)
{
    int i;
    struct students *s;
    s = malloc(sizeof(struct students));
    for (i = 0; i < std; i++)
    {
        printf("Enter the Name of Students : ");
        scanf("%s",s->name);
        printf("Enter the Marks of C , CPP ,JAVA : \n");
        scanf("%d%d%d",&s->c,&s->cpp,&s->java);

        s->per = (s->c + s->cpp + s->java) /3.0;

    }
    
}

void display(int std)
{
    int i;
    struct students *s;
    s = malloc(sizeof(struct students));
    for ( i = 0; i < std; i++)
    {
        printf("\nNAME = %s\n C = %d\n CPP = %d\n JAVA = %d\n PER = %f",s->name,s->c,s->cpp,s->java,s->per);
    }
    
}
int main()
{
    int std;
    printf("Enter Student you want display :");
    scanf("%d",&std);
    int choice;
    printf("1...ADD\n2...DISPLAY");
    printf("\nEnter Your choice: ");
    scanf("%d",&choice);

    if(choice==1)
    {
        add(std);
    }
    else if(choice==2)
    {
        display(std);
    }
    else
    {
        printf("INVALID");
    }   

    printf("\n"); 
}