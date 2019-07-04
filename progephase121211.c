#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int length_1 ; 
int width_1 ;
int tedad_kashti_1 = 0;	
int tedad_kashti_2 = 0;
int money_1 ;   
int money_2 ; 
#define Price_a 10
#define Price_b 20

#define MAX 100
void clrscr()
{
	system("@cls||clear");
}
void init_map(){
	int width;
	int length;
    int ship_count;

	printf("Enter Width :");
	scanf("%d", &width);
	printf("\nEnter length:");
	scanf("%d" , &length);
	// printf("\nHow Many Ships:");
	// scanf("%d" , &ship_count);
	clrscr();
	// tedad_kashti = ship_count;
	length_1 = length;
	width_1 = width;
	ship_count = (int)sqrt(length*width);
	money_1 = money_2 = 15 * ship_count;
}
struct information{
     char tol[100], arz[100];
	 char kind[100], jahat[100];
   };

   struct information player[2];
    void locate_info(void);
    void gameplay(int array1[][width_1], int array2[][width_1]);
    void show(int array[][width_1]);
    void anjame_bazi(char *str3, int array[][width_1]);
    int check1(int array[][width_1]);
    int check2(int array[][width_1]);


int main(){
	init_map();
	// printf("Hello\n");
	int tester = 0;
	int array1[length_1][width_1];
  	int array2[length_1][width_1];
	locate_info();
	// printf("%d\n",tedad_kashti_1 );
	// printf("%d\n",tedad_kashti_2 );

	gameplay(array1, array2);
	
	while(((check1(array1)) && (check2(array2)))){
		char str_1[10];
	if((tester % 2) == 0){
		printf("Player1 : \nEnter a point\n");
	scanf("%s" , str_1);
		printf("\nEnemy`s Map :\n");
		anjame_bazi( str_1, array2);
		show(array2);
		printf("################################################################################################################\n");

	}
	else{
		printf("\nPlayer2 : \nEnter a point\n");
		scanf("%s" , str_1);

		printf("\nEnemy`s Map :\n");
		anjame_bazi( str_1, array1);
		show(array1);
		printf("################################################################################################################\n");
	}
	++tester;  
	}	
	if((check1(array1)) == 0)
	{
		clrscr();
		printf("player 2 win!\n");
	}
	if((check2(array2)) == 0)
	{	
		clrscr();
		printf("player 1 win!\n");
	}
}
void locate_info(void){
	// int ship_counter = 0 ;
    char str[50];
	while(1)
	{
		if(money_1 == 0)
		{
			break;
		}
		printf("Player 1 :\nEnter Your Ships \nYour Money:%d\n>>", money_1);
		fgets(str , MAX ,stdin);
			if(str[0] == '\n'){
				str[0] = '\0';
				clrscr();
				continue;
			}

		if(str[0] == 'A'){
			money_1 = money_1 - Price_a ;
			if(money_1 >= 0)
			{
				player[1].kind[tedad_kashti_1] = str[0];
				player[1].tol[tedad_kashti_1] = str[5];
				player[1].arz[tedad_kashti_1] = str[7];
				player[1].jahat[tedad_kashti_1] = str[15];
								printf("%d\n",tedad_kashti_1 );

				tedad_kashti_1++;
				clrscr();
			}
			else{
				printf("You Have Not Enought Money\n");
				break;
			}
		}
		if (str[0] == 'B')
		{

			money_1 = money_1 - Price_b ;
			if(money_1 >= 0)
			{
				player[0].kind[tedad_kashti_1] = str[0];
				player[0].tol[tedad_kashti_1] = str[5];
				player[0].arz[tedad_kashti_1] = str[7];
				player[0].jahat[tedad_kashti_1] = str[15];
				printf("%d\n",tedad_kashti_1 );
				tedad_kashti_1++;
				clrscr();
			}
			else{
				printf("You Have Not Enought Money\n");
	
			}



	}
}
	while(1)
	{
		if(money_2 == 0)
		{
			break;
		}
		printf("Player 2 :\nEnter Your Ships \nYour Money:%d\n>>", money_2);
   		
		fgets(str , MAX ,stdin);
			if(str[0] == '\n'){
				str[0] = '\0';
				clrscr();
				continue;
			}
		if(str[0] == 'A'){
			money_2 = money_2 - Price_a ;
			if(money_2 >= 0)
			{
				player[1].kind[tedad_kashti_2] = str[0];
				player[1].tol[tedad_kashti_2] = str[5];
				player[1].arz[tedad_kashti_2] = str[7];
				player[1].jahat[tedad_kashti_2] = str[15];

				printf("%d\n",tedad_kashti_2 );
				tedad_kashti_2++;
				clrscr();
			}
			else{
				printf("You Have Not Enought Money\n");
				break;
			}
		}
		if (str[0] == 'B')
		{

			money_2 = money_2 - Price_b ;
			if(money_2 >= 0)
			{
				player[1].kind[tedad_kashti_2] = str[0];
				player[1].tol[tedad_kashti_2] = str[5];
				player[1].arz[tedad_kashti_2] = str[7];
				player[1].jahat[tedad_kashti_2] = str[15];
				tedad_kashti_2++;

				clrscr();
			}
			else{
				printf("You Have Not Enght Money\n");
				
			}
		}

 //   for(j = 0; j < 2; ++j){
 //   	printf("Enter your ships location:");
 //   	for(i = 0; i < tedad_kashti; ++i){
 //   		char str[50];
	// 	fgets(str , MAX ,stdin);
	// 	if(str[0] == '\n'){
	// 		str[0] = '\0';
	// 		i--;
	// 		continue;
	// 	}
	// if((str[5] < 48) || (str[5] > (length_1 + 48)) || (str[7] < 48) || (str[7] > (width_1 + 48))){
	// 	printf("This location is not defined!\n");
	// 	--i;
	// 	continue;
	// }	
	// player[j].kind[i] = str[0];
	// player[j].tol[i] = str[5];
	// player[j].arz[i] = str[7];
	// player[j].jahat[i] = str[15];
	// printf("\n");
	// clrscr();
}
  // printf("\n");
}

 void gameplay(int array1[][width_1], int array2[][width_1]){
 	int m, n, l, pot;
 	int tol1, arz1, tol2, arz2;
  	  for(m = 0; m < length_1; ++m){
   	 	for(n = 0; n < width_1; ++n){
   	 		 array1[m][n] = 0;
   	 	     array2[m][n] = 0;
   	 	}
   	 }
  	    for(l = 0; l < tedad_kashti_1; ++l){
  	     tol1 = (player[0].tol[l] - 48);
  	     arz1 = (player[0].arz[l] - 48);
  	     if(player[0].kind[l] == 'A')
  	     	array1[tol1][arz1] = 1;
  	     if(player[0].kind[l] == 'B')
  	     	array1[tol1][arz1] = 2;
  	     
		 }
		  for(pot = 0; pot < tedad_kashti_2; ++pot){
  	     tol2 = (player[1].tol[pot] - 48);
  	     arz2 = (player[1].arz[pot] - 48);
			  	   	    // array2[tol2][arz2] = 1;
  	     if(player[1].kind[pot] == 'A')
  	     	array2[tol2][arz2] = 1;
  	     if(player[1].kind[pot] == 'B')
  	     	array2[tol2][arz2] = 2;

		 }
  }
  // show the plan/
  void show(int array[][width_1]){
  	int array_new[length_1][width_1];
  	  int r, s;
  	  for(r = 0; r < length_1; ++r){
   	 	for(s = 0; s < width_1; ++s){
   	 	if((array[r][s]) == 0){
   	 			array_new[r][s] = 63;
				}
		if((array[r][s]) == 1){
   	 			array_new[r][s] = 63;
				}
		if((array[r][s]) == 2){
   	 			array_new[r][s] = 63;
				}

		if((array[r][s]) == 7){
   	 			array_new[r][s] = 42;
				}
			if((array[r][s]) == 6){
   	 			array_new[r][s] = 32;	
			}
		}
	}
  	 for(r = 0; r < length_1; ++r){
   	 	for(s = 0; s < width_1; ++s){
  	printf("%c" , array_new[r][s]);
  }
  printf("\n");
  }		
}
  //check end of game
   int check1(int array[][width_1]){
   	int a, b, counter = 0;
   	 for(a = 0; a < length_1; ++a){
   	 	for(b = 0; b < width_1; ++b){
   	 		if((array[a][b]) == 7){
   	 			++counter;
				}
			}
		}
   	  if(counter == tedad_kashti_1){
   	  	return 0;
		 }
	 return 1;
   }
   int check2(int array[][width_1]){
   	int a, b, counter = 0;
   	 for(a = 0; a < length_1; ++a){
   	 	for(b = 0; b < width_1; ++b){
   	 		if((array[a][b]) == 7){
   	 			++counter;
				}
			}
		}
   	  if(counter == tedad_kashti_2){
   	  	return 0;
		 }
	 return 1;
   }

  void anjame_bazi(char *str3, int array[][width_1]){
  	int q;
	  q = (str3[1] - 48);
  	int e;
	  e = (str3[3] - 48);
  	if(array[q][e] == 0){
  		array[q][e] = 6;
	  }
  	  if(array[q][e] == 1){
  		array[q][e] = 7;
	  }
  	  if(array[q][e] == 2){
  		array[q][e] = 1;
	  }

  }































































































































