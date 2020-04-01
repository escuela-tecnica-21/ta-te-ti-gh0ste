#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>

int main(){
int tablero[3][3];

bloqueo();
    return 0;
}

int bloqueo{
	int tateti[3][3], get=0, x=0, o=0;
	
    if(tateti[0][0]==tateti[1][0]){
    	tateti[2][0]==0;
        gotoxy(2,0);
        printf("X");
    }	if(tateti[0][0]==tateti[1][0]){
        	tateti[3][0]==0;
        	gotoxy(3,0);
        	printf("X");
    	}	if(tateti[0][0]==tateti[1][0]){
        		tateti[0][1]==0;
        		gotoxy(0,1);
        		printf("X");
    		}	if(tateti[0][0]==tateti[1][0]){
        			tateti[0][2]==0;
        			gotoxy(0,2);
        			printf("X");
    			}	if(tateti[0][0]==tateti[1][0]){
    					tateti[0][3]==0;
        				gotoxy(0,3);
        				printf("X");
    				}	if(tateti[0][0]==tateti[1][0]){
        					tateti[2][0]==0;
       					 gotoxy(2,0);
      					  printf("X");
   					 }
}
