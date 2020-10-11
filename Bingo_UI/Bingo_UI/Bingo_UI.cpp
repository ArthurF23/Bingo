// HelloWindowsDesktop.cpp
// compile with: /D_UNICODE /DUNICODE /DWIN32 /D_WINDOWS /c
#pragma warning(disable: 4996)
#include <windows.h>
#include <Windows.h>
#include <windowsx.h>
#include <stdlib.h>
#include <string.h>
#include <tchar.h>
#include <string>
#include <atlstr.h>
#include <thread>
#include "bingo.h"
using namespace std;

HWND start;
HWND draw_new;

HWND card_1_btn_1;
HWND card_1_btn_2;
HWND card_1_btn_3;
HWND card_1_btn_4;
HWND card_1_btn_5;
HWND card_1_btn_6;
HWND card_1_btn_7;
HWND card_1_btn_8;
HWND card_1_btn_9;
HWND card_1_btn_10;
HWND card_1_btn_11;
HWND card_1_btn_12;
HWND card_1_btn_13;
HWND card_1_btn_14;
HWND card_1_btn_15;
HWND card_1_btn_16;
HWND card_1_btn_17;
HWND card_1_btn_18;
HWND card_1_btn_19;
HWND card_1_btn_20;
HWND card_1_btn_21;
HWND card_1_btn_22;
HWND card_1_btn_23;
HWND card_1_btn_24;
HWND card_1_btn_25;
//\//////////////////////
HWND card_2_btn_1;
HWND card_2_btn_2;
HWND card_2_btn_3;
HWND card_2_btn_4;
HWND card_2_btn_5;
HWND card_2_btn_6;
HWND card_2_btn_7;
HWND card_2_btn_8;
HWND card_2_btn_9;
HWND card_2_btn_10;
HWND card_2_btn_11;
HWND card_2_btn_12;
HWND card_2_btn_13;
HWND card_2_btn_14;
HWND card_2_btn_15;
HWND card_2_btn_16;
HWND card_2_btn_17;
HWND card_2_btn_18;
HWND card_2_btn_19;
HWND card_2_btn_20;
HWND card_2_btn_21;
HWND card_2_btn_22;
HWND card_2_btn_23;
HWND card_2_btn_24;
HWND card_2_btn_25;

HWND bingo_btn;

bool card_1_drawn = false;

bool card_1_btn_1_clicked = false;
bool card_1_btn_2_clicked = false;
bool card_1_btn_3_clicked = false;
bool card_1_btn_4_clicked = false;
bool card_1_btn_5_clicked = false;
bool card_1_btn_6_clicked = false;
bool card_1_btn_7_clicked = false;
bool card_1_btn_8_clicked = false;
bool card_1_btn_9_clicked = false;
bool card_1_btn_10_clicked = false;
bool card_1_btn_11_clicked = false;
bool card_1_btn_12_clicked = false;
bool card_1_btn_13_clicked = false;
bool card_1_btn_14_clicked = false;
bool card_1_btn_15_clicked = false;
bool card_1_btn_16_clicked = false;
bool card_1_btn_17_clicked = false;
bool card_1_btn_18_clicked = false;
bool card_1_btn_19_clicked = false;
bool card_1_btn_20_clicked = false;
bool card_1_btn_21_clicked = false;
bool card_1_btn_22_clicked = false;
bool card_1_btn_23_clicked = false;
bool card_1_btn_24_clicked = false;
bool card_1_btn_25_clicked = false;

bool card_2_btn_1_clicked = false;
bool card_2_btn_2_clicked = false;
bool card_2_btn_3_clicked = false;
bool card_2_btn_4_clicked = false;
bool card_2_btn_5_clicked = false;
bool card_2_btn_6_clicked = false;
bool card_2_btn_7_clicked = false;
bool card_2_btn_8_clicked = false;
bool card_2_btn_9_clicked = false;
bool card_2_btn_10_clicked = false;
bool card_2_btn_11_clicked = false;
bool card_2_btn_12_clicked = false;
bool card_2_btn_13_clicked = false;
bool card_2_btn_14_clicked = false;
bool card_2_btn_15_clicked = false;
bool card_2_btn_16_clicked = false;
bool card_2_btn_17_clicked = false;
bool card_2_btn_18_clicked = false;
bool card_2_btn_19_clicked = false;
bool card_2_btn_20_clicked = false;
bool card_2_btn_21_clicked = false;
bool card_2_btn_22_clicked = false;
bool card_2_btn_23_clicked = false;
bool card_2_btn_24_clicked = false;
bool card_2_btn_25_clicked = false;


#define LBut                  0x0201
#define RBut                  0x0002

#define startbtn_ID 5000
#define draw_new_ID 5100
#define bingo_btn_ID 1000

#define card_1_btn_1_ID 6000
#define card_1_btn_2_ID 6010
#define card_1_btn_3_ID 6020
#define card_1_btn_4_ID 6030
#define card_1_btn_5_ID 6040
#define card_1_btn_6_ID 6050
#define card_1_btn_7_ID 6060
#define card_1_btn_8_ID 6070
#define card_1_btn_9_ID 6080
#define card_1_btn_10_ID 6090
#define card_1_btn_11_ID 6100
#define card_1_btn_12_ID 6110
#define card_1_btn_13_ID 6120
#define card_1_btn_14_ID 6130
#define card_1_btn_15_ID 6140
#define card_1_btn_16_ID 6150
#define card_1_btn_17_ID 6160
#define card_1_btn_18_ID 6170
#define card_1_btn_19_ID 6180
#define card_1_btn_20_ID 6190
#define card_1_btn_21_ID 6200
#define card_1_btn_22_ID 6210
#define card_1_btn_23_ID 6220
#define card_1_btn_24_ID 6230
#define card_1_btn_25_ID 6240

#define card_2_btn_1_ID 6250
#define card_2_btn_2_ID 6260
#define card_2_btn_3_ID 6270
#define card_2_btn_4_ID 6280
#define card_2_btn_5_ID 6290
#define card_2_btn_6_ID 6300
#define card_2_btn_7_ID 6310
#define card_2_btn_8_ID 6320
#define card_2_btn_9_ID 6330
#define card_2_btn_10_ID 6340
#define card_2_btn_11_ID 6350
#define card_2_btn_12_ID 6360
#define card_2_btn_13_ID 6370
#define card_2_btn_14_ID 6380
#define card_2_btn_15_ID 6390
#define card_2_btn_16_ID 6400
#define card_2_btn_17_ID 6410
#define card_2_btn_18_ID 6420
#define card_2_btn_19_ID 6430
#define card_2_btn_20_ID 6440
#define card_2_btn_21_ID 6450
#define card_2_btn_22_ID 6460
#define card_2_btn_23_ID 6470
#define card_2_btn_24_ID 6480
#define card_2_btn_25_ID 6490
// Global variables
string ball = generate::ball(false);
//string card[25];

int card_1_start_x = 10;
int card_1_start_y = 140;


int btn_width = 50;
int btn_height = 50;
 

int card_2_start_x = (1000 - (btn_width * 2) - 180);
int card_2_start_y = 140;

void draw_card_1(int x, int y, int width, int height, HWND hWnd) {  
    TCHAR texts[25];
    _tcscpy_s(texts, CA2T(player_1::card[0].c_str()));

    card_1_btn_1 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x,        // x position 
        y,         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_1_btn_1_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_1::card[1].c_str()));
    card_1_btn_2 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + width,        // x position 
        y,         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_1_btn_2_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed
    _tcscpy_s(texts, CA2T(player_1::card[2].c_str()));
    card_1_btn_3 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + (width * 2),        // x position 
        y,         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_1_btn_3_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_1::card[3].c_str()));
    card_1_btn_4 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + (width * 3),        // x position 
        y,         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_1_btn_4_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed
    _tcscpy_s(texts, CA2T(player_1::card[4].c_str()));
    card_1_btn_5 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + (width * 4),        // x position 
        y,         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_1_btn_5_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed
    //\//////////////////////////////////////////////////////////
    _tcscpy_s(texts, CA2T(player_1::card[5].c_str()));
    card_1_btn_6 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x,        // x position 
        y + height,         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_1_btn_6_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_1::card[6].c_str()));
    card_1_btn_7 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + (width),        // x position 
        y + height,         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_1_btn_7_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_1::card[7].c_str()));
    card_1_btn_8 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + (width * 2),        // x position 
        y + height,         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_1_btn_8_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_1::card[8].c_str()));
    card_1_btn_9 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + (width * 3),        // x position 
        y + height,         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_1_btn_9_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_1::card[9].c_str()));
    card_1_btn_10 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + (width * 4),        // x position 
        y + height,         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_1_btn_10_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_1::card[10].c_str()));
    card_1_btn_11 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x,        // x position 
        y + (height * 2),         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_1_btn_11_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_1::card[11].c_str()));
    card_1_btn_12 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + width,        // x position 
        y + (height * 2),         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_1_btn_12_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_1::card[12].c_str()));
    card_1_btn_13 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + (width * 2),        // x position 
        y + (height * 2),         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_1_btn_13_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_1::card[13].c_str()));
    card_1_btn_14 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + (width * 3),        // x position 
        y + (height * 2),         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_1_btn_14_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_1::card[14].c_str()));
    card_1_btn_15 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + (width * 4),        // x position 
        y + (height * 2),         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_1_btn_15_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_1::card[15].c_str()));
    card_1_btn_16 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x,        // x position 
        y + (height * 3),         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_1_btn_16_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_1::card[16].c_str()));
    card_1_btn_17 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + (width),        // x position 
        y + (height * 3),         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_1_btn_17_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_1::card[17].c_str()));
    card_1_btn_18 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + (width * 2),        // x position 
        y + (height * 3),         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_1_btn_18_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_1::card[18].c_str()));
    card_1_btn_19 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + (width * 3),        // x position 
        y + (height * 3),         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_1_btn_19_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_1::card[19].c_str()));
    card_1_btn_20 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + (width * 4),        // x position 
        y + (height * 3),         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_1_btn_20_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_1::card[20].c_str()));
    card_1_btn_21 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x,        // x position 
        y + (height * 4),         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_1_btn_21_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_1::card[21].c_str()));
    card_1_btn_22 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + (width),        // x position 
        y + (height * 4),         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_1_btn_22_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_1::card[22].c_str()));
    card_1_btn_23 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + (width * 2),        // x position 
        y + (height * 4),         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_1_btn_23_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_1::card[23].c_str()));
    card_1_btn_24 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + (width * 3),        // x position 
        y + (height * 4),         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_1_btn_24_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_1::card[24].c_str()));
    card_1_btn_25 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + (width * 4),        // x position 
        y + (height * 4),         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_1_btn_25_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed
    card_1_drawn = true;
};

void draw_card_2(int x, int y, int width, int height, HWND hWnd) {
    TCHAR texts[25];
    _tcscpy_s(texts, CA2T(player_2::card[0].c_str()));                                                     
    card_2_btn_1 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x,        // x position 
        y,         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_2_btn_1_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed
    _tcscpy_s(texts, CA2T(player_2::card[1].c_str()));
    card_2_btn_2 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + width,        // x position 
        y,         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_2_btn_2_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_2::card[2].c_str()));
    card_2_btn_3 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + (width * 2),        // x position 
        y,         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_2_btn_3_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed


    _tcscpy_s(texts, CA2T(player_2::card[3].c_str()));
    card_2_btn_4 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + (width * 3),        // x position 
        y,         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_2_btn_4_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_2::card[4].c_str()));
    card_2_btn_5 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + (width * 4),        // x position 
        y,         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_2_btn_5_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_2::card[5].c_str()));
    card_2_btn_6 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x,        // x position 
        y + height,         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_2_btn_6_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed
    _tcscpy_s(texts, CA2T(player_2::card[6].c_str()));
    card_2_btn_7 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + width,        // x position 
        y + height,         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_2_btn_7_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_2::card[7].c_str()));
    card_2_btn_8 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + (width * 2),        // x position 
        y + height,         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_2_btn_8_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed


    _tcscpy_s(texts, CA2T(player_2::card[8].c_str()));
    card_2_btn_9 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + (width * 3),        // x position 
        y + height,         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_2_btn_9_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_2::card[9].c_str()));
    card_2_btn_10 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + (width * 4),        // x position 
        y + height,         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_2_btn_10_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_2::card[10].c_str()));
    card_2_btn_11 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x,        // x position 
        y + (height * 2),         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_2_btn_11_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_2::card[11].c_str()));
    card_2_btn_12 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + (width),        // x position 
        y + (height * 2),         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_2_btn_12_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_2::card[12].c_str()));
    card_2_btn_13 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + (width * 2),        // x position 
        y + (height * 2),         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_2_btn_13_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_2::card[13].c_str()));
    card_2_btn_14 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + (width * 3),        // x position 
        y + (height * 2),         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_2_btn_14_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_2::card[14].c_str()));
    card_2_btn_15 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + (width * 4),        // x position 
        y + (height * 2),         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_2_btn_15_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_2::card[15].c_str()));
    card_2_btn_16 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x,        // x position 
        y + (height * 3),         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_2_btn_16_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_2::card[16].c_str()));
    card_2_btn_17 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + (width),        // x position 
        y + (height * 3),         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_2_btn_17_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_2::card[17].c_str()));
    card_2_btn_18 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + (width * 2),        // x position 
        y + (height * 3),         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_2_btn_18_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_2::card[18].c_str()));
    card_2_btn_19 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + (width * 3),        // x position 
        y + (height * 3),         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_2_btn_19_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_2::card[19].c_str()));
    card_2_btn_20 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + (width * 4),        // x position 
        y + (height * 3),         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_2_btn_20_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_2::card[20].c_str()));
    card_2_btn_21 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x,        // x position 
        y + (height * 4),         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_2_btn_21_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_2::card[21].c_str()));
    card_2_btn_22 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + (width),        // x position 
        y + (height * 4),         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_2_btn_22_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_2::card[22].c_str()));
    card_2_btn_23 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + (width * 2),        // x position 
        y + (height * 4),         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_2_btn_23_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_2::card[23].c_str()));
    card_2_btn_24 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + (width * 3),        // x position 
        y + (height * 4),         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_2_btn_24_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    _tcscpy_s(texts, CA2T(player_2::card[24].c_str()));
    card_2_btn_25 = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        (LPCWSTR)texts,        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        x + (width * 4),        // x position 
        y + (height * 4),         // y position 
        width,        // Button width
        height,        // Button height
        hWnd,     // Parent window
        (HMENU)card_2_btn_25_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed
}

// The main window class name.
static TCHAR szWindowClass[] = _T("DesktopApp");

// The string that appears in the application's title bar.
static TCHAR szTitle[] = _T("Bingo");


HINSTANCE hInst;

// Forward declarations of functions included in this code module:
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);


int CALLBACK WinMain(
    _In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPSTR     lpCmdLine,
    _In_ int       nCmdShow
)
{
    WNDCLASSEX wcex;

    wcex.cbSize = sizeof(WNDCLASSEX);
    wcex.style = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc = WndProc;
    wcex.cbClsExtra = 0;
    wcex.cbWndExtra = 0;
    wcex.hInstance = hInstance;
    wcex.hIcon = LoadIcon(hInstance, IDI_APPLICATION);
    wcex.hCursor = LoadCursor(NULL, IDC_ARROW);
    wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    wcex.lpszMenuName = NULL;
    wcex.lpszClassName = szWindowClass;
    wcex.hIconSm = LoadIcon(wcex.hInstance, IDI_APPLICATION);

    if (!RegisterClassEx(&wcex))
    {
        MessageBox(NULL,
            _T("Call to RegisterClassEx failed!"),
            _T("Window Template"),
            NULL);

        return 1;
    }

    // Store instance handle in our global variable
    hInst = hInstance;

    // The parameters to CreateWindow explained:
    // szWindowClass: the name of the application
    // szTitle: the text that appears in the title bar
    // WS_OVERLAPPEDWINDOW: the type of window to create
    // CW_USEDEFAULT, CW_USEDEFAULT: initial position (x, y)
    // 500, 100: initial size (width, length)
    // NULL: the parent of this window
    // NULL: this application does not have a menu bar
    // hInstance: the first parameter from WinMain
    // NULL: not used in this application
    HWND hWnd = CreateWindow(
        szWindowClass,
        szTitle,
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT,
        1000, 700,
        NULL,
        NULL,
        hInstance,
        NULL
    );
    

    if (!hWnd)
    {
        MessageBox(NULL,
            _T("Call to CreateWindow failed!"),
            _T("Window Template"),
            NULL);

        return 1;
    }
    start = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        L"Start?",        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        10,        // x position 
        40,         // y position 
        50,        // Button width
        50,        // Button height
        hWnd,     // Parent window
        (HMENU)startbtn_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    draw_new = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        L"Draw new ball",        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        60,        // x position 
        40,         // y position 
        100,        // Button width
        50,        // Button height
        hWnd,     // Parent window
        (HMENU)draw_new_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed
    bingo_btn = CreateWindow(
        L"BUTTON",  // Predefined class; Unicode assumed
        L"BINGO",        // Text will be defined later
        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
        60 + 100,        // x position 
        40,         // y position 
        100,        // Button width
        50,        // Button height
        hWnd,     // Parent window
        (HMENU)bingo_btn_ID,       // No menu
        (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
        NULL);      // Pointer not needed

    // The parameters to ShowWindow explained:
    // hWnd: the value returned from CreateWindow
    // nCmdShow: the fourth parameter from WinMain
    ShowWindow(hWnd, nCmdShow);
    UpdateWindow(hWnd);

   
    // Main message loop:
    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return (int)msg.wParam;
}




string placehold_winner = "";


//  FUNCTION: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  PURPOSE:  Processes messages for the main window.
//
//  WM_PAINT    - Paint the main window
//  WM_DESTROY  - post a quit message and return
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    PAINTSTRUCT ps;
    HDC hdc;    

    string placehold = "Current Ball: " + ball;
    string num = placehold;//"Bruh";//to_string(CALCULATOR().num_1);
    TCHAR text[50];//{ (TCHAR)num.c_str() };//_T(" ");
    _tcscpy_s(text, CA2T(num.c_str()));

    string placehold_2 = "Player 1 Card";
    TCHAR text2[50];//{ (TCHAR)num.c_str() };//_T(" ");
    _tcscpy_s(text2, CA2T(placehold_2.c_str()));
   
    string placehold_3 = "Player 2 Card";
    TCHAR text3[50];//{ (TCHAR)num.c_str() };//_T(" ");
    _tcscpy_s(text3, CA2T(placehold_3.c_str()));    

   
    TCHAR text6[50];//{ (TCHAR)num.c_str() };//_T(" ");
    _tcscpy_s(text6, CA2T(placehold_winner.c_str()));


    switch (message)
    {
    case WM_PAINT:
        hdc = BeginPaint(hWnd, &ps);

        // Here your application is laid out.        
        TextOut(hdc,
            5, 5,
            text, _tcslen(text));
        // End application-specific layout section.

        TextOut(hdc,
            115, 120,
            text2, _tcslen(text2));

        TextOut(hdc,
            card_2_start_x + 100, 120,
            text3, _tcslen(text3));

        TextOut(hdc,
            500, 120,
            text6, _tcslen(text6));
        // End application-specific layout section.       

        EndPaint(hWnd, &ps);       


        break;

    case WM_DESTROY:
        PostQuitMessage(0);
        break;

    case WM_CLOSE:
        if (MessageBox(hWnd, L"Really quit?", L"Bingo", MB_OKCANCEL) == IDOK)
        {
            DestroyWindow(hWnd);
        }
        

    case WM_COMMAND:
        switch (wParam) {        

        case bingo_btn_ID:           

            if (check::bingo() == 1) {
                placehold_winner = "Player 1 Wins";
            }

            else if (check::bingo() == 2) {
                placehold_winner = "Player 2 Wins";
            };

            InvalidateRect(hWnd, 0, TRUE);           
            break;
        case startbtn_ID:                  
            player_1::card_arr_gen();
            draw_card_1(card_1_start_x, card_1_start_y, btn_width, btn_height, hWnd);
            player_2::card_arr_gen();
            draw_card_2(card_2_start_x, card_2_start_y, btn_width, btn_height, hWnd);
            InvalidateRect(hWnd, 0, TRUE);
            break;    

        case draw_new_ID:
            ball = generate::ball(false);
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_1_btn_1_ID:         
            DestroyWindow(card_1_btn_1);
            if (card_1_btn_1_clicked == false) {
                card_1_btn_1_clicked = true;
                card_1_btn_1 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",  // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x,        // x position 
                    card_1_start_y,         // y position 
                    50,        // Button width
                    50,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_1_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_1_btn_1_clicked == true) {
                card_1_btn_1_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_1::card[0].c_str()));
                card_1_btn_1 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x,        // x position 
                    card_1_start_y,         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_1_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_1_btn_2_ID:
            DestroyWindow(card_1_btn_2);
            if (card_1_btn_2_clicked == false) {
                card_1_btn_2_clicked = true;
                card_1_btn_2 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + btn_width,        // x position 
                    card_1_start_y,         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_2_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_1_btn_2_clicked == true) {
                card_1_btn_2_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_1::card[1].c_str()));
                card_1_btn_2 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + btn_width,        // x position 
                    card_1_start_y,         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_2_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_1_btn_3_ID:
            DestroyWindow(card_1_btn_3);
            if (card_1_btn_3_clicked == false) {
                card_1_btn_3_clicked = true;
                card_1_btn_3 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + (btn_width * 2),        // x position 
                    card_1_start_y,         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_3_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_1_btn_3_clicked == true) {
                card_1_btn_3_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_1::card[2].c_str()));
                card_1_btn_3 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + (btn_width * 2),        // x position 
                    card_1_start_y,         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_3_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_1_btn_4_ID:
            DestroyWindow(card_1_btn_4);
            if (card_1_btn_4_clicked == false) {
                card_1_btn_4_clicked = true;
                card_1_btn_4 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + (btn_width * 3),        // x position 
                    card_1_start_y,         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_4_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_1_btn_4_clicked == true) {
                card_1_btn_4_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_1::card[3].c_str()));
                card_1_btn_4 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + (btn_width * 3),        // x position 
                    card_1_start_y,         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_4_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_1_btn_5_ID:
            DestroyWindow(card_1_btn_5);
            if (card_1_btn_5_clicked == false) {
                card_1_btn_5_clicked = true;
                card_1_btn_5 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + (btn_width * 4),        // x position 
                    card_1_start_y,         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_5_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_1_btn_5_clicked == true) {
                card_1_btn_5_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_1::card[4].c_str()));
                card_1_btn_5 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + (btn_width * 4),        // x position 
                    card_1_start_y,         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_5_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_1_btn_6_ID:
            DestroyWindow(card_1_btn_6);
            if (card_1_btn_6_clicked == false) {
                card_1_btn_6_clicked = true;
                card_1_btn_6 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x,        // x position 
                    card_1_start_y + btn_height,         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_6_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_1_btn_6_clicked == true) {
                card_1_btn_6_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_1::card[5].c_str()));
                card_1_btn_6 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x,        // x position 
                    card_1_start_y + btn_height,         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_6_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_1_btn_7_ID:
            DestroyWindow(card_1_btn_7);
            if (card_1_btn_7_clicked == false) {
                card_1_btn_7_clicked = true;
                card_1_btn_7 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + (btn_width),        // x position 
                    card_1_start_y + btn_height,         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_7_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_1_btn_7_clicked == true) {
                card_1_btn_7_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_1::card[6].c_str()));
                card_1_btn_7 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + (btn_width),        // x position 
                    card_1_start_y + btn_height,         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_7_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_1_btn_8_ID:
            DestroyWindow(card_1_btn_8);
            if (card_1_btn_8_clicked == false) {
                card_1_btn_8_clicked = true;
                card_1_btn_8 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + (btn_width * 2),        // x position 
                    card_1_start_y + btn_height,         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_8_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_1_btn_8_clicked == true) {
                card_1_btn_8_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_1::card[7].c_str()));
                card_1_btn_8 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + (btn_width * 2),        // x position 
                    card_1_start_y + btn_height,         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_8_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_1_btn_9_ID:
            DestroyWindow(card_1_btn_9);
            if (card_1_btn_9_clicked == false) {
                card_1_btn_9_clicked = true;
                card_1_btn_9 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + (btn_width * 3),        // x position 
                    card_1_start_y + btn_height,         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_9_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_1_btn_9_clicked == true) {
                card_1_btn_9_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_1::card[8].c_str()));
                card_1_btn_9 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + (btn_width * 3),        // x position 
                    card_1_start_y + btn_height,         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_9_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_1_btn_10_ID:
            DestroyWindow(card_1_btn_10);
            if (card_1_btn_10_clicked == false) {
                card_1_btn_10_clicked = true;
                card_1_btn_10 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + (btn_width * 4),        // x position 
                    card_1_start_y + btn_height,         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_10_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_1_btn_10_clicked == true) {
                card_1_btn_10_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_1::card[9].c_str()));
                card_1_btn_10 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + (btn_width * 4),        // x position 
                    card_1_start_y + btn_height,         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_10_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_1_btn_11_ID:
            DestroyWindow(card_1_btn_11);
            if (card_1_btn_11_clicked == false) {
                card_1_btn_11_clicked = true;
                card_1_btn_11 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x,        // x position 
                    card_1_start_y + (btn_height * 2),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_11_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_1_btn_11_clicked == true) {
                card_1_btn_11_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_1::card[10].c_str()));
                card_1_btn_11 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x,        // x position 
                    card_1_start_y + (btn_height * 2),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_11_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_1_btn_12_ID:
            DestroyWindow(card_1_btn_12);
            if (card_1_btn_12_clicked == false) {
                card_1_btn_12_clicked = true;
                card_1_btn_12 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + (btn_width),        // x position 
                    card_1_start_y + (btn_height * 2),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_12_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_1_btn_12_clicked == true) {
                card_1_btn_12_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_1::card[11].c_str()));
                card_1_btn_12 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + (btn_width),        // x position 
                    card_1_start_y + (btn_height * 2),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_12_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_1_btn_13_ID:
            DestroyWindow(card_1_btn_13);
            if (card_1_btn_13_clicked == false) {
                card_1_btn_13_clicked = true;
                card_1_btn_13 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + (btn_width * 2),        // x position 
                    card_1_start_y + (btn_height * 2),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_13_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_1_btn_13_clicked == true) {
                card_1_btn_13_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_1::card[12].c_str()));
                card_1_btn_13 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + (btn_width * 2),        // x position 
                    card_1_start_y + (btn_height * 2),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_13_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_1_btn_14_ID:
            DestroyWindow(card_1_btn_14);
            if (card_1_btn_14_clicked == false) {
                card_1_btn_14_clicked = true;
                card_1_btn_14 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + (btn_width * 3),        // x position 
                    card_1_start_y + (btn_height * 2),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_14_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_1_btn_14_clicked == true) {
                card_1_btn_14_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_1::card[13].c_str()));
                card_1_btn_14 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + (btn_width * 3),        // x position 
                    card_1_start_y + (btn_height * 2),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_14_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_1_btn_15_ID:
            DestroyWindow(card_1_btn_15);
            if (card_1_btn_15_clicked == false) {
                card_1_btn_15_clicked = true;
                card_1_btn_15 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + (btn_width * 4),        // x position 
                    card_1_start_y + (btn_height * 2),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_15_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_1_btn_15_clicked == true) {
                card_1_btn_15_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_1::card[14].c_str()));
                card_1_btn_15 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + (btn_width * 4),        // x position 
                    card_1_start_y + (btn_height * 2),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_15_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_1_btn_16_ID:
            DestroyWindow(card_1_btn_16);
            if (card_1_btn_16_clicked == false) {
                card_1_btn_16_clicked = true;
                card_1_btn_16 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x,        // x position 
                    card_1_start_y + (btn_height * 3),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_16_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_1_btn_16_clicked == true) {
                card_1_btn_16_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_1::card[15].c_str()));
                card_1_btn_16 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x,        // x position 
                    card_1_start_y + (btn_height * 3),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_16_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_1_btn_17_ID:
            DestroyWindow(card_1_btn_17);
            if (card_1_btn_17_clicked == false) {
                card_1_btn_17_clicked = true;
                card_1_btn_17 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + (btn_width),        // x position 
                    card_1_start_y + (btn_height * 3),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_17_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_1_btn_17_clicked == true) {
                card_1_btn_17_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_1::card[16].c_str()));
                card_1_btn_17 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + (btn_width),        // x position 
                    card_1_start_y + (btn_height * 3),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_17_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_1_btn_18_ID:
            DestroyWindow(card_1_btn_18);
            if (card_1_btn_18_clicked == false) {
                card_1_btn_18_clicked = true;
                card_1_btn_18 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + (btn_width * 2),        // x position 
                    card_1_start_y + (btn_height * 3),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_18_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_1_btn_18_clicked == true) {
                card_1_btn_18_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_1::card[17].c_str()));
                card_1_btn_18 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + (btn_width * 2),        // x position 
                    card_1_start_y + (btn_height * 3),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_18_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_1_btn_19_ID:
            DestroyWindow(card_1_btn_19);
            if (card_1_btn_19_clicked == false) {
                card_1_btn_19_clicked = true;
                card_1_btn_19 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + (btn_width * 3),        // x position 
                    card_1_start_y + (btn_height * 3),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_19_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_1_btn_19_clicked == true) {
                card_1_btn_19_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_1::card[18].c_str()));
                card_1_btn_19 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + (btn_width * 3),        // x position 
                    card_1_start_y + (btn_height * 3),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_19_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_1_btn_20_ID:
            DestroyWindow(card_1_btn_20);
            if (card_1_btn_20_clicked == false) {
                card_1_btn_20_clicked = true;
                card_1_btn_20 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + (btn_width * 4),        // x position 
                    card_1_start_y + (btn_height * 3),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_20_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_1_btn_20_clicked == true) {
                card_1_btn_20_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_1::card[19].c_str()));
                card_1_btn_20 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + (btn_width * 4),        // x position 
                    card_1_start_y + (btn_height * 3),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_20_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_1_btn_21_ID:
            DestroyWindow(card_1_btn_21);
            if (card_1_btn_21_clicked == false) {
                card_1_btn_21_clicked = true;
                card_1_btn_21 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x,        // x position 
                    card_1_start_y + (btn_height * 4),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_21_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_1_btn_21_clicked == true) {
                card_1_btn_21_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_1::card[20].c_str()));
                card_1_btn_21 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x,        // x position 
                    card_1_start_y + (btn_height * 4),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_21_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_1_btn_22_ID:
            DestroyWindow(card_1_btn_22);
            if (card_1_btn_22_clicked == false) {
                card_1_btn_22_clicked = true;
                card_1_btn_22 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + (btn_width),        // x position 
                    card_1_start_y + (btn_height * 4),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_22_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_1_btn_22_clicked == true) {
                card_1_btn_22_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_1::card[21].c_str()));
                card_1_btn_22 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + (btn_width),        // x position 
                    card_1_start_y + (btn_height * 4),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_22_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_1_btn_23_ID:
            DestroyWindow(card_1_btn_23);
            if (card_1_btn_23_clicked == false) {
                card_1_btn_23_clicked = true;
                card_1_btn_23 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + (btn_width * 2),        // x position 
                    card_1_start_y + (btn_height * 4),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_23_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_1_btn_23_clicked == true) {
                card_1_btn_23_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_1::card[22].c_str()));
                card_1_btn_23 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + (btn_width * 2),        // x position 
                    card_1_start_y + (btn_height * 4),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_23_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_1_btn_24_ID:
            DestroyWindow(card_1_btn_24);
            if (card_1_btn_24_clicked == false) {
                card_1_btn_24_clicked = true;
                card_1_btn_24 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + (btn_width * 3),        // x position 
                    card_1_start_y + (btn_height * 4),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_24_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_1_btn_24_clicked == true) {
                card_1_btn_24_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_1::card[23].c_str()));
                card_1_btn_24 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + (btn_width * 3),        // x position 
                    card_1_start_y + (btn_height * 4),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_24_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;


        
        case card_1_btn_25_ID:
            DestroyWindow(card_1_btn_25);
            if (card_1_btn_25_clicked == false) {
                card_1_btn_25_clicked = true;
                card_1_btn_25 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + (btn_width * 4),        // x position 
                    card_1_start_y + (btn_height * 4),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_25_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_1_btn_25_clicked == true) {
                card_1_btn_25_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_1::card[24].c_str()));
                card_1_btn_25 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_1_start_x + (btn_width * 4),        // x position 
                    card_1_start_y + (btn_height * 4),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_1_btn_25_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

            /* second page */
        case card_2_btn_1_ID:
            DestroyWindow(card_2_btn_1);
            if (card_2_btn_1_clicked == false) {
                card_2_btn_1_clicked = true;
                card_2_btn_1 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x,        // x position 
                    card_2_start_y,         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_1_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_2_btn_1_clicked == true) {
                card_2_btn_1_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_2::card[0].c_str()));
                card_2_btn_1 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x,        // x position 
                    card_2_start_y,         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_1_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;
        case card_2_btn_2_ID:
            DestroyWindow(card_2_btn_2);
            if (card_2_btn_2_clicked == false) {
                card_2_btn_2_clicked = true;
                card_2_btn_2 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + btn_width,        // x position 
                    card_2_start_y,         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_2_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_2_btn_2_clicked == true) {
                card_2_btn_2_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_2::card[1].c_str()));
                card_2_btn_2 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + btn_width,        // x position 
                    card_2_start_y,         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_2_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;
        case card_2_btn_3_ID:
            DestroyWindow(card_2_btn_3);
            if (card_2_btn_3_clicked == false) {
                card_2_btn_3_clicked = true;
                card_2_btn_3 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + (btn_width * 2),        // x position 
                    card_2_start_y,         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_3_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_2_btn_3_clicked == true) {
                card_2_btn_3_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_2::card[2].c_str()));
                card_2_btn_3 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + (btn_width * 2),        // x position 
                    card_2_start_y,         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_3_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;
        case card_2_btn_4_ID:
            DestroyWindow(card_2_btn_4);
            if (card_2_btn_4_clicked == false) {
                card_2_btn_4_clicked = true;
                card_2_btn_4 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + (btn_width * 3),        // x position 
                    card_2_start_y,         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_4_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_2_btn_4_clicked == true) {
                card_2_btn_4_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_2::card[3].c_str()));
                card_2_btn_4 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + (btn_width * 3),        // x position 
                    card_2_start_y,         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_4_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_2_btn_5_ID:
            DestroyWindow(card_2_btn_5);
            if (card_2_btn_5_clicked == false) {
                card_2_btn_5_clicked = true;
                card_2_btn_5 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + (btn_width * 4),        // x position 
                    card_2_start_y,         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_5_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_2_btn_5_clicked == true) {
                card_2_btn_5_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_2::card[4].c_str()));
                card_1_btn_5 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + (btn_width * 4),        // x position 
                    card_2_start_y,         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_5_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_2_btn_6_ID:
            DestroyWindow(card_2_btn_6);
            if (card_2_btn_6_clicked == false) {
                card_2_btn_6_clicked = true;
                card_2_btn_6 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x,        // x position 
                    card_2_start_y + (btn_height),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_6_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_2_btn_6_clicked == true) {
                card_2_btn_6_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_2::card[5].c_str()));
                card_1_btn_6 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x,        // x position 
                    card_2_start_y + (btn_height),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_6_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_2_btn_7_ID:
            DestroyWindow(card_2_btn_7);
            if (card_2_btn_7_clicked == false) {
                card_2_btn_7_clicked = true;
                card_2_btn_7 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + (btn_width),        // x position 
                    card_2_start_y + (btn_height),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_7_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_2_btn_7_clicked == true) {
                card_2_btn_7_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_2::card[6].c_str()));
                card_1_btn_7 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + (btn_width),        // x position 
                    card_2_start_y + (btn_height),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_7_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;
        
        case card_2_btn_8_ID:
            DestroyWindow(card_2_btn_8);
            if (card_2_btn_8_clicked == false) {
                card_2_btn_8_clicked = true;
                card_2_btn_8 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + (btn_width * 2),        // x position 
                    card_2_start_y + (btn_height),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_8_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_2_btn_8_clicked == true) {
                card_2_btn_8_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_2::card[7].c_str()));
                card_1_btn_8 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + (btn_width * 2),        // x position 
                    card_2_start_y + (btn_height),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_8_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_2_btn_9_ID:
            DestroyWindow(card_2_btn_9);
            if (card_2_btn_9_clicked == false) {
                card_2_btn_9_clicked = true;
                card_2_btn_9 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + (btn_width * 3),        // x position 
                    card_2_start_y + (btn_height),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_9_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_2_btn_9_clicked == true) {
                card_2_btn_9_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_2::card[8].c_str()));
                card_1_btn_9 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + (btn_width * 3),        // x position 
                    card_2_start_y + (btn_height),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_9_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_2_btn_10_ID:
            DestroyWindow(card_2_btn_10);
            if (card_2_btn_10_clicked == false) {
                card_2_btn_10_clicked = true;
                card_2_btn_10 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + (btn_width * 4),        // x position 
                    card_2_start_y + (btn_height),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_10_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_2_btn_10_clicked == true) {
                card_2_btn_10_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_2::card[9].c_str()));
                card_1_btn_10 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + (btn_width * 4),        // x position 
                    card_2_start_y + (btn_height),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_10_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_2_btn_11_ID:
            DestroyWindow(card_2_btn_11);
            if (card_2_btn_11_clicked == false) {
                card_2_btn_11_clicked = true;
                card_2_btn_11 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x,        // x position 
                    card_2_start_y + (btn_height * 2),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_11_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_2_btn_11_clicked == true) {
                card_2_btn_11_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_2::card[10].c_str()));
                card_1_btn_11 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x,        // x position 
                    card_2_start_y + (btn_height * 2),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_11_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_2_btn_12_ID:
            DestroyWindow(card_2_btn_12);
            if (card_2_btn_12_clicked == false) {
                card_2_btn_12_clicked = true;
                card_2_btn_12 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + (btn_width),        // x position 
                    card_2_start_y + (btn_height * 2),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_12_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_2_btn_12_clicked == true) {
                card_2_btn_12_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_2::card[11].c_str()));
                card_1_btn_12 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + (btn_width),        // x position 
                    card_2_start_y + (btn_height * 2),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_12_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_2_btn_13_ID:
            DestroyWindow(card_2_btn_13);
            if (card_2_btn_13_clicked == false) {
                card_2_btn_13_clicked = true;
                card_2_btn_13 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + (btn_width * 2),        // x position 
                    card_2_start_y + (btn_height * 2),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_13_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_2_btn_13_clicked == true) {
                card_2_btn_13_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_2::card[12].c_str()));
                card_1_btn_13 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + (btn_width * 2),        // x position 
                    card_2_start_y + (btn_height * 2),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_13_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;
        case card_2_btn_14_ID:
            DestroyWindow(card_2_btn_14);
            if (card_2_btn_14_clicked == false) {
                card_2_btn_14_clicked = true;
                card_2_btn_14 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + (btn_width * 3),        // x position 
                    card_2_start_y + (btn_height * 2),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_14_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_2_btn_14_clicked == true) {
                card_2_btn_14_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_2::card[13].c_str()));
                card_1_btn_14 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + (btn_width * 3),        // x position 
                    card_2_start_y + (btn_height * 2),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_14_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_2_btn_15_ID:
            DestroyWindow(card_2_btn_15);
            if (card_2_btn_15_clicked == false) {
                card_2_btn_15_clicked = true;
                card_2_btn_15 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + (btn_width * 4),        // x position 
                    card_2_start_y + (btn_height * 2),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_15_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_2_btn_15_clicked == true) {
                card_2_btn_15_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_2::card[14].c_str()));
                card_1_btn_15 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + (btn_width * 4),        // x position 
                    card_2_start_y + (btn_height * 2),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_15_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_2_btn_16_ID:
            DestroyWindow(card_2_btn_16);
            if (card_2_btn_16_clicked == false) {
                card_2_btn_16_clicked = true;
                card_2_btn_16 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x,        // x position 
                    card_2_start_y + (btn_height * 3),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_16_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_2_btn_16_clicked == true) {
                card_2_btn_16_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_2::card[15].c_str()));
                card_1_btn_16 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x,        // x position 
                    card_2_start_y + (btn_height * 3),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_16_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_2_btn_17_ID:
            DestroyWindow(card_2_btn_17);
            if (card_2_btn_17_clicked == false) {
                card_2_btn_17_clicked = true;
                card_2_btn_17 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + (btn_width),        // x position 
                    card_2_start_y + (btn_height * 3),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_17_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_2_btn_17_clicked == true) {
                card_2_btn_17_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_2::card[16].c_str()));
                card_1_btn_17 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + (btn_width),        // x position 
                    card_2_start_y + (btn_height * 3),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_17_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_2_btn_18_ID:
            DestroyWindow(card_2_btn_18);
            if (card_2_btn_18_clicked == false) {
                card_2_btn_18_clicked = true;
                card_2_btn_18 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + (btn_width * 2),        // x position 
                    card_2_start_y + (btn_height * 3),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_18_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_2_btn_18_clicked == true) {
                card_2_btn_18_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_2::card[17].c_str()));
                card_1_btn_18 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + (btn_width * 2),        // x position 
                    card_2_start_y + (btn_height * 3),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_18_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_2_btn_19_ID:
            DestroyWindow(card_2_btn_19);
            if (card_2_btn_19_clicked == false) {
                card_2_btn_19_clicked = true;
                card_2_btn_19 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + (btn_width * 3),        // x position 
                    card_2_start_y + (btn_height * 3),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_19_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_2_btn_19_clicked == true) {
                card_2_btn_19_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_2::card[18].c_str()));
                card_1_btn_19 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + (btn_width * 3),        // x position 
                    card_2_start_y + (btn_height * 3),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_19_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_2_btn_20_ID:
            DestroyWindow(card_2_btn_20);
            if (card_2_btn_20_clicked == false) {
                card_2_btn_20_clicked = true;
                card_2_btn_20 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + (btn_width * 4),        // x position 
                    card_2_start_y + (btn_height * 3),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_20_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_2_btn_20_clicked == true) {
                card_2_btn_20_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_2::card[19].c_str()));
                card_1_btn_20 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + (btn_width * 4),        // x position 
                    card_2_start_y + (btn_height * 3),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_20_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_2_btn_21_ID:
            DestroyWindow(card_2_btn_21);
            if (card_2_btn_21_clicked == false) {
                card_2_btn_21_clicked = true;
                card_2_btn_21 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x,        // x position 
                    card_2_start_y + (btn_height * 4),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_21_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_2_btn_21_clicked == true) {
                card_2_btn_21_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_2::card[20].c_str()));
                card_1_btn_21 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x,        // x position 
                    card_2_start_y + (btn_height * 4),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_21_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_2_btn_22_ID:
            DestroyWindow(card_2_btn_22);
            if (card_2_btn_22_clicked == false) {
                card_2_btn_22_clicked = true;
                card_2_btn_22 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + (btn_width),        // x position 
                    card_2_start_y + (btn_height * 4),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_22_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_2_btn_22_clicked == true) {
                card_2_btn_22_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_2::card[21].c_str()));
                card_1_btn_22 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + (btn_width),        // x position 
                    card_2_start_y + (btn_height * 4),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_22_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_2_btn_23_ID:
            DestroyWindow(card_2_btn_23);
            if (card_2_btn_23_clicked == false) {
                card_2_btn_23_clicked = true;
                card_2_btn_23 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + (btn_width * 2),        // x position 
                    card_2_start_y + (btn_height * 4),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_23_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_2_btn_23_clicked == true) {
                card_2_btn_23_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_2::card[22].c_str()));
                card_1_btn_23 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + (btn_width * 2),        // x position 
                    card_2_start_y + (btn_height * 4),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_23_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_2_btn_24_ID:
            DestroyWindow(card_2_btn_24);
            if (card_2_btn_24_clicked == false) {
                card_2_btn_24_clicked = true;
                card_2_btn_24 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + (btn_width * 3),        // x position 
                    card_2_start_y + (btn_height * 4),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_24_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_2_btn_24_clicked == true) {
                card_2_btn_24_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_2::card[23].c_str()));
                card_1_btn_24 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + (btn_width * 3),        // x position 
                    card_2_start_y + (btn_height * 4),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_24_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;

        case card_2_btn_25_ID:
            DestroyWindow(card_2_btn_25);
            if (card_2_btn_25_clicked == false) {
                card_2_btn_25_clicked = true;
                card_2_btn_25 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    L"X",        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + (btn_width * 4),        // x position 
                    card_2_start_y + (btn_height * 4),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_25_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }

            else if (card_2_btn_25_clicked == true) {
                card_2_btn_25_clicked = false;
                TCHAR texts[25];
                _tcscpy_s(texts, CA2T(player_2::card[24].c_str()));
                card_1_btn_25 = CreateWindow(
                    L"BUTTON",  // Predefined class; Unicode assumed
                    (LPCWSTR)texts,        // Text will be defined later
                    WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles
                    card_2_start_x + (btn_width * 4),        // x position 
                    card_2_start_y + (btn_height * 4),         // y position 
                    btn_width,        // Button width
                    btn_height,        // Button height
                    hWnd,     // Parent window
                    (HMENU)card_2_btn_25_ID,       // No menu
                    (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
                    NULL);      // Pointer not needed
            }
            InvalidateRect(hWnd, 0, TRUE);
            break;




        }
        break;

    

    case LBut:
        //Mouse Left        
        break;

    case WM_RBUTTONDOWN:
        //Mouse Right        
        break;

    default:
        return DefWindowProc(hWnd, message, wParam, lParam);
        break;
    }

    //cout << "Bruh" << endl;
    return 0;
};