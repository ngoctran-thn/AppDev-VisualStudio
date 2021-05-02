#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// usually these information are given in a header file:
// 1.Constant definition ( e.g, #define PI ..)
// 2. Data structure definitions
// 3. Function prototypes  ( function declaration)

#define MAX 30

void input_scores(int[]);
void evaluation(int[], int[]);
void classification(int[], int[]);
void output_results(int[], int[]);

