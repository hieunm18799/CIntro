#include <stdio.h>
#include <stdlib.h>

#define MAX_ARRAY 100

typedef struct
{
    int ts;
    int ms;
} fraction;

fraction *inputFraction();
fraction *arrFractions();
void printFraction(fraction *fractions, int length);
void inverseFraction(fraction *fractions, int length);
int cmpFraction(fraction *fraction1, fraction *fraction2);
int gcd(int a, int b);
void convertToSimple(fraction *fraction);
fraction *add2Fraction(fraction *fraction1, fraction *fraction2);
fraction *multi2Fraction(fraction *fraction1, fraction *fraction2);

void main()
{
    int number_of_fractions, cmp_frac_res;
    fraction *fractions, *add_frac_res, *multi_frac_res;

    fractions = arrFractions(&number_of_fractions);
    printFraction(fractions, number_of_fractions);

    inverseFraction(fractions, number_of_fractions);
    printf("Inversed the fraction's array!");
    printFraction(fractions, number_of_fractions);

    cmp_frac_res = cmpFraction(fractions, fractions + 1);
    if (cmp_frac_res < 0) printf("The %d/%d is biger than %d/%d\n", fractions->ts, fractions->ms, (fractions + 1)->ts, (fractions + 1)->ms);
    else if (cmp_frac_res > 0) printf("The %d/%d is smaller than %d/%d\n", fractions->ts, fractions->ms, (fractions + 1)->ts, (fractions + 1)->ms);
    else printf("The %d/%d is even with %d/%d\n", fractions->ts, fractions->ms, (fractions + 1)->ts, (fractions + 1)->ms);

    printf("Fraction %d/%d now will be converted to simple fraction!\n", fractions->ts, fractions->ms);
    convertToSimple(fractions);
    printf("Fraction after converted: %d/%d\n", fractions->ts, fractions->ms);
    
    add_frac_res = add2Fraction(fractions, fractions + 1);
    multi_frac_res = multi2Fraction(fractions, fractions + 1);
    printf("The result of adding and multipling 2 fraction %d/%d and %d/%d are %d/%d and %d/%d\n", fractions->ts, fractions->ms, (fractions + 1)->ts, (fractions + 1)->ms, add_frac_res->ts, add_frac_res->ms, multi_frac_res->ts, multi_frac_res->ms);
}

fraction *inputFraction()
{
    fraction *res = (fraction *)malloc(sizeof(fraction));

    printf("Input fraction's ts: ");
    scanf("%d", &res->ts);

    printf("Input fraction's ms: ");
    scanf("%d", &res->ms);

    return res;
}

fraction *arrFractions(int *n)
{
    fraction *res = (fraction *)malloc(sizeof(fraction) * MAX_ARRAY);

    printf("Input the number of fractions: ");
    scanf("%d", n);

    for (int i = 0; i < *n; i++)
    {
        printf("Input the fraction %d!\n", i + 1);
        res[i] = *inputFraction();
    }

    return res;
}

void printFraction(fraction *fractions, int length)
{
    printf("The fractions's array!\n");
    for (int i = 0; i < length; i++)
    {
        printf("| ");
        printf("%-3d ", (fractions + i)->ts);
    }
    printf("|\n");

    for (int i = 0; i < length; i++)
    {
        printf("| ");
        printf("--- ");
    }
    printf("|\n");

    for (int i = 0; i < length; i++)
    {
        printf("| ");
        printf("%-3d ", (fractions + i)->ms);
    }
    printf("|\n");
}

void inverseFraction(fraction *fractions, int length)
{
    int tmp;

    for (int i = 0; i < length; i++)
    {
        tmp = (fractions + i)->ts;
        (fractions + i)->ts = (fractions + i)->ms;
        (fractions + i)->ms = tmp;
    }
}

int cmpFraction(fraction *fraction1, fraction *fraction2)
{
    int msc = fraction1->ms * fraction2->ms,
        ts1 = fraction1->ts * fraction2->ms,
        ts2 = fraction2->ts * fraction1->ms;

    if (ts1 > ts2)
        return -1;
    else if (ts1 < ts2)
        return 1;
    else
        return 0;
}

int gcd(int a, int b)
{
    while (a * b != 0)
    {
        if (a > b)
        {
            a %= b;
        }
        else
        {
            b %= a;
        }
    }
    return a + b;
}

void convertToSimple(fraction *fraction)
{
    int tmp = gcd(fraction->ts, fraction->ms);

    fraction->ts /= tmp;
    fraction->ms /= tmp;
}

fraction *add2Fraction(fraction *fraction1, fraction *fraction2){
    int msc = fraction1->ms * fraction2->ms,
        ts1 = fraction1->ts * fraction2->ms,
        ts2 = fraction2->ts * fraction1->ms;
    fraction *res = (fraction *)malloc(sizeof(fraction));

    res->ts = ts1 + ts2;
    res->ms = msc;

    convertToSimple(res);

    return res;
}

fraction *multi2Fraction(fraction *fraction1, fraction *fraction2) {
    fraction *res = (fraction *)malloc(sizeof(fraction));

    res->ts = fraction1->ts * fraction2->ts;
    res->ms = fraction1->ms * fraction2->ms;

    convertToSimple(res);

    return res;
}