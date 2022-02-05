Skip to content
Search or jump to…
Pull requests
Issues
Marketplace
Explore
 
@chinnaripragada 
Your account has been flagged.
Because of that, your profile is hidden from the public. If you believe this is a mistake, contact support to have your account status reviewed.
surakasuladurgadevi
/
STRINGJ
Public
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
Create cooooG
 main
@surakasuladurgadevi
surakasuladurgadevi committed 10 hours ago 
1 parent 1e67be9 commit adeb834125400ef7a4deb58a4cb29b3320a14450
Showing  with 42 additions and 0 deletions.
 42  cooooG 
@@ -0,0 +1,42 @@
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 
int main()
{
    char s[MAX_SIZE]; 
    int i, len, vo, co;
    printf("Enter any string: ");
    gets(s);
vo = 0;
    co = 0;
    len = strlen(s);

    for(i=0; i<len; i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
        {
            switch(s[i])
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    vo++;
                    break;
                default:
                    co++;
            }
        }
    }

    printf("Total number of vowel = %d\n", vo);
    printf("Total number of consonant = %d\n", co);

    return 0;
}
