// Tic Tac Toe Game
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>


char square[10] = {'0','1','2','3','4','5','6','7','8','9'};
void GridDisplay();
void markGrid(int , char );
int checkWin();


int main(){
      
      system("color, a3");
    
     char  mark;
     int  choice,player=1,i;
     
   // // X: Player 1 , O: Player 2

    do{ 
         GridDisplay();
         player = (player %2) ? 1:2;

         printf("Player %d, Enter a number from (1-9):  ", player);
         scanf("%d", &choice);
        
         mark = (player == 1)? 'X': 'O';
         markGrid(choice, mark);

         i = checkWin();
         player++;
       }
      while (i==-1);
      {  
            GridDisplay();
      }
        if( i == 1)
        {
            printf("Player %d won", --player);
        }
         else
         {
             printf("-------Game Draw---------");
         }
         

return 0;
}

void GridDisplay()
{
   printf("\n\n\n Tic Tac Toe \n\n\n");
    printf("You(X) - Computer(O)\n\n\n");
    
    printf("     |        |       \n");
    printf("  %c  |   %c    |   %c  \n", square[1],square[2],square[3]);
    printf("_____|________|_______\n");
    printf("     |        |       \n ");
    printf(" %c  |   %c    |   %c  \n", square[4],square[5],square[6]);
    printf("_____|________|_______\n");
    printf("     |        |       \n");
    printf("  %c  |   %c    |   %c  \n", square[7],square[8],square[9]);
    printf("     |        |       \n"); 

}

void markGrid(int choice, char mark)
{
   
    if(choice == 1 && square[1] == '1')
    {
       square[1] = mark;
    }
      else if( choice == 2 && square[2] == '2')
    {
       square[2] = mark;  
    }
    else if( choice ==3 && square[3] == '3')
    {
       square[3] = mark;  
    }
    else if( choice ==4 && square[4] == '4')
    {
       square[4] = mark;  
    }
    else if( choice ==5 && square[5] == '5')
    {
       square[5] = mark;  
    }
    else if( choice ==6 && square[6] == '6')
    {
       square[6] = mark;  
    }
    else if( choice ==7 && square[7] == '7')
    {
       square[7] = mark;  
    }
    else if( choice ==8 && square[8] == '8')
    {
       square[8] = mark;  
    }
    else if( choice ==9 && square[9] == '9')
    {
       square[9] = mark;  
     }
    
     else 
    {
        printf("---Invalid input---\n");
    }

}   


int checkWin()
{
     //Horizontal cases
    if ( square[1] == square [2] && square[2]==square[3])
    {
        return 1;
    } 

    else if(square[4]== square[5] && square[5] == square[6])
    {
        return 1;
    }

     else if(square[7]== square[8] && square[8] == square[9])
    {
        return 1;
    }

    // Diagonal cases
    
     else if(square[1]== square[5] && square[5] == square[9])
    {
        return 1;
    }

     else if(square[3]== square[5] && square[5] == square[7])
    {
        return 1;
    }

    //Vertical cases
    
     else if(square[1]== square[4] && square[4] == square[7])
    {
        return 1;
    }
    
     else if(square[2]== square[5] && square[5] == square[8])
    {
        return 1;
    }

     else if(square[3]== square[6] && square[6] == square[9])
    {
        return 1;
    }

    else if(square[1]!= '1' && square[2] != '2' && square[3]!='3' && square[4]!='4' && square[5]!='5' && square[6]!='6' && square[7]!='7' && square[8]!='8' && square[9]!=' 9')
    {
        return 0;
    }

    else
    { 
        return -1; 
    }  

}

