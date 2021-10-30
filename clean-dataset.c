/*
 * Program hapus karakter di suatu dataset
 * (c) Nisa I.K. 2021
 */
 
 #include<stdio.h>
 #include<stdlib.h>
 typedef enum{false,true} boolean;
 
 int main()	{
 	// Buka dan baca file sumber
 	FILE *src_file;
 	char read_data[500], bffr;
 	boolean flag = true;
 	int i;
 	
 	if((src_file = fopen("source.txt", "r")) == NULL)	{
 		printf("Error, no file found!");	
 		exit(1);
	}
// Hai Halo Selamat malam
	while((bffr = getc(src_file)) != EOF)	{
		read_data[i] = bffr;
		i++;			
	}
 }
