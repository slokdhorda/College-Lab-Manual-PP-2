
#include <stdio.h>

struct student {
    int rollno;
    char name[20];
    char department[40];
    int year_of_joining;
    float score;
};

int main() {

    struct student s[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].rollno);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Department: ");
        scanf("%s", s[i].department);

        printf("Year of Joining: ");
        scanf("%d", &s[i].year_of_joining);

        printf("Score: ");
        scanf("%f", &s[i].score);
    }

    printf("\n--- Student Records ---\n");
    for(i = 0; i < 5; i++) {
        printf("\nStudent %d: Roll No: %d, Name: %s, Dept: %s, Year: %d, Score: %.2f",
               i + 1, s[i].rollno, s[i].name, s[i].department, s[i].year_of_joining, s[i].score);
    }

    return 0;
}
