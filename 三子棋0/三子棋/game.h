#pragma once
#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

#define ROW 3 
#define COL 3

void menu();//�˵���ӡ
void game();//��Ϸ����
void InitBoard(char board[ROW][COL], int row, int col);//��ʼ������
void DispalyBoard(char board[ROW][COL], int row, int col);//��ӡ����
void PlayerMove(char board[ROW][COL], int row, int col);//�������
void ComputerMove(char board[ROW][COL], int row, int col);//��������
char IsWin(char board[ROW][COL], int row, int col);//�ж���Ӯ
int IsFull(char board[ROW][COL], int row, int col);//�жϺ���