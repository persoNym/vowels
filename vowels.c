#include<stdio.h>
/*
Program that counts the numbers of vowels, keystrokes and letters in a sentence
last modified in Fall 2012
Victoria C*/

int main(){

char sent[256];
int i,v,k,s,l;
v=k=l=s=0;

    puts( "\n Counting" );
    puts( "---------------------------------");    

    printf("Enter a sentence:");
    gets(sent);
    for(i=0;sent[i]!='\0';++i)
    {

    
        if(sent[i]=='a' || sent[i]=='e' || sent[i]=='i' || sent[i]=='o' || sent[i]=='u' || 
	sent[i]=='A' || sent[i]=='E' || sent[i]=='I' || sent[i]=='O' || sent[i]=='U')
            ++v;
        else if((sent[i]>='a'&& sent[i]<='z') || (sent[i]>='A'&& sent[i]<='Z'))
            ++l;
        else if (sent[i]==' ')
            ++s;
	else if (sent[i]>='0' && sent[i]<='9')
	    ++k;
    }
    
    puts(sent);
    printf("Vowels: %d",v);
    printf("\nKeystroke: %d",v+l+k+s);
    printf("\nletters: %d\n",l+v);

return 0;
}
