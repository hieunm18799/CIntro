#include <stdio.h>
#include <string.h>

#define MAX_STRING 255

char *return_compass_bearing(double compass_heading);

int main()
{
    float compass_heading;
    printf("Input the compass heading(0-360): ");
    scanf("%f", &compass_heading);
    printf("The compass bearing: %s\n", return_compass_bearing(compass_heading));
    return 0;
}

char *return_compass_bearing(double compass_heading) {
    if (0 <= compass_heading && compass_heading < 90) return "north east";
    if (90 <= compass_heading && compass_heading < 180) return "south east";
    if (180 <= compass_heading && compass_heading < 270) return "south west";
    if (270 <= compass_heading && compass_heading <= 360) return "north west";
    return "NONE";
}