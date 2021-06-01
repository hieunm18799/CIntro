#include <stdio.h>

#define MAX_STRING 255

float scoreConversionScale[2][9] = {{0.0, 3.0, 4.0, 4.8, 5.5, 6.3, 7.0, 7.8, 8.5},
                                    {0.0, 0.5, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4.0}};
char conversionScaleChar[9][MAX_STRING] = {"F", "F+", "D", "D+", "C", "C+", "B", "B+", "A"};

void main(){
    float score;

    printf("Input the score: ");
    scanf("%f", &score);

    int pos = 0;
    while (scoreConversionScale[0][pos] <= score && pos < 9) pos ++;

    printf("Your score after conversed is: %.1f & %s", scoreConversionScale[1][pos - 1], conversionScaleChar[pos - 1]);
}