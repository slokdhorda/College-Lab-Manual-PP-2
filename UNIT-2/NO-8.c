#include <stdio.h>

struct Student {
    int id;
    float marks;
    char grade;
};

int main() {
    struct Student s;

    s.id = 101;
    s.marks = 89.5;
    s.grade = 'A';

    printf("ID: %d\n", s.id);
    printf("Marks: %.2f\n", s.marks);
    printf("Grade: %c\n", s.grade);

    printf("Size of structure: %lu\n", sizeof(s));

    return 0;
}
