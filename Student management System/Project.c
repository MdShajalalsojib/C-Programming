  #include<stdio.h>
#include<stdlib.h>
#include<conio.h>

// Function prototypes
void addStudent();
void studentRecord();
void searchStudent();
void deleteRecord();

// Structure definition
struct student {
    char first_name[30];
    char last_name[30];
    int roll_no;
    char Class[10];
    char vill[20];
    float per;
};

void main() {
    int choice = 0;
    while (choice != 5) {
        system("cls"); // Clear screen
        printf("\t\t\t====== STUDENT DATABASE MANAGEMENT SYSTEM =====\n");
        printf("\n\t\t\t\t1. Add Student Record\n");
        printf("\t\t\t\t2. Student Records\n");
        printf("\t\t\t\t3. Search Student\n");
        printf("\t\t\t\t4. Delete Record\n");
        printf("\t\t\t\t5. Exit\n");
        printf("\t\t\t\t=====================\n");
        printf("\t\t\t\tEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                system("cls");
                addStudent();
                break;
            case 2:
                system("cls");
                studentRecord();
                printf("\n\t\t\tPress any key to continue...");
                getch();
                break;
            case 3:
                system("cls");
                searchStudent();
                printf("\n\t\t\tPress any key to continue...");
                getch();
                break;
            case 4:
                system("cls");
                deleteRecord();
                printf("\n\t\t\tPress any key to continue...");
                getch();
                break;
            case 5:
                system("cls");
                printf("\n\t\t\tThank you for using this software.\n\n");
                exit(0);
                break;
            default:
                printf("\n\t\t\tInvalid choice! Please try again.\n");
                printf("\t\t\tPress any key to continue...");
                getch();
                break;
        }
    }
}

void addStudent() {
    char another;
    FILE *fp;
    struct student info;

    do {
        system("cls");
        printf("\t\t\t====== Add Student Info =====\n\n");
        fp = fopen("student_info.dat", "ab");
        if (fp == NULL) {
            fprintf(stderr, "Error opening file.\n");
            return;
        }

        printf("\n\tEnter First Name: ");
        scanf("%29s", info.first_name);
        printf("\n\tEnter Last Name: ");
        scanf("%29s", info.last_name);
        printf("\n\tEnter Roll No: ");
        scanf("%d", &info.roll_no);
        printf("\n\tEnter Class: ");
        scanf("%9s", info.Class);
        printf("\n\tEnter Address: ");
        scanf("%19s", info.vill);
        printf("\n\tEnter Percentage: ");
        scanf("%f", &info.per);

        fwrite(&info, sizeof(struct student), 1, fp);
        fclose(fp);

        printf("\n\tRecord stored successfully!\n");
        printf("\n\tDo you want to add another record? (y/n): ");
        scanf(" %c", &another);

    } while (another == 'y' || another == 'Y');
}
void studentRecord(){
    FILE *fp;
    struct student info;
    fp=fopen("Student_info.txt","r");
    printf("\t\t\t\t======Student Records========\n\n\n");
    if(fp==NULL){
        fprintf(stderr,"\t\t\t\tCan't open file\n");
    }
    else{
        printf("\t\t\t\tRecords\n");
        printf("\t\t\t\t------------\n\n\n");
    }
    while(fread(&info,sizeof(struct student),1,fp)){
        printf("\n\t\t\t\tStudent name   : %s %s",info.first_name,info.last_name);
        printf("\n\t\t\t\tRoll no        :%d",info.roll_no);
        printf("\n\t\t\t\tClass          :%s",info.Class);
        printf("\n\t\t\t\tAddress        :%s",info.vill);
        printf("\n\t\t\t\tPercentage     :%f",info.per);
        printf("\n\t\t\t\t------------------------------------\n");
    }
    fclose(fp);
    getch();
}
void searchStudent(){
    FILE *fp;
    struct student info;
    int roll_no,found=0;
    fp=fopen("student_info","r");
    printf("\t\t\t\t======== Search Student =======\n\n\n");
    printf("\t\t\tEnter roll no :");
    scanf("%d",&roll_no);
      while(fread(&info,sizeof(struct student),1,fp)){
        printf("\n\t\t\t\t\tStudent Name     : %s %s",info.first_name,info.last_name);
        printf("\n\t\t\t\t\tRoll No          : %d",info.roll_no);
        printf("\n\t\t\t\t\tClass            : %s",info.Class);
        printf("\n\t\t\t\t\tAddress          :%s",info.vill);
        printf("\n\t\t\t\t\tPercentage       :%f",info.per);

      }
      if(!found){
        printf("\t\t\tRecord not found.");
      }
      fclose(fp);
      getch();
}
void deleteRecord(){
    FILE *fp,*fp1;
    struct student info;
    int roll_no,found=0;
    printf("\t\t\t\t\t\t==========Delete Search Student Record ==========\n\n\n\n");
    fp=fopent("Student_info","r");
    fp=fopen("temp.txt","w");
    printf("\t\t\t\t\tEnter roll no  : ");
    scanf("%d",roll_no);

    if(fp==NULL){
        fprintf(stderr,"\t\t\t\t Can't open file\n");

    }
    while(fread(&info,sizeof(struct student),1,fp))
    {
        fi(info.roll_no==roll_no)
        {
                found=1;
        }
             
        
        else{
            fwrite(&info,sizefo(struct student),1,fp1);
        }
    }
    fclose(fp);
    fclose(fp1);
       if(found){
        remove("Student_info");
        rename("temp.txt","student_info");
        printf("\n\t\t\t\tRecord deleted successfully\n");
       }
       if(!found){
        printf("\n\t\t\t\tRecord not found\n");
       }
       getch();
    
}

 