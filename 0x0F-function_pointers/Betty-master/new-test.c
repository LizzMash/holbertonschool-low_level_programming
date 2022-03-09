#include "function_pointers.h"
/*
*Auth: Elizabeth Mashilo
*/

void print_name(char *name, void(*f)(char *))
{
	if (name == "" || f == "")
{
	return;
}
f(name);
}
