#include <stdio.h>
#include <string.h>

struct student {
    int rollno;
    char name[20];
    char department[40];
    int year_of_joining;
    float score;
};

void printAboveFive(struct student s[], int n) {
    int i;
    printf("\nStudents with score greater than 5.0:\n");
    for(i = 0; i < n; i++) {
        if(s[i].score > 5.0) {
            printf("%s\n", s[i].name);
        }
    }
}

int main() {
    struct student s[5], temp;
    int i, j;

    for(i = 0; i < 5; i++) {
        printf("Enter Roll, Name, Dept, Year, Score for student %d:\n", i+1);
        scanf("%d %s %s %d %f", &s[i].rollno, s[i].name, s[i].department, &s[i].year_of_joining, &s[i].score);
    }

    for(i = 0; i < 5; i++) {
        for(j = i + 1; j < 5; j++) {
            if(strcmp(s[i].name, s[j].name) > 0) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\n %-15s %-10s %-15s %-10s\n", "NAME", "ROLL NO", "DEPT", "SCORE");
    printf("------------------------------------------------------------\n");

    for(i = 0; i < 5; i++) {
        printf("%-15s %-10d %-15s %-10.2f\n", s[i].name, s[i].rollno, s[i].department, s[i].score);
    }

    printAboveFive(s, 5);

    return 0;
}
