#include<stdio.h>
#include<math.h>
int main()
{
    double x[2], answer;
    scanf("%lf %lf", &x[0], &x[1]);
    answer = sqrt((x[0] * x[0]) + (x[1] * x[1]));
    printf("%.6lf", answer);
    return 0;
}
