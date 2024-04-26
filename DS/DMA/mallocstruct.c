#include<stdio.h>
#include<stdlib.h>
struct Student
{
    char name[20];
    int c,cpp,java;
    float per;
};
int main(){
    struct Student *s;
    s = malloc(sizeof(int));
    printf("\nEnter name :");
    scanf("%s",&s->name);
    printf("\nEnter marks of C , CPP and JAVA :\n");
    scanf("%d%d%d",&s->c,&s->cpp,&s->java);
    s->per = (s->c + s->cpp + s->java)/3.0;
    printf("Name = %s,  C = %d , CPP = %d , JAVA = %d , PER = %f",s->name,s->c,s->cpp,s->java,s->per);
}


