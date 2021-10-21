#include<iostream>

#include<stdlib.h>

#include<conio.h>



using namespace std;



int main()

{

    const int MAX_C = 30;       //set size of play area

    const int MAX_R = 15;

    int xp1=2, yp1=2, xp2 = 26 , yp2 = 8;      //coordinates for player 1 and 2

    int keyx = 25, keyy = 7;       // key coordinates

    int y1, x1;                 //coordinates for setting each block

    char mov, ch1 = 02, ch2 = 01;   // PLAYERS character

    char door = 177, key = 231, boundary = 219;     //Symbols for these

    bool havekey = false;



    //To display Instructions.

    cout << "\t\tSteal and Escape game";

    cout << "\t\tMade By : JUNAID ASLAM";

    cout << "\n\nUSE w a s d keys for moving player 1\nUSE i j k l keys for moving player 2";

    cout << "\n\nGAME RULES:";

    cout << "\nPlayer 1 have to goto the door after getting key";

    cout << "\nPlayer 2 will stop to player 1 from getting key by making collision with him";

    cout << "\n\nIf player 1 haven't key, Player 1 will lose if he collides with player 2";

    cout << "\nIf player 1 have key, Player 1 will drop his key at the place of collision \nand jump to the location near door.";

    cout << "\nDon't collide by walls.";

    cout << "\n\nPlayer 1 = " << ch1 << endl;

    cout << "Player 2 = " << ch2<< endl;

    cout << "Door = " << door << endl;

    cout << "Key = " << key << endl;

    cout << "Walls = " << boundary << endl;

    cout << "\n\nStart by pressing 'p'";



    //for holding till start

    char start;

    do{

        start = getch();

    }while(start != 'p' );



//*****************************************************************************************************************

    system("cls");

    //Only to display game environment

    for(y1 = 0; y1 <= MAX_R; y1++){

            for(x1 = 0; x1 <= MAX_C; x1++){

                if(x1 == xp1 && y1 == yp1)      //location of P1

                    cout << ch1;

                else if(x1 == xp2 && y1 == yp2)     //Location of P2

                    cout << ch2;

                else if(x1 == 0 || y1 == 0 || x1 == MAX_C || y1 == MAX_R)       //Area boundaries

                    cout << boundary;

                //setting key and door location

                else if((x1>=2 && x1<=4)&&(y1>=7 && y1<=9))         //setting door coordinates x=[2,4] , y=[7,9]

                    cout << door;

                else if(x1 == keyx && y1 == keyy){

                    if(havekey == false)

                        cout << key;

                    else

                        cout << " ";

                }

                //MAZE BRICKS

                else if ((x1 == 15 && ((y1 > 0 && y1 < 6)||(y1 > 9 && y1 < 15)))        //(x = 15 & y = [1,5])  (x = 15 & y = [10,14])

                         || (x1 == 20 && (y1 > 4 && y1 < 12))                           //x = 20 & y=[5,11]

                         ||(x1 == 10 && (y1 > 4 && y1 < 12)))                           //x = 10 & y=[5,11]

                    cout << boundary;

                else

                    cout << " ";

            }

            cout << endl;

        }

//*******************************************************************************************************************

    do{

        mov = getch();

        switch(mov)

        {

        //Player 1 control

        case 'w':

            yp1--;    break;

        case 'a':

            xp1--;    break;

        case 's':

            yp1++;    break;

        case 'd':

            xp1++;    break;

        //Player 2 control

        case 'i':

            yp2--;    break;

        case 'j':

            xp2--;    break;

        case 'k':

            yp2++;    break;

        case 'l':

            xp2++;    break;



        default:

            continue;

        }

        system("cls");

////////////////////////////////////////////////////////////////////////////////////////////////



        //Drawing game area for each frames

        for(y1 = 0; y1 <= MAX_R; y1++){

            for(x1 = 0; x1 <= MAX_C; x1++){

                if(x1 == xp1 && y1 == yp1)      //location of P1

                    cout << ch1;

                else if(x1 == xp2 && y1 == yp2)     //Location of P2

                    cout << ch2;

                else if(x1 == 0 || y1 == 0 || x1 == MAX_C || y1 == MAX_R)       //Area boundaries

                    cout << boundary;

                //setting key and door location

                else if((x1>=2 && x1<=4)&&(y1>=7 && y1<=9))         //setting door coordinates x=[2,4] , y=[7,9]

                    cout << door;

                else if(x1 == keyx && y1 == keyy){

                    if(havekey == false)

                        cout << key;

                    else

                        cout << " ";

                }

                //MAZE BRICKS

                else if ((x1 == 15 && ((y1 > 0 && y1 < 6)||(y1 > 9 && y1 < 15)))        //(x = 15 & y = [1,5])  (x = 15 & y = [10,14])

                         || (x1 == 20 && (y1 > 4 && y1 < 12))                           //x = 20 & y=[5,11]

                         ||(x1 == 10 && (y1 > 4 && y1 < 12)))                           //x = 10 & y=[5,11]

                    cout << boundary;

                else

                    cout << " ";

            }

            cout << endl;

        }



////////////////////////////////////////////////////////////////////////////////////////////////



//********************************************GAMEPLAY**********************************************//



        //condition of game over for one player

        if(yp1 == MAX_R || xp1 == MAX_C || yp1 == 0 || xp1 == 0                         //condition for boundaries

            //condition for walls

            || ((xp1 == 15 && ((yp1 > 0 && yp1 < 6)||(yp1 > 9 && yp1 < 15)))

            || (xp1 == 10 && (yp1 > 4 && yp1 < 12))

            || (xp1 == 20 && (yp1 > 4 && yp1 < 12)))){

                system("CLS");

                cout << "\nPlayer 2 won the game\nBecause player 1 collides by wall";

                break;

        }

        //condition of game over for two player

        if(yp2 == MAX_R || xp2 == MAX_C || yp2 == 0 || xp2 == 0                         //condition for boundaries

            //conditions for walls

            || ((xp2 == 15 && ((yp2 > 0 && yp2 < 6)||(yp2 > 9 && yp2 < 15)))

            || (xp2 == 20 && (yp2 > 4 && yp2 < 12))

            || (xp2 == 20 && (yp2 > 4 && yp2 < 12)))){

                system("CLS");

                cout << "\nPlayer 1 won the game\nBecause player 2 collides by wall";

                break;

        }



        //condition for winning player two

        if(yp1 == yp2 && xp1 == xp2){

            if(havekey == false){               //if p1 haven't key then it will lose by attack of p2

                system("cls");

                cout << "\n\nPLAYER 2 WON THE GAME BY ATTACKKING ON PLAYER 1.";

                break;

            }

            else{           //if p1 have key then it will lose it's key at the place of attacking and will jump to the door

                keyx = xp1;

                keyy = yp1;

                xp1 = 3;

                yp1 = 8;

                havekey = false;

                cout << "\n\nYOU LOST YOUR KEY!";

            }

        }



        //condition for getting key

        if(xp1 == keyx && yp1 == keyy){

            if(havekey == false){

            cout << "\n\nYOU GOT A KEY!";

            havekey = true;

            }

        }



        //Condition on going to door

        if((xp1>=2 && xp1<=4)&&(yp1>=7 && yp1<=9)){

            if(havekey == true){

                system("cls");

                cout << "PLAYER 1 WON THE GAME BY GOING IN EXIT!";

                break;

            }

            else

                cout << "\n\nGO AND BRING THE KEY";

        }



    }while(mov != 27);          //Press Escape Key to quit game during playing



    //for holding your screen

    int opt;

    cout << "\n\nClose by pressing 'e'";

    do{

    opt = getch();

    }while(opt != 'e');

}
