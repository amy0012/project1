#include <stdio.h>
#include <math.h>
int main() {
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    double avg = 0;
    int i = 0;
    while(i<10) {
	   avg += sqrt(numbers[i]);
	   i++;
    }
    avg = avg / 10;
    printf("%f", avg);
    return(0);
}