#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() 
{
 char m[500], k[100];
 printf("enter the plaintext and keytext: ");
 fgets(m,500,stdin);
fgets(k,100,stdin);
 for(int i=0,j=0;m[i];++i,j=(j+1)%strlen(k))
 if(isalpha(m[i]))
m[i]=(m[i]-'a'+tolower(k[j])-'a')%26 +'a';
 printf("Encrypted message: %s",m);
 return 0;
}
