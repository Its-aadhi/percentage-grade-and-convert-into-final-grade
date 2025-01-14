# percentage-grade-and-convert-into-final-grade
A C program that will ask the user to enter their percentage grade for each test then use the entered values to calculate their final grade

Test-1: 20%
Test-2: 30%
Test-3: 50%

    #include <stdio.h>

    int main (void)
    {
    int grade1 = 0;
    int grade2 = 0;
    int grade3 = 0;
    float finalGrade = 0;

    printf("Please enter the grade of the first test out of 50: ");
    scanf("%d", &grade1);
    printf("Please enter the grade of the second test out of 50: ");
    scanf("%d", &grade2);
    printf("Please enter the grade of the third test out of 50: ");
    scanf("%d", &grade3);

    finalGrade = ((grade1 / 50.0) * 0.20) + ((grade2 / 50.0) * 0.30) + ((grade3 / 50.0) * 0.50);
    finalGrade *= 100;
    printf("The final grade is: %.2f\n", finalGrade);
    return 0;
    }

**Sample Run:**

    Please enter the percentage grade of the first test: 90.3
    Please enter the percentage grade of the second test: 22.7
    Please enter the percentage grade of the third test: 60.3
    The final grade is: 55.02 %
