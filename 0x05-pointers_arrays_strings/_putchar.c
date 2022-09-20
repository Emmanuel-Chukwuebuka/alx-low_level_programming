#include <stdio.h>
#include "main.h"

int _puchar(char str)
{
	return (write(1, &str, 1));
}
