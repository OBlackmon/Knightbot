#ifndef blink001_h
#define	blink001_h


#include <expression.h>

class blink001 : public expression {
	public:
	
		blink001();
		
		void display(LedControl lc, int iterator, bool direction);
		
		
	private:
		
		void sweepAnim(LedControl lc, int iterator, bool direction);
		
		int pupil[8] = {0, 0, 24, 60, 60, 24, 0, 0};
};

#endif