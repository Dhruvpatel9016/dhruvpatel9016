#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<conio.h>
using namespace std;

class RoPeSi
{
	public:
		int pChoice,cChoice,i,j,k,round,fScore;
		int pScore = 0, cScore = 0;
		string pName;
		void name();
		void roundChoise();
		void rounds();
		void result();
};

void RoPeSi::name()
{

	 cout<<"\n\t\t\t_#_#_#_#_#_#_Rock, Paper & Scissor Game_#_#_#_#_#_#_ ";

	 cout<<endl<<endl<<"\n\t\t\t\t_#_#_#_#_#_#_Rules_#_#_#_#_#_#_";
	 cout<<endl<<"\t\t\t";
	 for(i=0;i<=25;i++)
	 {
	 	cout<<"-_";
	 }

	 cout<<endl<<endl<<"\n\t\t\t 1)Rock Beats Scissor,But Loses to Paper.";
	 cout<<endl<<endl<<"\t\t\t 2)Paper Beats Rock,But Loses to Scissor.";
	 cout<<endl<<endl<<"\t\t\t 3)Scissor Beats Paper,But Loses to Rock.";
	 cout<<endl<<endl<<"\t\t\t 4)If Both Choose Same Then It's A Tie.";
	 
	 cout<<endl<<"\t\t\t";
	 for(i=0;i<=25;i++)
	 {
	 	cout<<"-_";
	 }
	 cout<<endl<<endl<<"\n\t\t\t!-_-_-_-!  Enter Your Name : ";
	 getline(cin,pName);
}

void RoPeSi::roundChoise()
{

	 cout<<"\n\t\t\t_#_#_#_#_#_#_Rock, Paper & Scissor Game_#_#_#_#_#_#_ ";
	
	 cout<<endl<<endl<<"\t\t\tDear "<<pName<<", ";
	 cout<<endl<<"\t\t\t\tHow many Rounds You Want To Play : !-_-_-_-!  ";
	 cin>>round; 	
}


void RoPeSi::rounds()
{

	for(i=1;i<=round;i++)
	{
		system("cls");	

		cout<<"\n\t\t\t\t_#_#_#_#_#_#_ Round _#_#_#_#_#_#_ : "<<i;

		cout<<endl<<endl<<"\t\t\t!-_-_-_-!> "<<pName<<"'s Score : "<<pScore;		
		cout<<endl<<"\t\t\t!-_-_-_-!> Computer's Score : "<<cScore;

		do
		{
			cout<<endl<<endl<<"\t\t\t@@@@@--> 1) Rock";
			cout<<endl<<endl<<"\t\t\t@@@@@--> 2) Paper";
			cout<<endl<<endl<<"\t\t\t@@@@@--> 3) Scissor";
			
			cout<<endl<<endl<<"\t\t\t!_$$$--> Select Your Choice : ";	
			cin>>pChoice;
			
			if(pChoice == 1)
			{
				cout<<endl<<"\t\t\t\t---> You Select Rock.";
			}
			else if(pChoice == 2)
			{
				cout<<endl<<"\t\t\t\t---> You Select Paper.";
			}
			else if(pChoice == 3)
			{
				cout<<endl<<"\t\t\t\t---> You Select Scissor.";
			}
			else
			{
				cout<<endl<<"\t\t\t\t---> *ERROR 404*";
				cout<<endl<<"\t\t\t\t\tUPPS !!!! You Enter Wrong Digit.";
				
				cout<<endl<<endl<<"\t\t\t\t!_$$$--> Please Enter Again : ";
				cin>>pChoice;
			}

			srand(time(0));
			cChoice = (rand()%3)+1;
			
			cout<<endl<<endl<<"\t\t\t!_$$$--> Computer Choice : "<<cChoice;
			if(cChoice == 1)
			{
				cout<<endl<<endl<<"\t\t\t\t---> Computer Select Rock.";
			}
			else if(cChoice == 2)
			{
				cout<<endl<<endl<<"\t\t\t\t---> Computer Select Paper.";
			}
			else if(cChoice == 3)
			{
				cout<<endl<<endl<<"\t\t\t\t---> Computer Select Scissor.";
			}			
		}		
		
		while(pChoice != 1 && pChoice != 2 && pChoice != 3);
		{
			if(pChoice == 1 && cChoice == 3)
			{
				cout<<endl<<endl<<"\t\t\t";
		for(j=0;j<52;j++)
		{
			cout<<"=";
		}
				cout<<endl<<endl<<"\t\t\t\t\t    You Won.";
				pScore++;	
			}
			else if(pChoice == 2 && cChoice == 1)
			{
				cout<<endl<<endl<<"\t\t\t";
		for(j=0;j<52;j++)
		{
			cout<<"=";
		}
				cout<<endl<<endl<<"\t\t\t\t\t    You Won.";
				pScore++;	
			}
			else if(pChoice == 3 && cChoice == 2)
			{
				cout<<endl<<endl<<"\t\t\t";
		for(j=0;j<52;j++)
		{
			cout<<"=";
		}
				cout<<endl<<endl<<"\t\t\t\t\t    You Won.";
				pScore++;	
			}
			else if(pChoice == cChoice)
			{
				cout<<endl<<endl<<"\t\t\t";
		for(j=0;j<52;j++)
		{
			cout<<"=";
		}
				cout<<endl<<endl<<"\t\t\t\t\t    It's a Tie";
			}
			else
			{
				cout<<endl<<endl<<"\t\t\t";
				for(j=0;j<52;j++)
		{
			cout<<"=";
		}
				cout<<endl<<endl<<"\t\t\t\t\t UPPS !!! Computer Won.";
				cScore++;	
			}
			cout<<endl<<endl<<"\t\t\t";
		for(j=0;j<52;j++)
		{
			cout<<"=";
		}
			cout<<endl<<endl<<"\t\t\t";
		
			cout<<endl<<endl<<"\t\t\t!-_-_-_-!> Press any Key to Continue...";
			getch();
		}
	}
}
void RoPeSi::result()
{
	system("cls");

		cout<<"\n\t\t\t\t_#_#_#_#_#_#_ Game Result _#_#_#_#_#_#_ ";
		
		
	if(pScore>cScore)
	{
		cout<<endl<<endl<<"\t\t\t!-_-_-_-!> Your Score is : "<<pScore<<".";
		cout<<endl<<endl<<"\t\t\t!-_-_-_-!> Computer's Score is : "<<cScore<<".";
		cout<<endl<<endl<<"\t\t\t";
		for(i=0;i<25;i++)
		{
			cout<<"-_";
		}
		cout<<endl<<endl<<"\t\t\t!-_-_-_-!> Congratulations, # "<<pName<<" # You Won The Game.";
		cout<<endl<<endl<<"\t\t\t";
		for(i=0;i<25;i++)
		{
			cout<<"-_";
		}		
	}
	else if(pScore<cScore)
	{
		cout<<endl<<endl<<"\t\t\t!-_-_-_-!> Your Score is : "<<pScore<<".";
		cout<<endl<<endl<<"\t\t\t!-_-_-_-!> Computer's Score is : "<<cScore<<".";
		cout<<endl<<endl<<"\t\t\t";
		for(i=0;i<25;i++)
		{
			cout<<"-_";
		}
		cout<<endl<<endl<<"\t\t\t!-_-_-_-!UPPS !!!,\n\n\t\t\t\t Sorry(*_*)\n\t\t\t\t\t Better Luck Next Time.";
		cout<<endl<<endl<<"\t\t\t";
		for(i=0;i<25;i++)
		{
			cout<<"-_";
		}
	}
	else
	{
		cout<<endl<<endl<<"\t\t\t!-_-_-_-!> Your Score is : "<<pScore<<".";
		cout<<endl<<endl<<"\t\t\t!-_-_-_-!> Computer's Score is : "<<cScore<<".";
		cout<<endl<<endl<<"\t\t\t";
		for(i=0;i<52;i++)
		{
			cout<<"-_";
		}
		cout<<endl<<endl<<"\t\t\t!-_-_-_-!> It's a Tie.";
		cout<<endl<<endl<<"\t\t\t Because Your Score and Computer's Score Are Equal.";
		cout<<endl<<endl<<"\t\t\t";
		for(i=0;i<25;i++)
		{
			cout<<"-_";
		}
	}
}

int main()
{
	RoPeSi game;

	game.name();
	game.roundChoise();
	game.rounds();
	game.result();
	return 0;
}