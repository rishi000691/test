#include <stdio.h>

int main() {
    int marks[50];
    int no_of_students;

    printf("\nEnter the number of students: ");
    scanf("%d", &no_of_students);

    printf("\nEnter student marks here:\n");
    for (int i = 0; i < no_of_students; i++) {
        printf("\nEnter student %d mark: ", i + 1);
        scanf("%d", &marks[i]);
    }

    return 0;
}
