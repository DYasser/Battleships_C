#include "iostream"
#include "windows.h"
#include "string"
#include "time.h"

#define INT_MAX 999999999999

using namespace std;

int Table1[5][5] = {{0,0,0,0,0},{0,0,0,0,0}};
int Table2[5][5] = {{0,0,0,0,0},{0,0,0,0,0}};
int Table3[5][5] = {{0,0,0,0,0},{0,0,0,0,0}};

TPoints()//Three Points
    {
  Sleep(1000);
  cout << ".";
  Sleep(1000);
  cout << ".";
  Sleep(1000);
  cout << ".";
    }

int main()//Introduces the game and prompt the user to chose a gamemode
  {
  srand((unsigned)time(0));
  //Declaring variables
  string A0;
  int A1;
  int Game1();
  int Game2();

  //Introducing the game
  cout << "\n\n\t\t\t\tWelcolme to the Second Practice game.\n\t\tMy creator, this beautiful creature, had the idea to create this game.\n\n\t\t\t\t";
  system("pause");
  cout << "It's a two player game.";
  Sleep(1000);
  cout << " So, go grab a friend and let's play.";
  TPoints();
  cout << " Stop dreaming you don't have any,\njust grab ur imaginary friend and play.";
  TPoints();
  cout << " Fine, just play alone. Not everyone has the chance to have friends after all.\n\n\t\t\t\t";
  system("pause");
  cout << "Now! Do you want to know what game we are going to play ?";
  cout << "\n[TYPE Y for yes, anything else for No]\n";
  cin >> A0;

  if(A0 == "y" || A0 == "Y")
  {
    cout << "Nice";
  }

  while(A0 != "y" && A0 != "Y")
  {
    cout << "Just type 'Y' already!: ";
    cin >> A0;
  }

  cout << "\nWow! Really?!? you want to know what game we are going to play?. That's awesome.";
  cout << "\nWe are going to play battleships. Yaaaay!";
  cout << "\n\nDo you want to know the rules?\n[Type Y for Yes, anything else for no]        ";
  cin >> A0;
  if(A0 == "y" || A0 == "Y")
  {
    cout << "\nThe rules are simple you need to find the ship hidden in a 5x5 field.\nYh I know, 'Why such a small field', and the answer is quite simple.";
    cout << "\nLow Budget.. So shut your mouth and play if you want to.";
  }
  cout << "So, in what GameMode do you want to play?\n\n1_ Single Player... no comment.";
  cout << "\n2_ Multiplay, You really think I'm that stupid. I know you are playing alone you.\n";
  cout << "\n[Choose between 1 and 2]      ";
  cin >> A1;

  while(A1!=1 && A1!=2)
  {
    cout << "JUST please choose a choice between 1 and 2.\nHere: ";
    cin >> A1;
  }

  if(A1 == 1)
  {
    Game1();
    //RESTART();
  }

  else if(A1 == 2)
  {
    Game2();
    //RESTART();
  }
}

int Game1()//1 player mode
    {
  cout<<"\n\n\n\n\n\n\t\t\t\t\tWelcome to the One Player Game Mode!\n";
  cout << "The rules in this one are pretty simple. You just have to guess where the ship is hidden.\n then a score is given to you";
  cout << " depending on how good you did. \nWait I'll make it easier for you... why don't I have a normal job ... Always with";
  cout <<" the same kind of people,\n I guess this one is harder to deal with than usual. Anyway, Less guesses = more points. \nYou understand now?";
  cout <<" if not, just Press Alt+F4 it'll be better for the both of us.";
  cout << "\n\n\t\t\t\t\tLet's Start!!!";
  int PrintT();
  PrintT();
  cout << "\nHere is the table were you need to find the batlleship hidden.";

  int RandRow =  (rand()%5)+1;
  int RandCol =  (rand()%5)+1;
  int Guess = 0;

  //cout << RandRow << "-" << RandCol;

  int GuessRow = 0;
  int GuessCol = 0;

  cout << "\nI just hid the batlleship, I hope you didn't peak.\n";
  cout << "\nEnough talk, let's play!!!\nYour Guess Row (from 1 to 5): ";

  while(GuessRow != RandRow || GuessCol != RandCol)
  {
      cout << "Your Guess Row (from 1 to 5): ";
      cin >> GuessRow;

      while (GuessRow > 5 || GuessRow <1 || !cin.good())
        {
          cin.clear();
          cin.ignore(INT_MAX, '\n');
          cout << "I guess it was too hard for you to pick a number from 1 to 5: ";
          cin >> GuessRow;
        }
      cout << "\nYour Guess Column (1 to 5): ";

      cin >> GuessCol;

      while (GuessCol > 5 || GuessCol <1 || !cin.good())
        {
          cin.clear();
          cin.ignore(INT_MAX, '\n');
          cout << "I guess people nowadays don't go to school anymore, figure what you did wrong: ";
          cin >> GuessCol;
        }

    Guess++;
    cout << "Not even close lowl.\n";
    Table1[GuessRow-1][GuessCol-1] = 5;
    PrintT();
  }

  if(GuessRow == RandRow && GuessCol == RandCol)
  {
    cout << "You won, well lucky I guess.";
    cout << "\nWith a beautiful number " << Guess << " of Guesses.";
    cout << "\nWhich means, you got a score of " << 2500 - (Guess-1)*100;
    cout << "\nThe Max Score is 2500...";
  }
}

int Game2()//2 player mode
  {
    string P1Name, P2Name;
    int HRow1, HRow2, HCol1, HCol2;
    int GRow1, GRow2, GCol1, GCol2;
    int PrintT2();
    int PrintT3();

    cout << "In this Gamemode, you should be able to fight versus your friend...\nAnyway, you just have to hide your"
    <<" battleship first,\n then you just guess the row and column of the hidden battleship\n until you get the right one. So tell us your names.";
    cout << "\nPlayer 1: ";
    cin >> P1Name;
    cout << "\nSuch a good name, are you single by any chance? I mean..-\nPlayer 2: ";
    cin >> P2Name;
    cout << "\nMeh. No hard feelings.";
    cout << "\nNow let's hide our battleships.";
    cout << "\nFirst, " << P2Name << " Hide your battleship!";

    cout << "\nRow: ";
    cin >> HRow2;

    while(HRow2 > 5 || HRow2 < 1 || !cin.good()){
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "Between 1 and 5 please \n";
        cin >> HRow2;
    }

    cout << "\nCol: ";
    cin >> HCol2;

    while(HCol2 > 5 || HCol2 < 1 || !cin.good()){
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "Between 1 and 5 please \n";
        cin >> HCol2;
    }

    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "\nThen, " << P1Name << " Hide your battleship!";

    cout << "\nRow: ";
    cin >> HRow1;

    while(HRow1 > 5 || HRow1 < 1|| !cin.good()){
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "Between 1 and 5 please \n";
        cin >> HRow1;
    }

    cout << "\nCol: ";
    cin >> HCol1;

    while(HCol1 > 5 || HCol1 < 1|| !cin.good()){
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "Between 1 and 5 please \n";
        cin >> HCol1;
    }

    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    cout << "Now let's start the actual game.\n" << P1Name << " Guess your opponent's battleship location.";


  while((GRow1 != HRow2 || GCol1 != HCol2) && (GRow2 != HRow1 || GCol2 != HCol1))
    {
    cout << endl << P1Name <<" Guess a Row: ";
    cin >> GRow1;

    while ( GRow1 > 5 || GRow1 <1 || !cin.good()){
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "I guess it was too hard for you to pick a number from 1 to 5: ";
        cin >> GRow1;
      }

    cout << endl << P1Name << " Guess a Column: ";
    cin >> GCol1;

    while ( GCol1 > 5 || GCol1 <1 || !cin.good()){
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "I guess it was too hard for you to pick a number from 1 to 5: ";
        cin >> GCol1;
      }

    if(GRow1 == HRow2 && GCol1 == HCol2)
    {
      cout << "We Have a winner, " << P1Name << " just won. I always thought you would win.\n";
      break;
    }

    else
    {
      Table2[GRow1-1][GCol1-1] = 1;
      PrintT2();
    }

    cout << P2Name <<" Guess a Row: ";
    cin >> GRow2;

    while ( GRow2 > 5 || GRow2 <1 || !cin.good()){
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "I guess it was too hard for you to pick a number from 1 to 5: ";
        cin >> GRow2;
      }

    cout << endl << P2Name << " Guess a Column: ";
    cin >> GCol2;

    while ( GCol2 > 5 || GCol2 <1 || !cin.good()){
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "I guess it was too hard for you to pick a number from 1 to 5: ";
        cin >> GCol2;
      }

    if(GRow2 == HRow1 && GCol2 == HCol1)
    {
      cout << "We Have a winner, " << P2Name << " just won. I always thought you would win.\n";
    }
    else
    {
      Table3[GRow2-1][GCol2-1] = 2;
      PrintT3();
    }
    }
  }

int PrintT()//print table 1
  {
  for(int row=0; row < 5; row++)
  {
    for(int column = 0; column < 5 ;column++)
    {
      cout << " " << Table1[row][column];
    }
    cout << endl;
  }
}

int PrintT2()//print table 1
  {
  for(int row=0; row < 5; row++)
  {
    for(int column = 0; column < 5 ;column++)
    {
      cout << " " << Table2[row][column];
    }
    cout << endl;
  }
}

int PrintT3()//print table 1
  {
  for(int row=0; row < 5; row++)
  {
    for(int column = 0; column < 5 ;column++)
    {
      cout << " " << Table3[row][column];
    }
    cout << endl;
  }
}
