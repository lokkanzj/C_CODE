#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define X 9
#define Y 9

void game(void);
void initial(char s[X][Y], int x, int y, char ste);
void print(char s[X][Y], int x, int y);
void Lay_mines(char tttttt[X][Y]);