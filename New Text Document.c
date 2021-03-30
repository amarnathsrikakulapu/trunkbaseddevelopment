#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//Structure declaration
struct customer
{
char customer_name[30];
int customer_mno;
char customer_address[50];
int customer_vcall;
int customer_sms;
};struct customer account[100];

FILE *ptr;
void file()
{
ptr=fopen("A:\\file.txt","w");
 fprintf(ptr,"customer_name   ");
 fprintf(ptr,"customer_mno   ");
 fprintf(ptr,"customer_vcall   ");
 fprintf(ptr,"customer_sms\n");
 fclose(ptr);
 }
void display_options(struct customer[],int);
void create_customer(struct customer[],int);
void display_vcalls(struct customer[],int);
void customer_sms(struct customer[],int);
int search(struct customer[], int, int);

//mian fucntion
int main()
{
    struct customer data[20];
    file();
    int n, choice,index,customer_mno;
    printf("Tele System\n\n");
    printf("Number of customer records you want to enter? : ");
    scanf("%d", &n);
    create_customer(data, n);
    do
    {

        printf("\nTele System Menu :\n");
        printf("Press 1 to display all records.\n");
        printf("Press 2 to ask m_no and display the v_calls.\n");
        printf("Press 3 to ask m_no and display the n_sms.\n");
        printf("Press 4 to exit\n");
        printf("\nEnter choice(0-4) : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                display_options(data, n);
                break;
            case 2:
                printf("Enter mobile number to search for no of customer_vcalls : ");
                scanf("%d", &customer_mno);

                if (index ==  - 1)
                {
                    printf("Record not found : ");
                }
                else
                {
                    printf("cutomer_mno: %d \n customer_vcall: %d\n",
                        data[index].customer_mno, data[index].customer_vcall);
                }
                break;
            case 3:
                printf("Enter mobile number to search for no of customer_sms : ");
                scanf("%d", &customer_mno);

                if (index ==  - 1)
                {
                    printf("Record not found : ");
                }
                else
                {
                    printf("customer_mno: %d\n customer_sms: %d\n",
                        data[index].customer_mno, data[index].customer_sms);
                }
                break;
            case 4:
                printf("Exit");

        }
    }
    while (choice != 0);

    return 0;
}
//function to display available options
 void display_options(struct customer list[80],int s)
{
    int i;

    printf("\n\customer_mno\tcustomer_name\tcustomer_vcall\tcustomer_sms\n");
    for (i = 0; i < s; i++)
    {
        printf("%d \t%c \t%d \n", list[i].customer_mno, list[i].customer_name,list[i].customer_vcall, list[i].customer_sms);
    }
}

void create_customer(struct customer list[80],int s)
{
  int i;
    for (i = 0; i < s; i++)
    {
char customer_name[30];
char customer_address[50];
int customer_mno,customer_vcall,customer_sms;
fflush(stdin);
printf("\nEnter data for Record #%d", i + 1);
printf("\nEnter the customer name : ");
scanf("%s", &customer_name);
 fflush(stdin);
printf("\nEnter the customer address : ");
scanf("%s", &customer_address);
 fflush(stdin);
printf("\nEnter the customer mno : ");
scanf("%d", &customer_mno);
 fflush(stdin);
printf("\nEnter the customer  no of vcalls : ");
scanf("%d", &customer_vcall);
 fflush(stdin);
printf("\nEnter the customer no of sms : ");
scanf("%d", &customer_sms);
 fflush(stdin);
  if (ptr == NULL){
    ptr=fopen("A:\\file.txt","w");
    fprintf(ptr,"%c   ",list[i].customer_name);
    fprintf(ptr,"%d   ",list[i].customer_mno);
    fprintf(ptr,"%d   ",list[i].customer_vcall);
    fprintf(ptr,"%d\n",list[i].customer_sms);
   }else {
       ptr=fopen("D:\\file.txt","a");
    fprintf(ptr,"%s   ",list[i].customer_name);
    fprintf(ptr,"%d   ",list[i].customer_mno);
    fprintf(ptr,"%d   ",list[i].customer_vcall);
    fprintf(ptr,"%d\n",list[i].customer_sms);
    fclose(ptr);
}
}}
//fun for vcalls
void display_vcalls (struct customer list[80],int s)
{
int i;
int customer_mno;
printf("\ncustomer_mno\tcustomer_vcalls\n");
for (i=1;i<s;i++)
{
printf("%d \t %d \n",list[i].customer_mno,list[i].customer_vcall);
}
}
void customer_sms(struct customer list[80],int s)
{
int i;
int customer_mno;
printf("\ncustomer_mno\tcustomer_sms\n");
for(i=1;i<s;i++)
{
printf("%d \t %d \n",list[i].customer_mno,list[i].customer_sms);

}
int search(struct customer list[80], int s, int number);
{
    int i,number;
    for (i = 0; i < s; i++)
    {
        if (list[i].customer_mno == number)
        {
            return i;
        }
    }
    return  - 1;
}

}
