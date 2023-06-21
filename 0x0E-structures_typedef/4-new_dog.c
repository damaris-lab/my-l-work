#include <stdlib.h>
#include "dog.h"
/**
 * *new_dog-function creates a new dog
 *@name:name of the dog
 *@age:age of the dog
 *@owner:owner of the dog
 *Return:return to struct dog,null if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new;
	dog_t  *newdog;
	char  *nme;
	char  *own;

	newdog = &new;
	name = name;
	owner = owner;
	newdog->name = nme;
	newdog->age = age;
	newdog->owner = own;
	return (newdog);
}
