#include <stdio.h>
#include <string.h>

typedef struct {
    int studentId;
    int number;
    char name[50];
    float grade;
    char subject[30];
} Student;

void printStudent(Student *s) {
    printf("ID: %d\n", s->studentId);
    printf("番号: %d\n", s->number);
    printf("名前: %s\n", s->name);
    printf("成績: %.1f\n", s->grade);
    printf("好きな科目: %s\n\n", s->subject);
}

int main() {
    Student student1;
    Student student2;
    Student student3;

    student1.studentId = 2539;
    student1.number = 238;
    strcpy(student1.name, "Hiroyuki");
    student1.grade = 100.0;
    strcpy(student1.subject, "Math");

    student2.studentId = 2544;
    student2.number = 243;
    strcpy(student2.name, "Wakana");
    student2.grade = 100.0;
    strcpy(student2.subject, "English");

    student3.studentId = 2545;
    student3.number = 244;
    strcpy(student3.name, "Betsunosekinohito");
    student3.grade = 100.0;
    strcpy(student3.subject, "Science");

    Student students[] = {student1, student2, student3};

    int size = sizeof(students) / sizeof(students[0]);

    for (int i = 0; i < size; i++) {
        printStudent(&students[i]);
    }

    return 0;
}
