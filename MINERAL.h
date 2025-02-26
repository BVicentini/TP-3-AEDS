#ifndef MINERAL_H
#define MINERAL_H

typedef struct
{
    char nome[50], cor[50];
    double reativ, dureza;
} Mineral;

void InicializaMineral(Mineral *mineral, char *nome, char *cor, double dureza, double reativ);

void RetornaMineral(Mineral *mineral, char *nome);

char *getNome(Mineral *mineral);
char *getCor(Mineral *mineral);
double getDureza(Mineral *mineral);
double getReatividade(Mineral *mineral);

void setNome(Mineral *mineral, char *nome);
void setCor(Mineral *mineral, char *cor);
void setReatividade(Mineral *mineral, double reativ);
void setDureza(Mineral *mineral, double dureza);

#endif