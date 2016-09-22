#ifndef TRIAGNLE_H_INCLUDED
#define TRIAGNLE_H_INCLUDED

struct Triangle 
{
	double base;
	double height;
};

	double triangle_area(struct Triangle*);
	double triangle_perimeter(struct Triangle*);
	struct Triangle* traingle_add(struct Triangle*, struct Triangle*);

#endif