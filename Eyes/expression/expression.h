#ifndef expression_h
#define expression_h

#include <LedControl.h>

class expression
{
	public:
		
		virtual void display(LedControl lc) = 0;
		int currentRow(int iterator, bool direction);
};

#endif