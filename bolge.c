#include<stdio.h>
#include<string.h>

int main(){
	
	int plaka;
	int dosya_plaka;

	FILE *fp=fopen("iller.txt","r");
	char iller[1000];
    if(fp==NULL){
	 	printf("dosya acilmadi");
	 	return 1; 	
	}
	else{ 
	
	
    printf("il kodu giriniz:");printf("\n");
	scanf("%d",&plaka);
   
   	while (fscanf(fp, "%d %[^\n]", &dosya_plaka, iller) != EOF) {	

         if (dosya_plaka == plaka){ 
    		printf("%d plaka kodlu %s ili karadeniz bolgesindedir\n",plaka,iller);
	        break; 
          }
        
    }
  printf("hatali kod girdiniz");	
  }	
	fclose(fp);
	return 0;
}