#include <stdio.h>
#include <string.h>

struct participant
{
    char name[255];
    int satu, dua, tiga;
};

participant* swap(participant user[],int a, int b){
    participant temp = user[a];
    user[a]= user[b];
    user[b] = temp;
    return user;
}

void test(participant user[], int len, char peserta[], int winner)
{
    int j;
    for (int i = 0; i < len; i++)
    {
        for (j = i + 1; j < len; j++)
        {
           if(user[i].tiga < user[j].tiga){
             user = swap(user, i,j);
           }
           else if(user[i].tiga == user[j].tiga){
             if(user[i].dua < user[j].dua){
                user = swap(user,i,j);
             }
             else if(user[i].dua == user[j].dua){
                if(user[i].satu < user[j].satu){
                    user = swap(user,i,j);
                }
             }
           }
        }   
    }
    bool check = 0;
    if(winner == 1){
        if(strcmp(user[0].name, peserta)==0){
            check = 1;
        }
    }
    else{
        for (int i = 0; i < winner; i++)
        {
            if(strcmp(user[i].name,peserta)==0){
                check = 1;
            }
        }
        
    }
    if(check == 1){
        printf("YA\n");
    }else{
        printf("TIDAK\n");
    }

}

int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        struct participant user[999];
        int peserta, winner;
        char check[999];
        scanf("%d %d", &peserta, &winner);
        scanf("%s", check);
        getchar();
        for (int j = 0; j < peserta; j++)
        {
            scanf("%s %d %d %d", user[j].name, &user[j].satu, &user[j].dua, &user[j].tiga);
            getchar();
        }
        test(user, peserta, check, winner);
        
    }
}