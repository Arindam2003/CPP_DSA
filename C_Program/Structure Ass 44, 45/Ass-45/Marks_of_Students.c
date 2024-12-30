#include <stdio.h>
#include<string.h>
struct marks
{
    int roll;
    char name[20];
    int chem_marks;
    int math_marks;
    int phy_marks;
};

struct marks input()
{
    struct marks m;
    printf("Enter Your Name: ");
    fflush(stdin);
    fgets(m.name, 20, stdin);
    m.name[strlen(m.name)-1]='\0';
    printf("Enter Roll no.-");
    scanf("%d", &m.roll);
    printf("Enter Mathematics Marks-");
    scanf("%d", &m.math_marks);
    printf("Enter Chemistry Marks-");
    scanf("%d", &m.chem_marks);
    printf("Enter Physics Marks-");
    scanf("%d", &m.phy_marks);
    return m;
}
float display(struct marks m)
{
    printf("\nName is %s", m.name);
    printf("\nRoll-%d", m.roll);
    printf("\nMath Marks-%d", m.math_marks);
    printf("\nPhysics Marks-%d", m.phy_marks);
    printf("\nChem Marks-%d", m.chem_marks);
    printf("\nPersentage-%f",((m.chem_marks+m.math_marks+m.phy_marks)/300)*100);
}
void inputNstudent(struct marks m[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        m[i] = input();
        printf("\n");
    }
}
void displayNstudent(struct marks m[], int n)
{
    int i;
    printf("\n ------------------------\n");
    for (i = 0; i < n; i++)
    {
        display(m[i]);
    }
}
int main()
{
    struct marks m[5];
    inputNstudent(m, 5);
    displayNstudent(m, 5);
}
