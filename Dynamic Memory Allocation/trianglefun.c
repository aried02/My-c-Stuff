#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <malloc.h>
#include "triangle.h"


int main(int argc, char* argv[])
{
	double height = 0;
    double base = 0;

    printf("Enter Height: ");
    scanf("%lf", &height);

    printf("Enter Base: ");
    scanf("%lf", &base);

    struct Triangle* tri1 = (Triangle*)(malloc(sizeof(struct Triangle)));
    struct Triangle* tri2 = (Triangle*)(malloc(sizeof(struct Triangle)));

    tri1->base = base;
    tri1->height = height;
    tri2->base = base*2;
    tri2->height = height*2;

    double area = triangle_area(tri1);
    double perimeter = triangle_perimeter(tri2);
    struct Triangle* tri3 = triangle_add(tri1, tri2);
    double area2 = triangle_area(tri3);

    printf("Area 1: %f\n", area);
    printf("Perimeter 1: %f\n", perimeter);
    printf("Area 2: %f\n", area2);

    free(tri1);
    free(tri2);
    free(tri3);

	int q;
	scanf("%d", &q);
	return 0;
}


