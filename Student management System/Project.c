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
                //studentRecord();
                printf("\n\t\t\tPress any key to continue...");
                getch();
                break;
            case 3:
                system("cls");
                //searchStudent();
                printf("\n\t\t\tPress any key to continue...");
                getch();
                break;
            case 4:
                system("cls");
                //deleteRecord();
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

 