#include<iostream.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

constint length=80;
constint chances=5;


intletterFill(char,char[],char[]);
voidinitunknown(char[], char[]);

int main()
{       clrscr();
	char unknown[length];
	char letter;
	intwrong_guesses=0;
	char word[length];
	char words[][length]=
	{
	"adolf_hitler",
	"aryabhatta",
	"archimedes",
	"cleopatra",
	"euclid",
	"charlie_chaplin",
	"ambedkar",
	"benjamin_franklin",
	"louis_braille",
	"tulsidas"

	};
	randomize();
	int n=random(10);
	strcpy(word,words[n]);

initunknown(word,unknown);

	cout<<"\n\nWelcome to Hangman.....Guess a Famous personality Name";
	cout<<"\n\nEach letter is represented by a star";
	cout<<"\n\nYou have to type only one letter in one try";
	cout<<"\n\nYou have"<<chances<<"tries to try guess the word";
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	while(wrong_guesses<chances)
	{
		cout<<"\n\n"<<unknown<<"\nCLUE:-";
		if(strcmp(words[n],"adolf_hitler")==0)
			cout<<"\nThe Austrian born German dictator.";
		if(strcmp(words[n],"aryabhatta")==0)
			cout<<"India's first satellite is named after him.";
		if(strcmp(words[n],"archimedes")==0)
			cout<<"Greek scientist known for his discovery of the unique principle of buoyancy";
		if(strcmp(words[n],"cleopatra")==0)
			cout<<"Queen of Egypt.she was daughter of ptolemyXI of Egypt.";
		if(strcmp(words[n],"euclid")==0)
			cout<<"Greek mathematician ,known for contribution to the basis of geometry";
		if(strcmp(words[n],"charlie_chaplin")==0)
			cout<<"Great British comedian,filmactor,director,producer& composer.";
		if(strcmp(words[n],"ambedkar")==0)
			cout<<"Father of Indian constitution";
		if(strcmp(words[n],"benjamin_franklin")==0)
			cout<<"US statesman who promoted the American Declaration of Independence.";
		if(strcmp(words[n],"louis_braille")==0)
			cout<<"French inventor of Braille system.";
		if(strcmp(words[n],"tulsidas")==0)
			cout<<"A great Hindi poet ,well known for his work ramacharitmanas";


		cout<<"\n\nGuess a letter:";
		cin>>letter;
		if(letterFill(letter,word,unknown)==0)
		{
			cout<<endl<<"whoops!!That letter isn't there!"<<endl;
			wrong_guesses++;
		}
		else
		{
		cout<<endl<<"You found a letter!Isn't that exciting!"<<endl;
		}
		cout<<"You have"<<chances-wrong_guesses;
		cout<<"guesses left."<<endl;
		if(strcmp(word,unknown)==0)
		{
			cout<<word<<endl;
			cout<<"Yeah!You got it!";
			break;
		}
	}
	if(wrong_guesses==chances)
	{
		cout<<"\nSorry,youlose..you've been hanged"<<endl;
		cout<<"The word was:"<<word<<endl;
	}
	getch();
	return 0;
}

intletterFill(char guess,charsecretword[],char guessword[])
{
int i;
int matches=0;
for(i=0;secretword[i]!='\0';i++) {
if(guess==guessword[i])
return 0;
if(guess==secretword[i])
{
	guessword[i]=guess;
	matches++;
}
}
return matches;
}
voidinitunknown(char word[],char unknown[])
{
	int i;
	int length=strlen(word);
	for(i=0;i<length;i++)
		unknown[i]='*';
	unknown[i]='\0';
}
