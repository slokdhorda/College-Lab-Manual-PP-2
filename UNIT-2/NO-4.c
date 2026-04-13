
#include <stdio.h>
#include <string.h>

struct Student {
    int Rollno;
    char Name[20];
    char Department[40];
    int Year_of_joining;
    float Score;
};

int main() {
    int n, i, j;
    struct Student temp;

    scanf("%d", &n);

    struct Student s[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &s[i].Rollno);
        scanf("%s", s[i].Name);
        scanf("%s", s[i].Department);
        scanf("%d", &s[i].Year_of_joining);
        scanf("%f", &s[i].Score);
    }

    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(s[j].Score < s[j + 1].Score) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    for(i = 0; i < n; i++) {
        printf("%d %s %s %d %.2f\n",
               s[i].Rollno,
               s[i].Name,
               s[i].Department,
               s[i].Year_of_joining,
               s[i].Score);
    }

    return 0;
}
