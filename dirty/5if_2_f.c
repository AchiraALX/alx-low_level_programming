#include "head.h"

/**
 * failing_grades - calculates the averages of a set of grades
 * and count the number of failing grades
 * 
 * @n: total number of grades
 * 
 * Return: number of failing grades
*/

int failing_grades(int numberOfGrades)
{
        int i, grade, gradeTotal, failure_count;
        float average;

        failure_count = 0;
        gradeTotal = 0;

        for (i = 1; i <= numberOfGrades; ++i)
        {
                printf("Enter grade #%i\n", i);
                scanf("%i", &grade);

                gradeTotal += grade;

                if (grade < 65)
                {
                        failure_count++;
                }

        }

        average = (float)gradeTotal / numberOfGrades;

        printf("Grade average is %.2f\n", average);
        printf("Failing grades are %i", failure_count);

        return (0);
}