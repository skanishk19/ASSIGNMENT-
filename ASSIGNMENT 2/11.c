#include <stdio.h>
struct stude_Details
{
    int roll_no;
    char name[20];
    float marks;
};
int main()
{
    struct stude_Details s1[100];
    int i, size;
    printf("Enter the size\n");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("\nEnter the roll no\n");
        scanf("%d", &s1[i].roll_no);
        printf("\nEnter the name\n");
        scanf("%s", &s1[i].name);
        printf("\nEnter the marks\n");
        scanf("%f", &s1[i].marks);
    }
    for (i = 0; i < size; i++)
    {
        printf("\nRoll no = %d\nName = %s\nMarks = %f", s1[i].roll_no, s1[i].name, s1[i].marks);
    }
    return 0;
}
