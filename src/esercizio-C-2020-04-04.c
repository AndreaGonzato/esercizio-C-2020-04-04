#include <stdio.h>
#include <stdlib.h>


int main(void) {
	char ch;

	ch = getchar();
	long count_char = 1;
	int line = 1;
	int counts_char_on_one_line = 1;

	while(ch != EOF){

		if(ch == '\n'){
			double average_of_characters_per_line = (double)count_char/(double)line;
			printf("you writed %d char on the last line\n", counts_char_on_one_line);
			printf("you write %.2lf characters on average per line\n", average_of_characters_per_line);
			counts_char_on_one_line = 0;
			line++;
		}

		ch = getchar();
		count_char++;
		counts_char_on_one_line++;
	}

	double average_of_characters_per_line = (double)count_char/(double)line;
	printf("the final average of characters per line is: %.2lf\n", average_of_characters_per_line);

}
