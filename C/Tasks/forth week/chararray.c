#include <stdio.h>
int main()
{
    long int id[2];
    char name[2][20];
    char address[2][20];
    long long int contract[2];
    char email_id[2][25];
    
    for (int i = 0; i <2 ;i++)
    {
        printf("Please enter id : ");
        scanf("%ld",&id[i]);
        printf("Please enter name : ");
        scanf(" %[^\n]",&name[i]);
        printf("Please enter adress : ");
        scanf(" %[^\n]",&address[i]);
        printf("Please enter contract no. : ");
        scanf("%lld",&contract[i]);
        printf("Please enter email_id : ");
        scanf(" %[^\n]",&email_id[i]);
        printf("\n");
    }
    for (int i = 0; i <2 ;i++)
    {
        printf("id : %d",id[i]);
        printf("\t\tname :%s ",name[i]);
        printf("\t\taddress :%s ",address[i]);
        printf("\t\tcontract no :%d ",contract[i]);
        printf("\t\temail_id :%s ",email_id);
        printf("\n");
    }
    
    



    return 0;
}