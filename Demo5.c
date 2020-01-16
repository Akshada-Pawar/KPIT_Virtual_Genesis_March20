#include <stdio.h>

int main(void) {
	
	float  choice = 2.0f;
	
	switch(choice){
	    case 1:
	        printf("KPIT\n");
	        break;
	    case 2:
	        printf("Virtual_Genesis\n");
	        break;
	    case 3:
	        printf("EduOnline\n");
	        break;
	    case 4:
	        printf("Trvis and Jenkins\n");
	        break;
	    default:
	        printf("Case default\n");
	}
	
	return 0;
}
