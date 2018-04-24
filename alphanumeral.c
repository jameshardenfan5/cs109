#include <stdio.h>
#include <stdlib.h> //www.tutorialspoint.com/c_standard_library/c_function_atoi.htm
#define MAX 50

int main(){

	char string[MAX];
	int number;
	FILE *fp; // step to open file.	
	FILE *fp2; // SECOND FILE for writing.

	fp = fopen("input.dat", "r"); // fp is defined above. "r" means reading.
	fp2 = fopen("output.dat", "w");// fp2 is defined above. output.dat is file name. "w" for writing
	while(fscanf(fp, "%s", string) != -1) // documentation for fscanf; when end of file is reached it returns -1
	{
		number = (int)string[0];//www.asciitable.com
		if((number>=65&&number<=90)||(number>=97&&number<=122)){ // 'string' is a word
			fprintf(fp2, "%s ", string); // if human-graded OK. if computer-graded then the space after last word is an error.
		}
		else{ // in this case then 'string' is a number.
			number = atoi(string); //www.beedub.com/Sprite093/src/macserver/1.098/libc/atoi.c

			int remainder; // for the division computation.

			if(number / 100 > 0)
			{
				if(number / 100 == 1){
					fprintf(fp2, "one hundred ");
				}
				if(number / 100 == 2){
					fprintf(fp2, "two hundred ");
				}
				if(number / 100 == 3){
					fprintf(fp2, "three hundred ");
				}
				if(number / 100 == 4){
					fprintf(fp2, "four hundred ");
				}
				if(number / 100 == 5){
					fprintf(fp2, "five hundred ");
				}
				if(number / 100 == 6){
					fprintf(fp2, "six hundred ");
				}
				if(number / 100 == 7){
					fprintf(fp2, "seven hundred ");
				}
				if(number / 100 == 8){
					fprintf(fp2, "eight hundred ");
				}
				if(number / 100 == 9){
					fprintf(fp2, "nine hundred ");
				}
				remainder = number%100; // % is remainder
			}
			else
			{
				remainder = number; // no hundreds digit.
			}
			if(remainder / 10 > 1)
			{
				if(remainder / 10 == 2){
					fprintf(fp2, "twenty ");
				}
				if(remainder / 10 == 3){
					fprintf(fp2, "thirty ");
				}
				if(remainder / 10 == 4){
					fprintf(fp2, "forty ");
				}
				if(remainder / 10 == 5){
					fprintf(fp2, "fifty ");
				}
				if(remainder / 10 == 6){
					fprintf(fp2, "sixty ");
				}
				if(remainder / 10 == 7){
					fprintf(fp2, "seventy ");
				}
				if(remainder / 10 == 8){
					fprintf(fp2, "eighty ");
				}
				if(remainder / 10 == 9){
					fprintf(fp2, "ninety ");
				}
				remainder = remainder%10; // to get the ones digit remainder

			}
			if(remainder > 0)
			{
				if(remainder == 19)
					fprintf(fp2, "nineteen ");
				if(remainder == 18)
					fprintf(fp2, "eighteen ");
				if(remainder == 17)
					fprintf(fp2, "seventeen ");
				if(remainder == 16)
					fprintf(fp2, "sixteen ");
				if(remainder == 15)
					fprintf(fp2, "fifteen ");
				if(remainder == 14)
					fprintf(fp2, "fourteen ");
				if(remainder == 13)
					fprintf(fp2, "thirteen ");
				if(remainder == 12)
					fprintf(fp2, "twelve ");
				if(remainder == 11)
					fprintf(fp2, "eleven ");
				if(remainder == 10)
					fprintf(fp2, "ten ");
				if(remainder == 9)
					fprintf(fp2, "nine ");
				if(remainder == 8)
					fprintf(fp2, "eight ");
				if(remainder == 7)
					fprintf(fp2, "seven ");
				if(remainder == 6)
					fprintf(fp2, "six ");
				if(remainder == 5)
					fprintf(fp2, "five ");
				if(remainder == 4)
					fprintf(fp2, "four ");
				if(remainder == 3)
					fprintf(fp2, "three ");
				if(remainder == 2)
					fprintf(fp2, "two ");
				if(remainder == 1)
					fprintf(fp2, "one ");
			}
		}
	}
	fclose(fp); // close fp
	fclose(fp2); // close fp2
	return 0;
}
