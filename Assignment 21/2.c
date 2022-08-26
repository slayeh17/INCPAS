#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Employee
{
    int id;
    char name[100];
    float salary;
}Employee;
void store_data()
{
    Employee data;
    printf("Enter ID: ");
    scanf("%d",&data.id);
    fflush(stdin);
    printf("Enter name: ");
    scanf("%[^\n]",data.name);
    printf("Enter salary: ");
    scanf("%f",data.salary);
}
int main()
{
    store_data();
    return 0;
}