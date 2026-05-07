#include <stdio.h>

struct character {
    char *name;
    char *attribute;
    int hp;
    int mp;
    int attack;
    int defense;
};

int main() {
    struct character hero = {"勇者", "光", 120, 40, 20, 25};
    struct character wizard = {"魔法使い", "風", 80, 60, 100, 10};

    printf("--- キャラクター一覧 ---\n");

    printf("名前: %s\n", hero.name);
    printf("属性: %s\n", hero.attribute);
    printf("HP: %d\n", hero.hp);
    printf("MP: %d\n", hero.mp);
    printf("攻撃力: %d\n", hero.attack);
    printf("防御力: %d\n\n", hero.defense);

    printf("名前: %s\n", wizard.name);
    printf("属性: %s\n", wizard.attribute);
    printf("HP: %d\n", wizard.hp);
    printf("MP: %d\n", wizard.mp);
    printf("攻撃力: %d\n", wizard.attack);
    printf("防御力: %d\n\n", wizard.defense);

    struct character doremi = {"どれみ", "全", 500, 200, 90, 40};

    printf("名前: %s\n", doremi.name);
    printf("属性: %s\n", doremi.attribute);
    printf("HP: %d\n", doremi.hp);
    printf("MP: %d\n", doremi.mp);
    printf("攻撃力: %d\n", doremi.attack);
    printf("防御力: %d\n\n", doremi.defense);

    struct character knight = {"騎士", "炎", 140, 50, 20, 60};
    struct character thief = {"盗賊", "水", 90, 55, 10, 20};

    printf("名前: %s\n", knight.name);
    printf("HP: %d\n", knight.hp);
    printf("MP: %d\n", knight.mp);
    printf("攻撃力: %d\n", knight.attack);
    printf("防御力: %d\n\n", knight.defense);

    printf("名前: %s\n", thief.name);
    printf("HP: %d\n", thief.hp);
    printf("MP: %d\n", thief.mp);
    printf("攻撃力: %d\n", thief.attack);
    printf("防御力: %d\n", thief.defense);

    return 0;
}
