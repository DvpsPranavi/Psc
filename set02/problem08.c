//08. Write a program to find the triangle with smallest area in n given triangles.
#include <stdio.h>

typedef struct _triangle 
{
    float base, altitude, area;
} Triangle;

int input_n()
{
    int n;
    printf("Enter the number of triangles: ");
    scanf("%d", &n);
    return n;
}

Triangle input_triangle() 
{
    Triangle t;
    printf("Enter base and height of the triangle:\n");
    scanf("%f %f", &t.base, &t.altitude);
    return t;
}

void input_n_triangles(int n, Triangle t[n])
{
    for (int i = 0; i < n; i++)
    {
        t[i] = input_triangle();
    }
}

void find_area(Triangle *t)
{
    t->area = 0.5 * t->base * t->altitude;
}


void find_n_areas(int n, Triangle t[n]) 
{
    for (int i = 0; i < n; i++) 
    {
        find_area(&t[i]);
    }
}

Triangle find_smallest_triangle(int n, Triangle t[n]) 
{
    Triangle smallest = t[0];
    for (int i = 1; i < n; i++)
    {
        if (t[i].area < smallest.area)
        {
            smallest = t[i];
        }
    }
    return smallest;
}

void output(int n, Triangle t[n], Triangle smallest)
{
	printf("Triangles:\n");
    if (n <= 0)
    {
        printf("Invalid input. Number of triangles should be a positive integer.\n");
    }
	for (int i = 0; i < n; i++)
    {
		printf("Triangle %d - Base: %.2f, Altitude: %.2f, Area: %.2f\n", i + 1, t[i].base, t[i].altitude, t[i].area);
	}
	printf("The smallest triangle out of triangles is the triangle having base %.2f height %.2f and area %.2f \n", smallest.base, smallest.altitude, smallest.area);
}

int main()
{
    int n = input_n();
    Triangle triangles[n];
    input_n_triangles(n, triangles);
    find_n_areas(n, triangles);

    Triangle smallest = find_smallest_triangle(n, triangles);
    output(n, triangles, smallest);

    return 0;

}


