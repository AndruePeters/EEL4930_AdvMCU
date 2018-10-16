/*
 * question.h
 *
 *  Created on: Oct 4, 2018
 *      Author: druep
 */

#ifndef QUESTION_H_
#define QUESTION_H_
#include <string.h>
#include <ti/grlib/grlib.h>

#define MAX_TEXT_LENGTH 21
typedef enum {OP1, OP2, OP3} selection_t;

// offsets and positions for positioning strings
static const uint32_t QUESTION_X_OFFSET = 2; // 10 from the left
static const uint32_t OP_X_OFFSET = 10;
static const uint32_t QUESTION_Y_OFFSET = 15;
static const uint32_t OP1_Y_OFFSET = 60;
static const uint32_t OP2_Y_OFFSET = 75;
static const uint32_t OP3_Y_OFFSET = 90;
static const uint32_t CURSOR_X_OFFSET = 5;

typedef struct Question
{
    char question[MAX_TEXT_LENGTH]; // question
    char op1[MAX_TEXT_LENGTH];      // option 1
    char op2[MAX_TEXT_LENGTH];      // option 2
    char op3[MAX_TEXT_LENGTH];      // option 3
    char* ans;                      // pointer to correct answer
} Question;


void BuildQuestion(Question* q, char* qstr, char* op1str, char* op2str, char* op3str, unsigned ansNum);
char* GetOption(Question* q, selection_t sel);
void DisplayQuestion(const Question* q, Graphics_Context* context);
void DrawCursor(Graphics_Context* context, selection_t selection);
void EraseCursor(Graphics_Context* context, selection_t selection);
//
//  Builds the Question struct.
//
void BuildQuestion(Question* q, char* qstr, char* op1str, char* op2str, char* op3str, unsigned ansNum)
{

    strncpy(q->question, qstr, MAX_TEXT_LENGTH);
    strncpy(q->op1, op1str, MAX_TEXT_LENGTH);
    strncpy(q->op2, op2str, MAX_TEXT_LENGTH);
    strncpy(q->op3, op3str, MAX_TEXT_LENGTH);

    // set the pointer
    switch(ansNum)
    {
    case 1: q->ans = q->op1; break;
    case 2: q->ans = q->op2; break;
    case 3: q->ans = q->op3; break;
    default: q->ans = q->op1; break;
    }
}

char* GetOption(Question* q, selection_t sel)
{
    switch ( sel )
    {
    case OP1:   return q->op1;
    case OP2:   return q->op2;
    case OP3:   return q->op3;
    default: return 0;
    }
}
void DisplayQuestion(const Question* q, Graphics_Context* context)
{
    Graphics_clearDisplay(context);
    Graphics_drawString(context, (int8_t *)(q->question), AUTO_STRING_LENGTH, QUESTION_X_OFFSET, QUESTION_Y_OFFSET, OPAQUE_TEXT);
    // makes the cursor drawn first
    DrawCursor(context, OP1);
    Graphics_drawString(context, (int8_t *)(q->op1), AUTO_STRING_LENGTH, OP_X_OFFSET, OP1_Y_OFFSET, OPAQUE_TEXT);
    Graphics_drawString(context, (int8_t *)(q->op2), AUTO_STRING_LENGTH, OP_X_OFFSET, OP2_Y_OFFSET, OPAQUE_TEXT);
    Graphics_drawString(context, (int8_t *)(q->op3), AUTO_STRING_LENGTH, OP_X_OFFSET, OP3_Y_OFFSET, OPAQUE_TEXT);
}

void DrawCursor(Graphics_Context* context, selection_t selection)
{
    uint32_t yOffset = 0;
    // change the yOffset value depending on the choice selected
    switch(selection)
    {
    case OP1: yOffset = OP1_Y_OFFSET + 4; break;
    case OP2: yOffset = OP2_Y_OFFSET + 4; break;
    case OP3: yOffset = OP3_Y_OFFSET + 4; break;
    default:  yOffset = 0; break;
    }
    Graphics_fillCircle(context, CURSOR_X_OFFSET, yOffset, 2);
}

//
//  Erases the cursor at the OP location
//  Assumes the background color is white
//
void EraseCursor(Graphics_Context* context, selection_t selection)
{
    Graphics_setForegroundColor(context, GRAPHICS_COLOR_WHITE);
    uint32_t cursorLoc = 0;
    switch(selection)
    {
    case OP1:   cursorLoc = OP1_Y_OFFSET + 4;   break;
    case OP2:   cursorLoc = OP2_Y_OFFSET + 4;   break;
    case OP3:   cursorLoc = OP3_Y_OFFSET + 4;   break;
    default:    cursorLoc = 50;                 break;
    }

    Graphics_fillCircle(context, CURSOR_X_OFFSET, cursorLoc, 2);

    // set back to default forground color
    Graphics_setForegroundColor(context, GRAPHICS_COLOR_BLACK);
}

bool CheckAnswer(const Question* q, const char* ans)
{
    return false;
}

#endif /* QUESTION_H_ */
