#include<stdio.h>
#include<conio.h>
void addstudent();
void studentrecord();
void searchstudent();
void delete();
struct student{
    char first_name[30];
    char last_name[30];
    int roll_no;
    char Class[10];
    char vill[20];
    float per;
};
void main(){
    int choice;
    while (choice!=5){
        printf("\t\t\t======STUDENT DATABASE MANAGEMENT SYSTEM=====");
        printf("\n\n\n\t\t\t\t  1. Add Student Record\n");
        printf("\n\n\n\t\t\t\t  2. Student Records\n");
        printf("\n\n\n\t\t\t\t  3. Search Student\n");
        printf("\n\n\n\t\t\t\t  4. Delete Record\n");
        printf("\n\n\n\t\t\t\t  5. Enit\n");
        printf("\t\t\t\t*****************\n");
        printf("\t\t\t\t  ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
               clrscr();
               addstudent();
               clrscr();
               break;
            case 2:
               clrscr();
               studentrecord();
               printf("\t\t\t\tPress any key to exit\n");
               getch();
               clrscr();
               break;
            case 3:
               clrscr();
               searchstudent();
               printf("\n\t\t\t\tPress any key to exit\n");
               getch();
               clrscr();
               break;
            case 4:
               clrscr();
               delete();
               printf("\n\t\t\t\tPress any key to exit\n");
               getch();
               clrscr();
               break;
            case 5:
               clrscr();
               printf("\n\t\t\t\tThank you, for used this software.\n\n");
               exit(0);
                break;
            default:
                clrscr();
                getch();
                printf("\n\t\t\t\tEnter a valid naumber\n\n");
                printf("\n\t\t\t\tPress any key to continue.......\n");
                getch();
                clrscr();
                break;    

        }
    }
}
void addstudent(){
    char another;
    FILE *fp;
    struct student info;
        do{
            clrscr();
            printf("\t\t\t\t======Add Student info=====\n\n\n");
            fp=fopen("student_info.txt","a");
            printf("\n\t\t\t\tEnter first name : ");
            scanf("%s",&info.first_name);
            printf("\n\t\t\t\tEnter last name : ");
            scanf("%s",&info.last_name);
            printf("\n\t\t\tEnter roll no : ");
            scanf("%d",&info.roll_no);
            printf("\n\t\t\tEnter Class : ");
            scanf("%d",&info.Class);
            printf("\n\t\t\tEnter address : ");
            scanf("%d",&info.vill);
            printf("\n\t\t\tEnter percentage : ");
            scanf("%d",&info.per);
            printf("\n\t\t\t----------------------------\n");
            if(fp==NULL){
                fprintf(stderr,"\t\t\tCan't open file\n");

            }else{
                printf("\t\t\tRecord stored successfuly\n");
            }
            fwrite(&info,sizeof(struct student),1,fp);
            fclose(fp);
            printf("\t\t\tDo you want to add another record?(y/n) : ");
            scanf("%s",&another);

        }while(another=='y'||another=='Y');
        
}