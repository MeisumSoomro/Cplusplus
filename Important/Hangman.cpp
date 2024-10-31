#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
 
using namespace std;

int main() {
	
    char h,ch,ch1,ch2;
    char word[25];
    char word2[25];
 
    int l,i,ng,n,k,x,c;
 
do{
    do{
        c='\0';
        cout<<"\n\t\t ************** HANGMAN Game in C++ **************\n\n";
 
        cout<<"(E) Enter a word\n";
        cout<<"(Q) Quit\n\n\nEnter your choice (E to enter a New Word - Q to Quit the game): ";
        cin>>ch2;
       }
	   
	   while (ch2!='E' && ch2!= 'e' && ch2!='Q' && ch2!= 'q');
	   
	   if (ch2 == 'Q' || ch2=='q')  exit (0);
	   if (ch2 == 'E' || ch2=='e')
	   { 
	   cin.get();
       cout<<"\t\t\t Type the word :  ";
       cin.getline (word, 25);
	   }
	   
 if (ch2 == 'E' || ch2=='e' )
{
l=strlen(word);
char choosen[25]="\0";
n=0;k=0;
 
 for(i=0;i<=24;i++)
   {
    if (word[i]=='\0') {word2[i]='\0';break;}
    if (word[i]==' ')  {word2[i]=' ';  n++;}
    if (word[i]!=' ')  word2[i]='-';
   }
   
ng=l+2-n;
   do{
   there:  type_of_word(c);
     if (k!=0)  cout<<"\n\n\t\t\tChoosen letters : "<<choosen<<"\n";
     cout<<"\n\n\n\t\t\t"<< word2 <<"\n\n\nYou have "<<ng
     << " guesses left, choose a letter : ";
     cin>>ch; cin.get();
     
     for (i=0;i<25;i++) if (choosen[i]==ch) {
     	
     cout<<"\a\t\t !!You have choosen "<<ch<<" already!!\n";goto there;
	 }
     
	 ng--; choosen [k]=ch; choosen [k+1]=',';k+=2;
 
     for (i=0;i<=24;i++)    
     if (word[i]==ch || word[i]==ch+32 || word[i]==ch-32) word2[i]=ch;
     if (!strcmpi (word2,word)) {cout<<"\n\t\t\t      "<<strupr(word)
     <<"\n\n\t\t\tCongratulations  :-()\n"; break;}
 
    }while(ng>0 || !strcmpi (word2,word));
 
 
if (strcmpi (word2,word))  cout<<"\nSorry, maybe next time.\n\nThe word was : "
<<strupr(word)<<endl;
}
 
cout<<"\nWould you like to play again??? (Y - N) : ";
cin>>ch1;  cin.get();
 
}while (ch1=='y' || ch1=='Y');
      system("PAUSE");
      return 0;
}
 
inline void type_of_word (char f)
{
     if (f=='m') cout<<"\t\t\t\tMOVIE";
     if (f=='a') cout<<"\t\t\t\tANIMAL";
     if (f=='p') cout<<"\t\t\t\tSPORT";
     if (f=='s') cout<<"\t\t\t\tSONG";
}
