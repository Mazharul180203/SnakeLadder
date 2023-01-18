#include <graphics.h>
#include <stdio.h>
#include <time.h>


char arr[50];
char arr1[50];
bool hassnake[101];
bool hasladder[101];
int ladderendpoint[101];
int snakeendpoint[101];


void board()
{
    int i,j=0,k=0;

    setcolor(WHITE);
    rectangle(20,20,470,470);

    for (i=0;i<10;i++)
    {

        setcolor(RED);
        line(20+j,20,20+j,470);
        line(20,20+j,470,20+j);

        j+=45;

    }
       j=0;

    for (i=100;i>90;i--)
    {

        setcolor(GREEN);

        sprintf(arr,"%d",i);
        outtextxy(35+j,40+k,arr);
        j+=45;

        if (i%10==1)
        {
            j=0;
            k+=45;
        }
    }

    for (i=81;i<=90;i++)
    {

        setcolor(RED);

        sprintf(arr,"%d",i);
        outtextxy(35+j,40+k,arr);
        j+=45;

        if (i%10==0)
        {
            j=0;
          k+=45;
        }
    }

    for (i=80;i>70;i--)
    {

        setcolor(BLUE);

        sprintf(arr,"%d",i);
        outtextxy(35+j,40+k,arr);
        j+=45;

        if (i%10==1)
        {
            j=0;
            k+=45;
        }
    }

    for (i=61;i<=70;i++)
    {

        setcolor(YELLOW);

        sprintf(arr,"%d",i);
        outtextxy(35+j,40+k,arr);
        j+=45;

        if (i%10==0)
        {
            j=0;
            k+=45;
        }
    }

    for (i=60;i>50;i--)
    {

        setcolor(3);

        sprintf(arr,"%d",i);
        outtextxy(35+j,40+k,arr);
        j+=45;

        if (i%10==1)
        {
            j=0;
            k+=45;
        }
    }

    for (i=41;i<=50;i++)
    {

        setcolor(5);

        sprintf(arr,"%d",i);
        outtextxy(35+j,40+k,arr);

        j+=45;

        if (i%10==0)
        {
            j=0;
            k+=45;
        }
    }

    for (i=40;i>30;i--)
    {

        setcolor(6);

        sprintf(arr,"%d",i);
        outtextxy(35+j,40+k,arr);
        j+=45;

        if (i%10==1)
        {
            j=0;
            k+=45;
        }
    }

    for (i=21;i<=30;i++)
    {
        setcolor(7);

        sprintf(arr,"%d",i);
        outtextxy(35+j,40+k,arr);
        j+=45;

        if (i%10==0)
        {
            j=0;
            k+=45;
        }
    }

    for (i=20;i>10;i--)
    {
        setcolor(11);

        sprintf(arr,"%d",i);
        outtextxy(35+j,40+k,arr);
        j+=45;

        if (i%10==1)
        {
            j=0;
            k+=45;
        }
    }

    for (i=1;i<=10;i++)
    {
        setcolor(10);

        sprintf(arr,"%d",i);
        outtextxy(35+j,40+k,arr);
        j+=45;

        if (i%10==0)
        {
            j=0;
            k+=45;
        }
    }

    setcolor(WHITE);

    line(165,415,300,260);
    line(166,415,301,260);
    line(167,415,302,260);
    line(185,415,320,260);
    line(186,415,321,260);
    line(187,415,322,260);
    line(210,180,305,85);
    line(230,180,325,85);
    line(230,180,325,85);



   line(231,180,326,85);
   line(232,180,327,85);
   line(233,180,328,85);

//ladder middle lower
    line(180,400,200,400);
    line(180,398,200,398);
    line(198,380,218,380);
    line(200,378,220,378);
    line(215,360,235,360);
    line(215,358,235,358);
    line(230,340,250,340);
    line(232,338,252,338);
    line(250,320,270,320);
    line(252,318,272,318);
    line(265,300,285,300);
    line(267,298,287,298);
    line(285,280,305,280);
    line(287,278,307,278);

//ladder middle higher

    line(290,100,310,100);
    line(288,102,308,102);
    line(270,120,290,120);
    line(268,122,288,122);
    line(250,140,270,140);
    line(248,142,268,142);
    line(230,160,250,160);
    line(228,162,248,162);



    //Ladder at Right Middle
    line(405,270,450,365);
    line(407,272,452,367);
    line(385,270,430,365);
    line(383,268,428,363);
    line(392,285,412,285);
    line(393,286,413,286);
    line(410,320,430,320);
    line(411,321,431,321);
    line(423,350,443,350);
    line(424,351,444,351);


    //Left Middle Ladder
    line(80,185,30,275);
    line(81,186,31,276);
    line(91,195,40,285);
    line(92,196,41,286);
    line(62,215,80,213);
    line(62,216,81,214);
    line(52,235,68,235);
    line(52,236,69,236);
    line(40,255,55,255);
    line(42,256,56,256);





   //Right Top Snake
    setfillstyle(SOLID_FILL,RED);
     circle(410,80,5);
     floodfill(410,80,WHITE);
     circle(415,85,5);
     floodfill(415,85,WHITE);
     circle(421,92,5);
     floodfill(421,92,WHITE);
     circle(422,99,5);
     floodfill(422,99,WHITE);
     circle(421,106,5);
     floodfill(421,106,WHITE);
     circle(418,113,5);
     floodfill(418,113,WHITE);
     circle(415,120,5);
     floodfill(415,120,WHITE);
     circle(408,127,5);
     floodfill(408,127,WHITE);
     circle(401,134,5);
     floodfill(401,134,WHITE);
     circle(394,141,5);
     floodfill(394,141,WHITE);
     circle(387,148,5);
     floodfill(387,148,WHITE);
     circle(384,155,5);
     floodfill(384,155,WHITE);
     circle(380,162,5);
     floodfill(380,162,WHITE);
     circle(383,169,5);
     floodfill(383,169,WHITE);
     circle(386,176,5);
     floodfill(386,176,WHITE);
     circle(389,182,5);
     floodfill(389,182,WHITE);
     circle(392,189,5);
     floodfill(392,189,WHITE);
     circle(395,196,5);
     floodfill(395,196,WHITE);
     circle(392,203,5);
     floodfill(392,203,WHITE);
     circle(389,210,5);
     floodfill(389,210,WHITE);
     circle(386,217,5);
     floodfill(386,217,WHITE);
     circle(382,222,5);
     floodfill(382,222,WHITE);
     circle(382,222,5);
     circle(378,229,5);
     floodfill(378,229,WHITE);


   //ladder At Right Bottom
    setfillstyle(SOLID_FILL,YELLOW);
    circle(370,320,5);
    floodfill(370,320,WHITE);
    circle(375,325,5);
    floodfill(375,325,WHITE);
    circle(381,332,5);
    floodfill(381,332,WHITE);
    circle(382,339,5);
    floodfill(382,339,WHITE);
    circle(381,346,5);
    floodfill(381,346,WHITE);
    circle(378,353,5);
    floodfill(378,353,WHITE);
    circle(375,360,5);
    floodfill(375,360,WHITE);
    circle(372,367,5);
    floodfill(372,367,WHITE);
    circle(369,374,5);
    floodfill(369,374,WHITE);
    circle(366,381,5);
    floodfill(366,381,WHITE);
    circle(363,388,5);
    floodfill(363,388,WHITE);
    circle(366,395,5);
    floodfill(366,395,WHITE);
    circle(369,402,5);
    floodfill(369,402,WHITE);
    circle(374,407,5);
    floodfill(374,407,WHITE);
    circle(379,412,5);
    floodfill(379,412,WHITE);
    circle(384,413,5);
    floodfill(384,413,WHITE);
    circle(385,414,5);
    floodfill(385,414,WHITE);



    setfillstyle(SOLID_FILL,GREEN);
    circle(100,40,5);
    floodfill(100,40,WHITE);
    circle(105,45,5);
    floodfill(105,45,WHITE);
    circle(111,52,5);
    floodfill(111,52,WHITE);
    circle(112,59,5);
    floodfill(112,59,WHITE);
    circle(111,66,5);
    floodfill(111,66,WHITE);
    circle(108,73,5);
    floodfill(108,73,WHITE);
    circle(105,80,5);
    floodfill(105,80,WHITE);
    circle(102,87,5);
    floodfill(102,87,WHITE);
    circle(99,94,5);
    floodfill(99,94,WHITE);
    circle(96,99,5);
    floodfill(96,99,WHITE);
    circle(95,106,5);
    floodfill(95,106,WHITE);
    circle(99,113,5);
    floodfill(99,113,WHITE);
    circle(102,118,5);
    floodfill(102,118,WHITE);
    circle(105,125,5);
    floodfill(105,125,WHITE);
    circle(108,132,5);
    floodfill(108,132,WHITE);
    circle(111,139,5);
    floodfill(111,139,WHITE);
    circle(114,146,5);
    floodfill(114,146,WHITE);
    circle(119,151,5);
    floodfill(119,151,WHITE);
    circle(124,156,5);
    floodfill(124,156,WHITE);
    circle(129,161,5);
    floodfill(129,161,WHITE);
    circle(134,166,5);
    floodfill(134,166,WHITE);
    circle(140,173,5);
    floodfill(140,173,WHITE);
    circle(141,180,5);
    floodfill(141,180,WHITE);
    circle(138,187,5);
    floodfill(138,187,WHITE);
    circle(135,194,5);
    floodfill(135,194,WHITE);
    circle(132,201,5);
    floodfill(132,201,WHITE);
    circle(129,208,5);
    floodfill(129,208,WHITE);
    circle(126,215,5);
    floodfill(126,215,WHITE);
    circle(123,222,5);
    floodfill(123,222,WHITE);
    circle(120,232,5);
    floodfill(120,232,WHITE);
    circle(117,239,5);
    floodfill(117,239,WHITE);
    circle(116,246,5);
    floodfill(116,246,WHITE);
    circle(117,253,5);
    floodfill(117,253,WHITE);
    circle(123,260,5);
    floodfill(123,260,WHITE);
    circle(128,267,5);
    floodfill(128,267,WHITE);
    circle(133,274,5);
    floodfill(133,274,WHITE);
    circle(138,281,5);
    floodfill(138,281,WHITE);
    circle(143,288,5);
    floodfill(143,288,WHITE);
    circle(149,295,5);
    floodfill(149,295,WHITE);
    circle(150,302,5);
    floodfill(150,302,WHITE);
    circle(149,309,5);
    floodfill(149,309,WHITE);
    circle(146,316,5);
    floodfill(146,316,WHITE);
    circle(143,323,5);
    floodfill(143,323,WHITE);
    circle(142,330,5);
    floodfill(142,330,WHITE);
    circle(143,337,5);
    floodfill(143,337,WHITE);
    circle(149,344,5);
    floodfill(149,344,WHITE);
    circle(148,351,5);
    floodfill(148,351,WHITE);
    circle(145,358,5);
    floodfill(145,358,WHITE);


}

void placeanotherguti(int num){

    int rownum1 = (num-1)/10;
    int y = getmaxy()-30-(45*rownum1);
    int x;

    if(rownum1 % 2 == 0)
    {
        x = 42+((num-1) % 10)*45;
    }
    else
    {
        x = 42 + (9- (num-1)%10)*45;
    }

    circle(x,y,15);
    setfillstyle(SOLID_FILL,12);
    floodfill(x,y,WHITE);

}


void placeguti(int val){
    int rownum = (val-1)/10;
    int y = getmaxy()-30-(45*rownum);
    int x;

    if(rownum % 2 == 0)
    {
        x = 42+((val-1) % 10)*45;
    }
    else
    {
        x = 42 + (9- (val-1)%10)*45;
    }

    circle(x,y,15);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(x,y,WHITE);
}

int main()
{
    printf("PRESS 1 TO KNOW THE FUNCTION OF THE GAME : \n");
    printf("OTHERWISE PRESS 2 TO TERMINATE THE GAME : \n");
    printf("OR PRESS ANY KEYWORD TO PLAY THE GAME :\n");
    int  a;
    system("color 70");
    scanf("%d",&a);
    printf("Press 1 to know the system of this game\n");

    if(a==1)
    {
        printf("*************************************************\n");
        printf("1. Enter any keybord to roll the dice\n");
        printf("2. When in ladder tail it will go to the head of the ladder\n");
        printf("3. When in the snake mouth it will go to the tail of the snake\n");
        printf("4. When the current position cross 100 the game will terminate\n");
        printf("6. We are two players play the game\n");
        printf("7. Each of the players roll the dice and his pointer will move after the next dice roll\n");
        printf("8. Then who will first cross 100 is the winner of the game\n");
        printf("9. And then the player will win the game\n");
        printf("10. So then the game will over\n");
        system("color 70");
        printf("*************************************************\n");
    }
    else if(a==2)
    {
        system("color 70");
        return 0;
    }
    else
    {

        system("color 70");
        hasladder[17] = hasladder[65]=hasladder[41]=hasladder[30]= true;
        ladderendpoint[17] = 47;
        ladderendpoint[65] = 87;
        ladderendpoint[41]=62;
        ladderendpoint[30]=49;
        hassnake[33] = hassnake[89]=hassnake[99] = true;
        snakeendpoint[33] = 12;
        snakeendpoint[89] = 53;
        snakeendpoint[99]=23;

        int gd=DETECT, gm;
        int turn=0;
        int turn1=0;
        srand(time(NULL));
        initgraph(&gd, &gm, "C:\\TC\\BGI");
        int current_score = 1;
        int current1_score=1;

        while (1)
        {
            board();
            placeguti(current_score);

            if(hasladder[current_score])
            {

                Beep(400,100);
                Beep(500,150);
                Beep(600,200);
                Beep(750,250);
                Beep(400,300);
                Beep(600,350);
                current_score = ladderendpoint[current_score];
                setcolor(12);
                outtextxy(getmaxx()-160,100,"I AM ON LADDER");
                delay(1000);

                cleardevice();
                board();
                placeguti(current_score);
            }
            else if(hassnake[current_score])
            {
                Beep(400,100);
                Beep(500,150);
                Beep(600,200);
                Beep(750,250);
                Beep(400,300);
                Beep(600,350);
                current_score = snakeendpoint[current_score];

                setcolor(12);
                outtextxy(getmaxx()-160,100,"SAVE ME PLEASE ");

                delay(1000);

                cleardevice();                //for clearing the device
                board();
                placeguti(current_score);   //call the function

            }
            getch();
            cleardevice();
            turn=rand()%6+1;   //print random number

            current_score += turn;


            if(current_score<=100)
            {
                outtextxy(getmaxx()-150, 20, " MY DICE ROLL  :");

                sprintf(arr, "%d", turn);
                outtextxy(getmaxx()-40, 20, arr);
            }

//condition for winner of the game
            if(current_score>100)
            {

                setcolor(BLUE);
                outtextxy(getmaxx()-400,100,"GAME OVER");
                setcolor(GREEN);
                outtextxy(getmaxx()-470,120,"I AM THE WINNER OF THE GAME");
                break;
            }

            outtextxy(getmaxx()-160,40,"CURR. POSITION :");
            sprintf(arr,"%d",current_score);
            outtextxy(getmaxx()-35,40,arr);

            setcolor(9);
            line(getmaxx()-164,15,getmaxx()-10,15);
            line(getmaxx()-164,60,getmaxx()-10,60);
            line(getmaxx()-164,15,getmaxx()-164,60);
            line(getmaxx()-10,15,getmaxx()-10,60);


            outtextxy(getmaxx()-164,400," ludo game by ");
            outtextxy(getmaxx()-164,420," mazharul , hamid ");
            outtextxy(getmaxx()-164,440," raihan , asif ");

            line(getmaxx()-164,400,getmaxx()-10,400);
            line(getmaxx()-164,460,getmaxx()-10,460);
            line(getmaxx()-164,400,getmaxx()-164,460);
            line(getmaxx()-10,400,getmaxx()-10,460);
//box for printing dice

            line(getmaxx()-120,250,getmaxx()-50,250);
            line(getmaxx()-120,310,getmaxx()-50,310);
            line(getmaxx()-120,250,getmaxx()-120,310);
            line(getmaxx()-50,250,getmaxx()-50,310);

            setcolor(YELLOW);
            if(turn==1)
            {
                outtextxy(getmaxx()-95,275," * ");
                outtextxy(getmaxx()-164,330,"   ok");
            }
            if(turn==2)
            {
                outtextxy(getmaxx()-100,275," *   * ");
                outtextxy(getmaxx()-164,330,"   I want more");

            }
            if(turn==3)
            {
                outtextxy(getmaxx()-110,275,"*    *    *");
                outtextxy(getmaxx()-164,330,"   it's okey");
            }
            if(turn==4)
            {
                outtextxy(getmaxx()-90,260,"*");
                outtextxy(getmaxx()-110,275," *       *");
                outtextxy(getmaxx()-90,290,"*");
                outtextxy(getmaxx()-164,330,"   good enough");
            }
            if(turn==5)
            {
                outtextxy(getmaxx()-90,260,"*");
                outtextxy(getmaxx()-110,275," *   *  *");
                outtextxy(getmaxx()-90,290,"*");
                outtextxy(getmaxx()-164,330,"   nice,I want this");

            }
            if(turn==6)
            {
                outtextxy(getmaxx()-110,265," *   *   *");
                outtextxy(getmaxx()-110,290," *   *   *");
                outtextxy(getmaxx()-164,330,"   what a good short");

            }

            board();
            placeanotherguti(current1_score);

            if(hasladder[current1_score])
            {

                Beep(400,100);
                Beep(500,150);
                Beep(600,200);
                Beep(750,250);
                Beep(400,300);
                Beep(600,350);
                current1_score = ladderendpoint[current1_score];
                setcolor(12);
                outtextxy(getmaxx()-160,100,"I AM ON LADDER");
                delay(1000);

                cleardevice();
                board();
                placeanotherguti(current1_score);
            }
            else if(hassnake[current1_score])
            {
                Beep(400,100);
                Beep(500,150);
                Beep(600,200);
                Beep(750,250);
                Beep(400,300);
                Beep(600,350);
                current1_score = snakeendpoint[current1_score];

                setcolor(12);
                outtextxy(getmaxx()-160,100,"SAVE ME PLEASE ");

                delay(1000);

                cleardevice();
                board();
                placeanotherguti(current1_score);

            }
            getch();
            cleardevice();
            turn1=rand()%6+1;

            current1_score += turn1;

            if(current1_score<=100)
            {
                outtextxy(getmaxx()-150, 20, " FR DICE ROLL  :");

                sprintf(arr1, "%d", turn1);
                outtextxy(getmaxx()-40, 20, arr1);
            }
            if(current1_score>100)
            {

                setcolor(BLUE);
                outtextxy(getmaxx()-400,100,"GAME OVER");
                setcolor(GREEN);
                outtextxy(getmaxx()-470,120,"MY FRIEND WINN THE GAME");
                break;
            }

            outtextxy(getmaxx()-160,40,"CURR. POSITION :");
            sprintf(arr1,"%d",current1_score);
            outtextxy(getmaxx()-35,40,arr1);

            setcolor(12);
            line(getmaxx()-164,15,getmaxx()-10,15);
            line(getmaxx()-164,60,getmaxx()-10,60);
            line(getmaxx()-164,15,getmaxx()-164,60);
            line(getmaxx()-10,15,getmaxx()-10,60);

//for writing the name of the the group member
            outtextxy(getmaxx()-164,400," ludo game by ");
            outtextxy(getmaxx()-164,420," mazharul , hamid ");
            outtextxy(getmaxx()-164,440," raihan , asif ");

            line(getmaxx()-164,400,getmaxx()-10,400);
            line(getmaxx()-164,460,getmaxx()-10,460);
            line(getmaxx()-164,400,getmaxx()-164,460);
            line(getmaxx()-10,400,getmaxx()-10,460);
//box for printing dice

            line(getmaxx()-120,150,getmaxx()-50,150);
            line(getmaxx()-120,210,getmaxx()-50,210);
            line(getmaxx()-120,150,getmaxx()-120,210);
            line(getmaxx()-50,150,getmaxx()-50,210);

            setcolor(YELLOW);
            if(turn1==1)
            {
                outtextxy(getmaxx()-95,175," * ");
                outtextxy(getmaxx()-164,330,"   ok");
            }
            if(turn1==2)
            {
                outtextxy(getmaxx()-100,175," *   * ");
                outtextxy(getmaxx()-164,330,"   I want more");

            }
            if(turn1==3)
            {
                outtextxy(getmaxx()-110,175,"*    *    *");
                outtextxy(getmaxx()-164,330,"   it's okey");
            }
            if(turn1==4)
            {
                outtextxy(getmaxx()-90,160,"*");
                outtextxy(getmaxx()-110,175," *       *");
                outtextxy(getmaxx()-90,190,"*");
                outtextxy(getmaxx()-164,330,"   good enough");
            }
            if(turn1==5)
            {
                outtextxy(getmaxx()-90,160,"*");
                outtextxy(getmaxx()-110,175," *   *  *");
                outtextxy(getmaxx()-90,190,"*");
                outtextxy(getmaxx()-164,330,"   nice,I want this");

            }
            if(turn1==6)
            {
                outtextxy(getmaxx()-110,165," *   *   *");
                outtextxy(getmaxx()-110,190," *   *   *");
                outtextxy(getmaxx()-164,330,"   what a good short");


        }

    }
     getch();
        closegraph();

}
}
