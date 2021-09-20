#include "holberton.h"

/**
 *_islower - checks lowercase
 *@c: int
 *Return: 1 if lowercase, 0 if otherwise
 **/

int _islower(int c)
{
    char alp;
    
    for (alp = 'a'; alp <= 'z'; alp++)
    {
        if (c == alp)
            return (1);
    }
    return (0);
}
