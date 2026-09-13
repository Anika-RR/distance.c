#include <stdio.h>
int main()
{ 
    float speed;
    float time;
    
    printf("enter speed in km/h:");
    scanf("%f", &speed);
    
    printf("enter time in hours:");
    scanf("%f", &time);

    
    float distance = speed* time;
    
    float meters= distance * 1000;
    float centimeters= distance * 100000;
    float millimeters = distance * 1000000;
    
    printf("\n conversion results\n");
    printf("distance in meters: %.2f m\n", meters);
    printf("distance in centimeters:%.2f cm\n", centimeters);
    printf("distance in millimeters:%.2f mm\n", millimeters);
    
    return 0;
}