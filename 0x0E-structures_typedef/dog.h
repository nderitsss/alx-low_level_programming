#ifndef DOG_H
#define DOG_H
/**
 * struct dog-for a dog
 * @name : a string
 * @age : an int
 * @owner : name
 *
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
	void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /*DOG_H*/
