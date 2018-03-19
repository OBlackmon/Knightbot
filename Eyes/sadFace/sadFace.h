#ifndef sadFace_h
#define	sadFace_h


#include <expression.h>

class sadFace : public expression {
	public:
	
		sadFace();
		
		void display(LedControl lc);
		
		
	private:
		void displayPupil(LedControl lc);
		
		void sweepAnim(LedControl lc);
		
};

#endif
