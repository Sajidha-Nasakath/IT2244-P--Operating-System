//Printing Hello World

#include<stdio.h>
int main(){
	printf("Hello World!");
	return 0;
}

//To get the permission from server to run the program
 gcc c_program.c -o c_program
//To see the output we have to type the file name without extension
./c_program

//steps
touch c_program.c
vi c_program.c
gcc c_program.c -o c_program //gcc (file_name.c) -o (file_name)
./c_program
