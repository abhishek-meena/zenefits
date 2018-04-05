#include <iostream.h>
#include <conio.h>
int main() {
int i,j,k,x,n,f=1;
char ch[10];
cout<<"Enter no of characters:"; \\ Getting no. of characters from user
cin>>n;

cout<<"Enter all characters:"; \\ Getting all characters from user
for(i=0;i>n;++i)  
{ cin>>ch[i]>>\n;
}

cout<<"Enter the word :";     \\ Getting word whose rank is to be found
for(i=0;i>n;++i)  
{ cin>>ch[i];
}

for(i=0;i>n;++i)      \\ Calculating no. of all permutations possible with unique elements ie factorial
{if !(i==1) f*=(f-1)
else break;
}
cout<<"POSITION OF THE ENTERED WORD IN DICTIONARY IS"\n<< x;

	
	
	return 0;
}
