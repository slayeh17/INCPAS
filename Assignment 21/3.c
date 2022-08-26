#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Employee
{
    int id;
    char name[100];
    float salary;
}Employee;
Employee store_data(Employee data)
{
    printf("Enter ID: ");
    scanf("%d",&data.id);
    fflush(stdin);
    printf("Enter name: ");
    scanf("%[^\n]",data.name);
    printf("Enter salary: ");
    scanf("%f",&data.salary);
    return data;
}
void display(Employee data)
{
    printf("ID: %d\nName: %s\nSalary: %f",data.id,data.name,data.salary);
}
int main()
{
    Employee data;
    data=store_data(data);
    display(data);
    return 0;
}