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
void highest_salary(Employee data[],int n)
{
    float max=data[0].salary;
    int pos=0;
    for(int i=0;i<n;i++)
    {
        if(data[i].salary>max)
        {
            max=data[i].salary;
            pos=i;
        }
    }
    printf("%s ID: %d has the highest salary of %f",data[pos].name,data[pos].id,data[pos].salary);
}
int main()
{
    int n=10;
    Employee data[n];
    for(int i=0;i<n;i++)
    {
        printf("Employee %d:\n",i+1);
        data[i]=store_data(data[i]);
    }
    highest_salary(data,n);
    return 0;
}