#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct info
{
    char fname[1000],lname[1000],uname[1000],password[10],phno[11],country[100],state[100];
}info;
int main()
{
    info s[100];int k=0,l=0,p=1,v;
    while(p)
    {
        printf("New User: --- Enter 1\nOld User: --- Enter 2\n");
        scanf("%d",&v);
        switch(v)
        {
            case 1:
            {
                printf("Enter:---\nFirst Name: ");
                scanf("%s",s[k].fname);
                printf("\nLast Name: ");
                scanf("%s",s[k].lname);
                printf("\nUser Name: ");
                scanf("%s",s[k].uname);
                printf("\nPassword(Upto 8 character): ");
                scanf("%s",s[k].password);
                printf("\nPhone Number: ");
                scanf("%s",s[k].phno);
                printf("\nCountry: ");
                scanf("%s",s[k].country);
                printf("\nState: ");
                scanf("%s",s[k].state);
                k=k+1;
                printf("\nInformations Stored\n");
                break;
            }
            case 2:
            {
                char uname[1000],password[1000];
                printf("\nEnter:---\nUser Name: ");
                scanf("%s",uname);
                printf("\nPassword: ");
                scanf("%s",password);
                if(k==0)
                {
                    printf("Sorry Your username does not exist\nPress 1 to sign up.\n");
                    break;
                }
                for(int i=0;i<=k;i++)
                {
                    if(strcmp(uname,s[i].uname)==0 && strcmp(password,s[i].password)==0)
                    {
                        l=1;
                        break;
                    }
                }
                if(l==1)
                {
                    printf("Logged In");
                    p=0;
                }
                else
                printf("Username or Password is incorrect\nPlease Re-enter OR Press 1 to sign up.\n");
                break;
            }
            default:printf("\nWrong Input!\n");break;
        }
            if(p==0)
            break;
    }
    return 0;
}
