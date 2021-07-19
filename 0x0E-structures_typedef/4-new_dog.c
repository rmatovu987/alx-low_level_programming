#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *new_dog- creates new dog
  *@name: char
  *@age: float
  *@owner: char
  *Return: dog_t
  */

dog_t *new_dog(char *name, float age, char *owner)
{
int nl, ol, x;

if (name == NULL && owner == NULL)
return (NULL);

dog_t *doginfo;
doginfo = (dog_t *) malloc(sizeof(dog_t));

if (doginfo == NULL)
return (NULL);


for (nl = 0; name[nl] != '\0'; nl++)
;
for (ol = 0; owner[ol] != '\0'; ol++)
;

for (x = 0; x <= nl; x++)
(*doginfo).name[x] = name[x];

(*doginfo).age = age;
for (x = 0; x <= ol; x++)
(*doginfo).owner[x] = owner[x];

return (doginfo);
}
