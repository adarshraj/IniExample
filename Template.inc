; ллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллл
; Include Files
; ллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллл

include windows.inc
include kernel32.inc
include user32.inc
include comctl32.inc

include d:\masm32\macros\macros.asm

; ллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллл
; Include libraries
; ллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллл

includelib kernel32.lib
includelib user32.lib
includelib comctl32.lib

; ллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллл
; Function Prototypes
; ллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллл

DlgProc		proto	:HWND, :UINT, :WPARAM, :LPARAM		