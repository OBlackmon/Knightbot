#ifndef trans_h
#define	trans_h


#include <expression.h>

class trans : public expression {
	public:
	
		trans();
		
		void display(LedControl lc, int iterator, bool direction);
		
		
	private:
		
		void sweepAnim(LedControl lc, int iterator, bool direction);
		
		int pupil[8] = {255, 255, 255, 255, 255, 255, 255, 255};
};

#endif