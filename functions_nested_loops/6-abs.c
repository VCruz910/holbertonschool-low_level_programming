#include "main.h"
/**
  * _abs - Computes the absolute value
  *	of a interger.
  *
  * @interger: Variable for a interger
  *
  * Return: interger (true),
  *	interger * -1 (false)
  **/
int _abs(int interger)
{
	if (interger >= 0)
	{
		return (interger);
	}
	else
	{
		return (interger * -1);
	}
}
