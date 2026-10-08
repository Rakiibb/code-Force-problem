#include <stdio.h>
#include <string.h>

int main()

{
    int n;

    scanf("%d", &n);

    char word[n][1000];

    for(int i = 0; i < n; i++){
        scanf("%s", &word[i]);
    }

    for(int i = 0; i < n; i++){
        int length = strlen(word[i]);
        char first;
        char last;

        if(length <= 10){
            printf("%s \n", word[i]);
        }
        else{


                        first = word[i][0];
                        last = word[i][length-1];

                        printf("%c%d%c \n",first, length-2, last);
                }

        }

        return 0;
    }




