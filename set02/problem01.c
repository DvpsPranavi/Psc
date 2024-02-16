//01.  Write a program to find the area of a triangle.
#include<stdio.h>
void input(float *base,float *height)
{
    printf("Enter the base of the triangle\n");
    scanf("%f",base);
    printf("Enter the height of the triangle\n");
    scanf("%f",height);
}

void find_area(float base , float height, float *area)
{
     *area=0.5*base*height;
}


void output(float base, float height, float area)
{
    printf("The area of the triangle with base %f ,height %f is %f\n",base,height,area);
}
int main()
{
    float base,height,area;
    input(&base,&height);
    find_area(base,height,&area);
    output(base,height,area);
    return 0;
}