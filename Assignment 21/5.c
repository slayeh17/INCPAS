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
void sort_salary(Employee data[],int n)
{
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        Employee cur=data[i];
        while(j>=0 && data[j].salary>cur.salary)
        {
            data[j+1]=data[j];
            j--;
        }
        data[j+1]=cur;
    }
}
void display(Employee data[],int n)
{
    for(int i=0;i<n;i++)
    printf("\nEmployee %d data:\nID: %d\nName: %s\nSalary: %f",i+1,data[i].id,data[i].name,data[i].salary);
}
int main()
{
    int n;
    printf("Enter the number of employees: ");
    scanf("%d",&n);
    Employee data[n];
    for(int i=0;i<n;i++)
    {
        printf("Employee %d:\n",i+1);
        data[i]=store_data(data[i]);
    }
    sort_salary(data,n);
    display(data,n);
    return 0;
}