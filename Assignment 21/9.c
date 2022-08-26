#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student
{
    int roll;
    char name[100];
    int class;
    char sec;
}student;
student store_data(student data)
{
    printf("Enter Roll No.: ");
    scanf("%d",&data.roll);
    fflush(stdin);
    printf("Enter Name: ");
    scanf("%[^\n]",data.name);
    printf("Enter Class: ");
    scanf("%d",&data.class);
    fflush(stdin);
    printf("Enter the section: ");
    scanf("%c",&data.sec);
    return data;
}
void display(student data[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Name: %s\n",data[i].name);
        printf("Roll Number: %d\n",data[i].roll);
        printf("Class: %d\n",data[i].class);
        printf("Section: %c\n",data[i].sec);
    }
}
int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    student data[n];
    for(int i=0;i<n;i++)
    {
        printf("Student %d:\n",i+1);
        data[i]=store_data(data[i]);
    }
    display(data,n);
    return 0;
}