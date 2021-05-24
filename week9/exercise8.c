#include <stdio.h>
#include <limits.h>

#define SCORE_NUMBER 5

int scoreArr[SCORE_NUMBER], maxScore = INT_MIN, minScore = INT_MAX;

void getJudgeData();
void calcScore();

int main()
{
    getJudgeData();
    calcScore();

    return 0;
}

void getJudgeData(int ch, int n) {
    printf("Input 5 score (integer): ");
    for (int i = 0; i < SCORE_NUMBER; i++) {
        scanf("%d", &scoreArr[i]);
        if (scoreArr[i] > maxScore) maxScore = scoreArr[i];
        if (scoreArr[i] < minScore) minScore = scoreArr[i];
    }
}

void calcScore() {
    float res = 0;
    for (int i = 0; i < SCORE_NUMBER; i++) res += scoreArr[i];
    res += - maxScore - minScore;
    res /= 3;
    printf("The score is: %.2f\n", res);
}