#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// The string length of name
#define LEN_NAME 50

// A structure represents the information of each student
struct student {
    // The name string
    // Parameter: name (string)
    char name[LEN_NAME];
    // The score of English
    // Parameter: english (integer)
    int english;
    // The score of Math
    // Parameter: math (integer)
    int math;
    // Pointer to next student
    // Parameter: next (pointer)
    struct student* next;
};

/// <summary>
/// Convert the given 2 arrays into a linked list using 'student' structure.
/// </summary>
/// <param name="names">The name list.</param>
/// <param name="scores">The score list</param>
/// <returns>The first node of the created linked list.</returns>
struct student* convert(char names[][50], int scores[][2]) {
    struct student* first = (struct student*)malloc(sizeof(struct student));
    struct student* now = first;
    for (int i = 0; strlen(names[i]); i++) {
        if (i) {
            now->next = (struct student*)malloc(sizeof(struct student));
            now = now->next;
        }
        strcpy(now->name, names[i]);
        now->english = scores[i][0];
        now->math = scores[i][1];
        now->next = NULL;
    }
    return first;
}