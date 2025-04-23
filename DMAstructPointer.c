#include<stdio.h>
#include<stdlib.h>

struct Student{

    char name[30];
    int math,sci,eng;
    float per;
};

int main() {

    struct Student *s;

    s =(struct Student*) malloc(sizeof(struct Student));

    printf("Enter The marks of three subject");
    scanf("%s %d %d %d",s->name,&s->math,&s->sci,&s->eng);

    s->per = (s->math+s->sci+s->eng) / 3.0;

    printf("Name \nMath \nEng \n Sci %s %d %d %d %f",s->name,s->math,s->sci,s->eng,s->per);


    return 0;


}