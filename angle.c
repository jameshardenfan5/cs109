/******************************************************************************
12:10 March 2, 2018
*******************************************************************************/
#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793238
int main(){

    // declare variables
    double x1, x2, y1, y2, x3, x4, y3, y4;
    double m1, m2, b1, b2, intersection_x, intersection_y, line1_angle, line2_angle, net_angle;

    // input for line one
    printf("\nline 1 x1: ");
    scanf("%lf", &x1);
    printf("line1 y1: ");
    scanf("%lf", &y1);
    printf("line 1 x2: ");
    scanf("%lf", &x2);
    printf("line1 y2: ");
    scanf("%lf", &y2);
    // input for line two
    printf("line 2 x3: ");
    scanf("%lf", &x3);
    printf("line2 y3: ");
    scanf("%lf", &y3);
    printf("line 2 x4: ");
    scanf("%lf", &x4);
    printf("line2 y4: ");
    scanf("%lf", &y4);
    //output
    printf("line 1 points: (%lf, %lf) and (%lf, %lf)",x1,y1,x2,y2);
    printf("\nline 2 points: (%lf, %lf) and (%lf, %lf)",x3,y3,x4,y4);
    // both lines are vertical
    if(x2==x1 && x3==x4){
        printf("no intersection");
        return 0;
    }
    // line one is vertical.
    else if(x2==x1){
        m2 = (y4-y3)/(x4-x3); // slope two calculation.
        b2 = y3-m2*x3; // y intercept two calculation.
        intersection_x = x1;
        intersection_y = m2*intersection_x+b2;
        printf("\nintersection point: (%lf, %lf)", intersection_x, intersection_y);
        line1_angle = PI/2;
        line2_angle = atan(m2);
    }
    // line two is vertical.
    else if(x3==x4){
        m1 = (y2-y1)/(x2-x1); // slope one calculation.
        b1 = y1-m1*x1; // y intercept one calculation.
        intersection_x = x3;
        intersection_y = m1*intersection_x+b1;
        printf("\nintersection point: (%lf, %lf)", intersection_x, intersection_y);
        line1_angle = atan(m1);
        line2_angle = PI/2;
    }
    // neither line one nor line two is vertical
    else{
        m1 = (y2-y1)/(x2-x1); // slope one calculation.
        m2 = (y4-y3)/(x4-x3); // slope two calculation.
        b1 = y1-m1*x1; // y intercept one calculation.
        b2 = y3-m2*x3; // y intercept two calculation.
        if(m1 == m2){
            printf("no intersection");
            return 0;
        }
        // m1x + b1 = y; m2x + b2 = y.
        //-> m1x + b1 = m2x + b2. // find the intersection
        //-> m1x-m2x = b2-b1.
        //-> x = (b2-b1)/(m1-m2)
        intersection_x = (b2-b1)/(m1-m2);
        intersection_y = m1*intersection_x+b1;
        printf("\nintersection point: (%lf, %lf)", intersection_x, intersection_y);
        // https://math.stackexchange.com/questions/1269050/finding-the-angle-between-two-line-equations
        line1_angle = atan(m1);
        line2_angle = atan(m2);
    }
    net_angle = fabs(fabs(line1_angle)-fabs(line2_angle));


    printf("\nangle made by intersection: %lf radians", net_angle);
    return 0;
}