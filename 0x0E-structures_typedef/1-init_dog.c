#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/*
 * @d: initialize the struct
 *@name: dog's name
 * @age: dog's age
 * @owner: the owner of dog
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d!=NULL){
	d->name=name;
	d->age=age;
	d->owner=owner;}
}
