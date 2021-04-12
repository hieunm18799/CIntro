#include <stdio.h>

#define BUFFER 255
#define DVD1_RENT 7
#define DVD2_RENT 15
#define DVD3_RENT 21

int main()
{
    int dvd1 = 0
    , dvd2 = 0
    , dvd3 = 0;
    char day;
    printf("Day of week: ");
    scanf(" %c",&day);
    printf("Number of overnight DVDs: ");
    scanf("%d", &dvd1);
    printf("Number of three-day DVDs: ");
    scanf("%d", &dvd2);
    printf("Number of weekly DVDs: ");
    scanf("%d", &dvd3);
    printf("*************************\nDay %c - total cost: %d$\n*************************\n", day, dvd1*DVD1_RENT + dvd2*DVD2_RENT + dvd3*DVD3_RENT);

    return 0;
}