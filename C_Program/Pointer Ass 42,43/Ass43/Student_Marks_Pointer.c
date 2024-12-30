#include <stdio.h>
#include <stdlib.h>

int student_Marks(int **p, int classes, int student[]) {
    int max = p[0][0]; // Initialize max with the first element
    for (int i = 0; i < classes; i++) {
        for (int j = 0; j < student[i]; j++) {
            if (max < p[i][j]) {
                max = p[i][j];
            }
        }
    }
    return max;
}

int main() {
    int classes;
    printf("Enter the number of classes: ");
    scanf("%d", &classes);

    int *student = (int *)malloc(classes * sizeof(int));
    int **marks = (int **)malloc(classes * sizeof(int *));

    for (int i = 0; i < classes; i++) {
        printf("Enter the number of students in class %d: ", i + 1);
        scanf("%d", &student[i]);

        marks[i] = (int *)malloc(student[i] * sizeof(int));
        printf("Enter marks for class %d: ", i + 1);
        for (int j = 0; j < student[i]; j++) {
            scanf("%d", &marks[i][j]);
        }
    }

    int max_marks = student_Marks(marks, classes, student);
    printf("The highest mark is: %d\n", max_marks);

    // Free allocated memory
    for (int i = 0; i < classes; i++) {
        free(marks[i]);
    }
    free(marks);
    free(student);

    return 0;
}
