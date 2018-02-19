#ifndef errorFace_h
#define	errorFace_h


#include <expression.h>

class errorFace : public expression {
	public:
	
		errorFace();
		
		void display(LedControl lc, int iterator, bool direction);
		
		
	private:
		
		void sweepAnim(LedControl lc, int iterator, bool direction);
		
		int pupil[8] = {195, 231, 126, 60, 60, 126, 231, 195};
};

#endif