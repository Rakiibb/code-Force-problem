#include <stdio.h>

int main()

{
    int n;
    scanf("%d", &n);

    int number[n][3];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
                int check;
            scanf("%d", &check);

        if(check == 0 || check == 1){
            number[i][j] = check;
        }
        else{
            break;
        }
        }
        printf("\n");
    }

    int totalFriend = 0;
    for(int i = 0; i < n; i++){
            int total = 0;

        for(int j = 0; j < 3; j++)
        if(number[i][j] == 1){
            total++;
        }

        if(total >= 2){
                totalFriend++;
            }


    }

    printf("%d", totalFriend);




    return 0;
}
