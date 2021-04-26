#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STRING 255
#define LOW 1
#define HIGH 10

char *play_high_low(int guess_number);

int main()
{
    int guess_number;
    printf("Guess my number (between 1 and 10): ");
    scanf("%d", &guess_number);
    printf("%s\n", play_high_low(guess_number));
    return 0;
}

char *play_high_low(int guess_number) {
    char str_tmp[MAX_STRING];
    char *return_mes = (char*) malloc(sizeof(char)*MAX_STRING);
    strcat(return_mes, "Your guess was ");
    time_t t;
    srand((unsigned) time(&t));
    int random_number = LOW + (rand() % HIGH);
    if (guess_number > random_number) strcat(return_mes, "too big\n");
    else
        if (guess_number < random_number) strcat(return_mes, "too small\n");
        else strcat(return_mes, "correct\n");
    strcat(return_mes, "The correct number was ");
    sprintf(str_tmp, "%d", random_number);
    strcat(return_mes, str_tmp);
    return return_mes;
}