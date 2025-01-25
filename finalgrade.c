
    #include <stdio.h>
    int main(void)

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

