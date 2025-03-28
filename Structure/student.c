#include <stdio.h>

struct student {
    char name[30];
    int roll;
    float marks[3];
    float avg;
};

float avg(float marks[]) {
    float sum = 0;
    for (int i = 0; i < 3; i++)
        sum += marks[i];
    return sum / 3;
}

void main() {
    int i;
    struct student stu[10];
    
    for (i = 0; i < 10; i++) {
        printf("Enter details of the Student: \n");
        printf("Name: ");
        scanf("%s", stu[i].name);
        printf("Roll Number: ");
        scanf("%d", &stu[i].roll);
        for (int y = 0; y < 3; y++) {
            printf("Enter the marks for subject %d: ", y + 1);
            scanf("%f", &stu[i].marks[y]);
        }
        stu[i].avg = avg(stu[i].marks);
    }
    
    printf("\n..................Student Details..................\n");
    for (i = 0; i < 10; i++) {
        printf("Name: %s\n", stu[i].name);
        
        printf("Roll: %d\n", stu[i].roll);
        printf("Marks: ");
        for (int z = 0; z < 3; z++) {
            printf("%.1f ", stu[i].marks[z]);
        }
        printf("\nAverage: %.1f\n", stu[i].avg);
    }
}
