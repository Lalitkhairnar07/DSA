#include <stdio.h>

struct Student
{
    char studentName[50];
    int math;
    int sci;
    int eng;
    float percentage;
};

void addStudent()
{   
    struct Student t[30];
    for (int i = 0; i < 2; i++)
    {
        printf("Enter the Name: ");
        scanf("%s", t[i].studentName);

        printf("Enter Math marks: ");
        scanf("%d", &t[i].math);

        printf("Enter Science marks: ");
        scanf("%d", &t[i].sci);

        printf("Enter English marks: ");
        scanf("%d", &t[i].eng);

        t[i].percentage = (t[i].math + t[i].sci + t[i].eng) / 3;
    }
}

void display()
{

    struct Student t[30];
    for (int i = 0; i < 2; i++)
    {
        printf("Name       : %s\n", t[i].studentName);
        printf("Math       : %d\n", t[i].math);
        printf("Science    : %d\n", t[i].sci);
        printf("English    : %d\n", t[i].eng);
        printf("Percentage : %f\n", t[i].percentage);
    }
}

int main()
{
    // struct Student s;

    // printf("Enter the Name: ");
    // scanf("%s", s.studentName);

    // printf("Enter Math marks: ");
    // scanf("%d", &s.math);

    // printf("Enter Science marks: ");
    // scanf("%d", &s.sci);

    // printf("Enter English marks: ");
    // scanf("%d", &s.eng);

    // s.percentage = (s.math + s.sci + s.eng) / 3.0;

    // printf("\n--- Student Details ---\n");
    // printf("Name       : %s\n", s.studentName);
    // printf("Math       : %d\n", s.math);
    // printf("Science    : %d\n", s.sci);
    // printf("English    : %d\n", s.eng);
    // printf("Percentage : %.2f%%\n", s.percentage);

    // struct Student t[30];

    // for (int i = 0; i < 2; i++)
    // {
    //     printf("Enter the Name: ");
    //     scanf("%s", t[i].studentName);

    //     printf("Enter Math marks: ");
    //     scanf("%d", &t[i].math);

    //     printf("Enter Science marks: ");
    //     scanf("%d", &t[i].sci);

    //     printf("Enter English marks: ");
    //     scanf("%d", &t[i].eng);

    //     t[i].percentage = (t[i].math + t[i].sci + t[i].eng) / 3;
    // }
    // for (int i = 0; i < 2; i++)
    // {
    //     printf("Name       : %s\n", t[i].studentName);
    //     printf("Math       : %d\n", t[i].math);
    //     printf("Science    : %d\n", t[i].sci);
    //     printf("English    : %d\n", t[i].eng);
    //     printf("Percentage : %f\n", t[i].percentage);
    // }

    int choice;

    while (1)
    {

        printf("\n1) addStudent : ");
        printf("\n2) diplay");
        printf("\n0 exit");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent();
            break;

        case 2:
            display();
            break;

        case 0:
            return 0;
        }
    }
}
