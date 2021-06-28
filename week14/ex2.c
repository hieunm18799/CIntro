#include <stdio.h>
#include <stdlib.h>

#define MONTH_PER_YEAR 12

typedef struct Month_Weather
{
    float rainfall_total;
    float temp_high;
    float temp_low;
    float temp_aver;
} Month_Weather;

Month_Weather *inputInfor();

void main()
{
    Month_Weather *year_data;
    float year_high_temp = 40, year_low_temp = 50, year_aver_tmp = 0, year_total_rainfall = 0;

    for (int i = 0; i < MONTH_PER_YEAR; i++) {
        printf("Input the data of %d!\n", i + 1);
        year_data = inputInfor();
        if (year_data->temp_high > year_high_temp) year_high_temp = year_data->temp_high;
        if (year_data->temp_low < year_low_temp) year_low_temp = year_data->temp_low;
        year_total_rainfall += year_data->rainfall_total;
        year_aver_tmp += year_data->temp_aver;
        year_data++;
    }

    printf("The highest year: %.2f\n", year_high_temp);
    printf("The lowest year: %.2f\n", year_low_temp);
    printf("The average of tempeture: %.2f\n", year_aver_tmp / MONTH_PER_YEAR);
    printf("The average of rainfall: %.2f\n", year_total_rainfall / MONTH_PER_YEAR);
}

Month_Weather *inputInfor() {
    Month_Weather *res = (Month_Weather*) malloc (sizeof(Month_Weather));
    
    printf("Input the total of rainfall: ");
    scanf("%f", &res->rainfall_total);

    printf("Input the highest temperature: ");
    scanf("%f", &res->temp_high);
    while (res->temp_high < 40 || res->temp_high > 50)
    {
        printf("Your highest temperature is incorrect! (40 <= highest temperature <= 50)\nInput the highest temperature: ");
        scanf("%f", &res->temp_high);
    }

    printf("Input the lowest temperature: ");
    scanf("%f", &res->temp_low);
    while (res->temp_low < 40 || res->temp_low > 50)
    {
        printf("Your lowest temperature is incorrect! (40 <= lowest temperature <= 50)\nInput the lowest temperature: ");
        scanf("%f", &res->temp_low);
    }

    printf("Input the average of temperature: ");
    scanf("%f", &res->temp_aver);
    while (res->temp_aver < 40 || res->temp_aver > 50)
    {
        printf("Your average of temperature is incorrect! (40 <= average of temperature <= 50)\nInput the average of temperature: ");
        scanf("%f", &res->temp_aver);
    }

    return res;
}