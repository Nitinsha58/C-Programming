#include<stdio.h>

typedef struct TIME {
    int seconds;
    int minutes;
    int hours;
} TIME;

TIME diffTime(TIME t1, TIME t2, TIME *res);


int main(){
    struct TIME startTime, stopTime, diff;

    printf("Enter the start time. \n");
    printf("Enter hours, minutes and seconds: ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    printf("Enter the stop time. \n");
    printf("Enter hours, minutes and seconds: ");
    scanf("%d %d %d", &stopTime.hours, &stopTime.minutes, &stopTime.seconds);

    // Difference between start and stop time
    diffTime(startTime, stopTime, &diff);
    printf("\nTime Difference: %d:%d:%d - ", startTime.hours, startTime.minutes, startTime.seconds);
    printf("%d:%d:%d", stopTime.hours, stopTime.minutes, stopTime.seconds);
    printf(" = %d:%d:%d\n", diff.hours, diff.minutes, diff.seconds);


    return 0;
}

TIME diffTime(TIME t1, TIME t2, TIME *res) {
    

    while (t2.seconds > t1.seconds){
        --t1.minutes;
        t1.seconds += 60;
    }
    res->seconds = t1.seconds - t2.seconds;

    while (t2.minutes > t1.minutes){
        --t1.hours;
        t1.minutes += 60;
    }

    res->hours = t1.hours - t2.hours;
    res->minutes = t1.minutes - t2.minutes;



}