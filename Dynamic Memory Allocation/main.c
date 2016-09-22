#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct Person 
{
	int month;
	int day;
	int year;
	int number;
};



int main(int argc, char* argv[])
{
	//Define a variable p of type struct Person
	struct Person p;
	p.month = 10;
	p.day = 13;
	p.year = 2016;
	p.number = 1234;

	printf("Person %d:\n\tDate: %d/%d/%d\n", p.number, p.month, p.day, p.year);

	//Pointers are fun
	int* age;
	//The * dentoes a pointer
	//The variable age is a pointer of int type
	printf("Ages memory address: %p", age);
	//Intitially pointers point to a random memory address
	//Lets create a place for age to point
	age = (int*)malloc(sizeof(int));
	//allocate a block of memory the sizeof an int
	//and story memory address in the age pointer
	*age = 15;
	//The * in front dereferences the pointer so we can acess the content of memory instead of address
	printf("\n\tAge is: %d", *age);

	//Then free the dynamically allocated memory
	free(age);

	int q;
	scanf("%d", &q);
	return 0;
}