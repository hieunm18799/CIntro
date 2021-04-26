#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STRING 255
#define LOW 1
#define HIGH 10

/*Khong nen dung switch case vi cac bai toan co nhieu dieu kien khac nhau
Nen dung if else cho thuan tien*/

char *return_class(int age);
char *play_high_low(int guess_number);

int main()
{
    printf("Shows your class\n\n");
    int age;
    printf("Input the age(age >= 0): ");
    scanf("%d", &age);
    printf("Your class: %s\n", return_class(age));
    printf("\n");

    printf("Play \"High/Low\"\n\n");
    int guess_number;
    printf("Guess my number (between 1 and 10): ");
    scanf("%d", &guess_number);
    printf("%s\n", play_high_low(guess_number));

    return 0;
}

char *return_class(int age) {
    if (0 <= age && age < 18) return "Child";
    if (18 <= age && age < 65) return "Adult";
    if (65 <= age) return "Senior Citizen";
    return "NONE";
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