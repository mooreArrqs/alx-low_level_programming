#include <stdio.h>
/**
* main - Prints the name of the file of a program
* it was compiled from.
*
* @_FILE_ - the macro expand to the name of the current
* input file.
*
* Return: Always 0
*/
int main(void)
{
printf("%s\n", _FILE_);
return (0);
}
