#include<stdio.h> 
#include<string.h> 
#include<locale.h> 
#include<iostream>
   
 void sifrele(char * cumle); 
 
 using namespace std;
  
 main(){ 
 
	setlocale(LC_ALL,"Turkish"); 
 	char cumle[1000]; 
 	printf("Sifrelenecek cumleyi giriniz:"); 
 	gets(cumle); 
 	printf("Sifrelenmesi istenen cumle: %s\n", cumle); 
 	sifrele(cumle); 
 	
 } 
 
 void sifrele(char * cumle){

 	int i, sayac=0; 
 	char islem; 
 	for(i=0;cumle[i]!='\0';i++);  
 	printf("Cumlenin Sifreli Hali:"); 
 	for(int j=i-1;j>=0;j--){ 
 		 
 		islem=cumle[j]; 
 		 
 		switch (islem){ 
 			 
 			 case 'a' :{ 
 				printf("!"); 
 				sayac+=1; 
 				break; 
 			 } 
 			
 			 case 'e' :{ 
 				printf("?"); 
 				sayac+=1; 
 				break; 
 			 } 
 			
 			 case 'i': case'ý': {
 				printf("(");
 				sayac+=1;
				break;
			 }
			  
 			 case 'o': case 'ö': {
 				printf("=");
 				sayac+=1;
				break;
			 }
			  		
 			 case 'u': case 'ü': { 
 				printf("#"); 
 				sayac+=1; 
 				break; 
 			 }
			  
 			 default :{ 
 				printf("%c",cumle[j]); 
 				break; 
 			 } 
 	
	 	 } 
 		
 	 }
 	
 	
	printf("\nSifrelenen Karakter Sayisi: %d", sayac); 
 		 
	printf("\nSifrelenmeyen Karakter Sayisi:") ;
	
	printf("%d\n", i - sayac);
	
	system("PAUSE");
 }
 	 
