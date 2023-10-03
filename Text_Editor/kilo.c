#include <conio.h>;
#include <unistd.h>;


int main(){
	enableRawMode();
	//reading input from user
	char c;
	while (read(STDIN_FILENO, &c, 1) == 1 && c!='q');
	return 0;
}
