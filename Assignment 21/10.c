#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Marks
{
    int roll_no;
    char name[100];
    float chem_marks,math_marks,phy_marks;
}Marks;
Marks insert(Marks s)
{
    printf("Enter Roll Number: ");
    scanf("%d",&s.roll_no);
    fflush(stdin);
    printf("Enter Name: ");
    scanf("%[^\n]",s.name);
    printf("Enter Chemistry Marks: ");
    scanf("%f",&s.chem_marks);
    printf("Enter Maths Marks: ");
    scanf("%f",&s.math_marks);
    printf("Enter Physics Marks: ");
    scanf("%f",&s.phy_marks);
    return s;
}
void percentage(Marks s)
{
    float p=((s.chem_marks+s.math_marks+s.phy_marks)/300)*100;
    printf("Name: %s\nRoll No.: %d\nPercentage: %.2f%%\n",s.name,s.roll_no,p);
}
int main()
{
    int n=10;
    Marks s[n];
    for(int i=0;i<n;i++)
    {
        printf("\nStudent: %d\n",i+1);
        s[i]=insert(s[i]);
    }
    for(int i=0;i<n;i++)
    {
        percentage(s[i]);
    }
    return 0;
}