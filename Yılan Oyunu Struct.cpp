#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <unistd.h>


int i, j, boy = 20, en = 20;
int gameover, score;
int x, y, yemx, yemy, flag;
void yem(){

    gameover = 0;
  
    
    x = boy / 2;
    y = en / 2;
label1:
    yemx = rand() % 20;
    if (yemx == 0)
        goto label1;
label2:
    yemy = rand() % 20;
    if (yemy == 0)
        goto label2;
    score = 0;
}
void cerceve()
{ 
 
     system("cls");
     system("color 2");
    for (i = 0; i < boy; i++) {
        for (j = 0; j < en; j++) {
            if (i == 0 || i == en - 1
                || j == 0
                || j == boy - 1) {
                printf("|");
            }
            else {
                if (i == x && j == y)
                    printf("O");
                else if (i == yemx && j == yemy)
                    printf(".");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
  
    printf("score = %d", score);
    printf("\n");
    printf("Oyundan Cikmak icin herhangi bir tusa basin");}
    
  
struct Oyuncu_kayit{
	char oyuncu_Ad[20];
	char oyuncu_Soyad[30];
	int oyuncu_No;
	char oyuncu_cinsiyet[10];
	int oyuncu_yas;
	int oyuncu_skor;
	
};
struct Oyuncu_kayit oyncu1;

int main()
{ system("color af"); 
 printf("|*||*||*||*||*||*||*||*||*||*|SNAKE GAME|*||*||*||*||*||*||*||*||*||*|\n"); 
 oyncu1.oyuncu_skor=score; //program tamamlandiginda skor dogru bir sekilde kayit edilecektir.
  	printf("Snake Game'e Hos Geldin...\n ");
 	printf("Oyuna Baslamadan Once Kayit olmalisin.\n");
 	printf("Kayit Ekranina Gitmek icin lutfen bir tusa basiniz\a\n");
 	getch();
 	printf("OYUNCU KAYIT\n");
	printf("Adiniz: ");
		scanf("%s",&oyncu1.oyuncu_Ad);
	printf("Soyadiniz: ");
		scanf("%s",&oyncu1.oyuncu_Soyad);
	printf("Numarinizi Giriniz: ");
		scanf("%d",&oyncu1.oyuncu_No);
	printf("Cinsiyetinizi Giriniz: ");
		scanf("%s",&oyncu1.oyuncu_cinsiyet);
	printf("Yasinizi Giriniz: ");
		scanf("%d",&oyncu1.oyuncu_yas);
		printf("Bilgileriniz Basariyla Kayit Edildi\n Haydi Oyuna Baslayalim:)\n baslamak icin Herhangi bir tusa bas lutfen.");
		getch();
		
	FILE *pdosya;
	pdosya=fopen("oyuncu_verileri.txt","a");
	fprintf(pdosya,"%s%s%s","\n",&oyncu1.oyuncu_Ad," ");
	fprintf(pdosya,"%s%s",&oyncu1.oyuncu_Soyad,"    ");
	fprintf(pdosya,"%d%s",oyncu1.oyuncu_No,"    ");
	fprintf(pdosya,"%s%s",&oyncu1.oyuncu_cinsiyet,"      ");
	fprintf(pdosya,"%d%s",oyncu1.oyuncu_yas,"         ");
	fprintf(pdosya,"%d%s",oyncu1.oyuncu_skor,"\n");
	
	fclose(pdosya); 
	printf("\n\n\n\n\n\n\n\n\n");
	int m,n;
	yem();
	while (!gameover) {
	cerceve();
	
	
		
		
							
}}

