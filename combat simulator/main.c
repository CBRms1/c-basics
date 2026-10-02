#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ENEMIES 5

typedef struct
{
    char name[56];
    double health;
    double damage;
} Player;

typedef struct
{
    char name[56];
    double health;
    double damage;
} Enemy;

int main()
{
    int enemy_qtd = 0;
    int action = 0;
    int enemies_killed = 0;
    int enemies_alive = 0;
    Enemy enemy[MAX_ENEMIES];

    printf("COMBAT SIMULATOR\n");

    Player player;
    printf("Type your username: ");
    scanf("%s", player.name);

    srand(time(NULL));
    player.damage = (rand() % (15 - 8 + 1)) + 8;
    srand(time(NULL));
    player.health = (rand() % (150 - 100 + 1)) + 100;

    printf("%s created! Damage: %lf; Health: %lf\n\n", player.name, player.damage, player.health);

    while (player.health > 0)
    {
        if (enemies_alive == 0)
        {
            enemy_qtd = (rand() % (5 - 1 + 1)) + 1;
            enemies_alive = enemy_qtd;

            for (int i = 0; i < enemy_qtd; i++)
            {
                strcpy(enemy[i].name, "Goblin");
                enemy[i].damage = (rand() % (10 - 5 + 1)) + 5;
                enemy[i].health = (rand() % (12 - 7 + 1)) + 7;
                printf("New %s generated! Damage: %lf; Health: %lf\n", enemy[i].name, enemy[i].damage, enemy[i].health);
            }
            printf("\n");
        }

        printf("Type 1 to attack or 0 to exit: ");
        scanf("%d", &action);

        if (action == 0)
        {
            break;
        }

        if (action == 1)
        {
            int chosen_enemy;
            do
            {
                chosen_enemy = rand() % enemy_qtd;
            } while (enemy[chosen_enemy].health <= 0);

            enemy[chosen_enemy].health -= player.damage;
            player.health -= enemy[chosen_enemy].damage;

            printf("\nDETAILS:\n\n");
            printf("Damage dealt: %lf\n", player.damage);
            printf("Damage taken: %lf\n", enemy[chosen_enemy].damage);

            if (enemy[chosen_enemy].health <= 0)
            {
                printf("%s has been killed!\n", enemy[chosen_enemy].name);
                enemies_alive--;
                enemies_killed++;
            }

            printf("Enemy status:\n");
            for (int i = 0; i < enemy_qtd; i++)
            {
                if (enemy[i].health > 0)
                {
                    printf("%s             Damage: %lf; Health: %lf\n", enemy[i].name, enemy[i].damage, enemy[i].health);
                }
            }

            printf("Player status:\n");
            printf("%s             Damage: %lf; Health: %lf\n\n", player.name, player.damage, player.health);
        }
    }

    printf("Thanks for playing\n");
    printf("Enemies killed: %d\n", enemies_killed);

    return 0;
}