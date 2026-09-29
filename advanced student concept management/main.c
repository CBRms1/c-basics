#include <stdio.h>

#define STUDENTS 3
#define CONCEPTS 3

int main()
{
    int action = 4;
    double concept_matrix[STUDENTS][CONCEPTS] = {0};

    printf("ANALYSIS OF STUDENT GRADES\n");
    printf("\n");

    while (action != 0)
    {
        printf("Type 1, 2 or 3 to change the student grade\n");
        printf("Type 0 to exit and 9 to display student analysis\n");
        scanf("%d", &action);
        printf("\n");

        switch (action)
        {
        case 1:
            for (int i = 0; i < CONCEPTS; i++)
            {
                printf("Type the concept %d: ", (i + 1));
                scanf("%lf", &concept_matrix[0][i]);
            }
            printf("\n");
            break;
        case 2:
            for (int i = 0; i < CONCEPTS; i++)
            {
                printf("Type the concept %d: ", (i + 1));
                scanf("%lf", &concept_matrix[1][i]);
            }
            printf("\n");
            break;
        case 3:
            for (int i = 0; i < CONCEPTS; i++)
            {
                printf("Type the concept %d: \n", (i + 1));
                scanf("%lf", &concept_matrix[2][i]);
            }
            printf("\n");
            break;
        case 9:
            printf("Grade: \n");
            for (int s = 0; s < STUDENTS; s++)
            {
                printf("Student %d: ", s);
                for (int c = 0; c < CONCEPTS; c++)
                {
                    printf("%lf; ", concept_matrix[s][c]);
                }
                printf("\n");
            }
            printf("\n");

            printf("Average: \n");
            for (int s = 0; s < STUDENTS; s++)
            {
                double average = 0;
                for (int c = 0; c < CONCEPTS; c++)
                {
                    average += concept_matrix[s][c];
                }
                average /= CONCEPTS;
                printf("Student %d: %lf", s, average);
                printf("\n");
            }
            printf("\n");

            printf("Best concept: \n");
            for (int s = 0; s < STUDENTS; s++)
            {
                double best_concept = 0;
                for (int c = 0; c < CONCEPTS; c++)
                {
                    if (concept_matrix[s][c] > best_concept)
                    {
                        best_concept = concept_matrix[s][c];
                    }
                }
                printf("Student %d: %lf", s, best_concept);
                printf("\n");
            }

            printf("\n");
            break;
        case 0:
            break;
        default:
            break;
        }
    }

    return 0;
}