#ifndef happyFace_h
#define	happyFace_h

#include <expression.h>

class happyFace : public expression {
	public:
	
		happyFace();
		
		void display(LedControl lc, int iterator, bool direction);
		
	private:
		void displayPupil(LedControl lc, int iterator, bool direction);
		
		int pupil[8] = {254, 129, 129, 129, 157, 157, 157, 254};
};

#endif