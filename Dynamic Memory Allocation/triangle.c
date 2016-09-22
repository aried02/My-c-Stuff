#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <malloc.h>
#include "triangle.h"

double triangle_area(struct Triangle* t)
{
	//the -> is like dereferencing a pointer and using the dot operator at the same time 
	return t->base * t->height * 0.5;
}

double triangle_perimeter(struct Triangle* a)
{
	//It is right triangle 
	double c = sqrt(pow(a->base, 2) + pow(a->height, 2));
	return a->base + a->height + c;
}

struct Triangle* triangle_add(struct Triangle* a, struct Triangle* b)
{
	struct Triangle* tri = (struct Triangle*)(malloc(sizeof(struct Triangle)));
	tri -> base = a->base + b-> base;
	tri -> height = a->height + b->height;
	return tri;
}
