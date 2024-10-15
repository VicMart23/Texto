#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define tope 200

main()
{int i=0,limite=0,ca=0,ce=0,ci=0,co=0,cu=0,p=0,c=0,esp=0,cte=0,pc=0,pp=0,total;
char palabra[tope],letra;
printf("Ingrese el texto: \n");
gets(palabra);
while(palabra[i]!='\0')
	{limite++;
	letra=tolower(palabra[i]);
	switch(letra)
		{case 'a':
			{ca++;break;}
		case 'e':
			{ce++;break;}
		case 'i':
			{ci++;break;}
		case 'o':
			{co++;break;}
		case 'u':
			{cu++;break;}
		case ' ':
			{esp++;break;}
		case ',':
			{c++;break;}
		case '.':
			{p++;break;}
		case ':':
			{pp++;break;}
		case ';':
			{pc++;break;}
		default:
			{cte++;break;}}
	i++;}
printf("Texto al rev%cs: \n",130);
limite=strlen(palabra);
for(i=limite-1;i>=0;i--)
	{printf("%c",palabra[i]);}
total=ca+ce+ci+co+cu+esp+c+p+pp+pc+cte;
printf("\na = %d",ca);
printf("\ne = %d",ce);
printf("\ni = %d",ci);
printf("\no = %d",co);
printf("\nu = %d",cu);
printf("\nConsonantes = %d",cte);
printf("\nEspacios = %d",esp);
printf("\nSignos de puntuaci%cn = %d",162,p+c+pp+pc);
printf("\nTotal de caracteres = %d",total);
return(0);}
