#ifndef FONT5X7_H
#define FONT5X7_H

#ifdef __AVR__
 #include <avr/io.h>
 #include <avr/pgmspace.h>
#else
 #define PROGMEM
#endif
 
// Standard ASCII 5x7 font

static const unsigned char font[] PROGMEM = {
0, 0, 0, 0, 0, // Empty Cell
62, 91, 79, 91, 62, // Sad Smiley
62, 107, 79, 107, 62, // Happy Smiley
28, 62, 124, 62, 28, // Heart
24, 60, 126, 60, 24, // Diamond
28, 87, 125, 87, 28, // Clubs
28, 94, 127, 94, 28, // Spades
24, 60, 24, 0, 0, // Bullet Point
255, 231, 195, 231, 255, // Rev Bullet Point
24, 36, 24, 0, 0, // Hollow Bullet Point
255, 231, 219, 231, 255, // Rev Hollow BP
48, 72, 58, 6, 14, // Male
38, 41, 121, 41, 38, // Female
64, 127, 5, 5, 7, // Music Note 1
64, 127, 5, 37, 63, // Music Note 2
90, 60, 231, 60, 90, // Snowflake
127, 62, 28, 28, 8, // Right Pointer
8, 28, 28, 62, 127, // Left Pointer
20, 34, 127, 34, 20, // UpDown Arrows
95, 95, 0, 95, 95, // Double Exclamation
6, 9, 127, 1, 127, // Paragraph Mark
102, 137, 149, 106, 0, // Section Mark
96, 96, 96, 96, 96, // Double Underline
148, 162, 255, 162, 148, // UpDown Underlined
8, 4, 126, 4, 8, // Up Arrow
16, 32, 126, 32, 16, // Down Arrow
8, 8, 42, 28, 8, // Right Arrow
8, 28, 42, 8, 8, // Left Arrow
30, 16, 16, 16, 16, // Angled
12, 30, 12, 30, 12, // Squashed #
48, 56, 62, 56, 48, // Up Pointer
6, 14, 62, 14, 6, // Down Pointer
0, 0, 0, 0, 0, // Space
95, 0, 0, 0, 0, // !
3, 0, 3, 0, 0, // "
20, 62, 20, 62, 20, // #
36, 106, 43, 18, 0, // $
99, 19, 8, 100, 99, // %
54, 73, 86, 32, 80, // &
3, 0, 0, 0, 0, // '
28, 34, 65, 0, 0, // (
65, 34, 28, 0, 0, // )
40, 24, 14, 24, 40, // *
8, 8, 62, 8, 8, // +
176, 112, 0, 0, 0, // ,
8, 8, 8, 8, 0, // -
96, 96, 0, 0, 0, // .
96, 24, 6, 1, 0, // /
62, 65, 65, 62, 0, // 0
66, 127, 64, 0, 0, // 1
98, 81, 73, 70, 0, // 2
34, 65, 73, 54, 0, // 3
24, 20, 18, 127, 0, // 4
39, 69, 69, 57, 0, // 5
62, 73, 73, 48, 0, // 6
97, 17, 9, 7, 0, // 7
54, 73, 73, 54, 0, // 8
6, 73, 73, 62, 0, // 9
80, 0, 0, 0, 0, // :
128, 80, 0, 0, 0, // ;
16, 40, 68, 0, 0, // <
20, 20, 20, 0, 0, // =
68, 40, 16, 0, 0, // >
2, 89, 9, 6, 0, // ?
62, 73, 85, 93, 14, // @
126, 17, 17, 126, 0, // A
127, 73, 73, 54, 0, // B
62, 65, 65, 34, 0, // C
127, 65, 65, 62, 0, // D
127, 73, 73, 65, 0, // E
127, 9, 9, 1, 0, // F
62, 65, 73, 122, 0, // G
127, 8, 8, 127, 0, // H
65, 127, 65, 0, 0, // I
48, 64, 65, 63, 0, // J
127, 8, 20, 99, 0, // K
127, 64, 64, 64, 0, // L
127, 2, 12, 2, 127, // M
127, 4, 8, 16, 127, // N
62, 65, 65, 62, 0, // O
127, 9, 9, 6, 0, // P
62, 65, 65, 190, 0, // Q
127, 9, 9, 118, 0, // R
70, 73, 73, 50, 0, // S
1, 1, 127, 1, 1, // T
63, 64, 64, 63, 0, // U
15, 48, 64, 48, 15, // V
63, 64, 56, 64, 63, // W
99, 20, 8, 20, 99, // X
7, 8, 112, 8, 7, // Y
97, 81, 73, 71, 0, // Z
127, 65, 0, 0, 0, // [
1, 6, 24, 96, 0, // 
65, 127, 0, 0, 0, // ]
2, 1, 2, 0, 0, // ^
64, 64, 64, 64, 0, // _
1, 2, 0, 0, 0, // `
32, 84, 84, 120, 0, // a
127, 68, 68, 56, 0, // b
56, 68, 68, 40, 0, // c
56, 68, 68, 127, 0, // d
56, 84, 84, 24, 0, // e
4, 126, 5, 0, 0, // f
152, 164, 164, 120, 0, // g
127, 4, 4, 120, 0, // h
68, 125, 64, 0, 0, // i
64, 128, 132, 125, 0, // j
127, 16, 40, 68, 0, // k
65, 127, 64, 0, 0, // l
124, 4, 124, 4, 120, // m
124, 4, 4, 120, 0, // n
56, 68, 68, 56, 0, // o
252, 36, 36, 24, 0, // p
24, 36, 36, 252, 0, // q
124, 8, 4, 4, 0, // r
72, 84, 84, 36, 0, // s
4, 63, 68, 0, 0, // t
60, 64, 64, 124, 0, // u
28, 32, 64, 32, 28, // v
60, 64, 60, 64, 60, // w
68, 40, 16, 40, 68, // x
156, 160, 160, 124, 0, // y
100, 84, 76, 0, 0, // z
8, 54, 65, 0, 0, // {
127, 0, 0, 0, 0, // |
65, 54, 8, 0, 0, // }
8, 4, 8, 4, 0, // ~
0, 0, 0, 0, 0, // Hollow Up Arrow
252, 36, 36, 24, 0, // р
56, 68, 68, 40, 0, // с
4, 124, 4, 0, 0, // т
156, 160, 160, 124, 0, // у
24, 36, 252, 36, 24, // ф
68, 40, 16, 40, 68, // х
124, 64, 64, 124, 192, // ц
28, 16, 16, 124, 0, // ч
124, 64, 112, 64, 124, // ш
124, 64, 112, 64, 252, // щ
4, 124, 72, 72, 48, // ъ
124, 72, 48, 0, 124, // ы
124, 72, 72, 48, 0, // ь
68, 84, 84, 56, 0, // э
124, 16, 56, 68, 56, // ю
72, 52, 20, 124, 0, // я
126, 17, 17, 126, 0, // А
127, 73, 73, 49, 0, // Б
127, 73, 73, 54, 0, // В
127, 1, 1, 1, 0, // Г
192, 126, 65, 127, 192, // Д
127, 73, 73, 65, 0, // Е
119, 8, 127, 8, 119, // Ж
34, 65, 73, 54, 0, // З
127, 32, 16, 127, 0, // И
127, 32, 17, 125, 0, // Й
127, 8, 20, 99, 0, // К
64, 60, 2, 127, 0, // Л
127, 2, 12, 2, 127, // М
127, 8, 8, 127, 0, // Н
62, 65, 65, 62, 0, // О
127, 1, 1, 127, 0, // П
127, 9, 9, 6, 0, // Р
62, 65, 65, 34, 0, // С
1, 1, 127, 1, 1, // Т
71, 72, 72, 63, 0, // У
14, 17, 127, 17, 14, // Ф
99, 20, 8, 20, 99, // Х
127, 64, 64, 127, 192, // Ц
15, 8, 8, 127, 0, // Ч
127, 64, 124, 64, 127, // Ш
127, 64, 124, 64, 255, // Щ
1, 127, 72, 72, 48, // Ъ
127, 72, 48, 0, 127, // Ы
127, 72, 72, 48, 0, // Ь
65, 73, 73, 62, 0, // Э
127, 8, 62, 65, 62, // Ю
70, 41, 25, 127, 0, // Я
0, 0, 0, 0, 0,
32, 84, 84, 120, 0, // а
60, 74, 74, 49, 0, // б
126, 89, 86, 32, 0, // в
124, 4, 4, 4, 0, // г
192, 120, 68, 124, 192, // д
56, 84, 84, 24, 0, // е
108, 16, 124, 16, 108, // ж
72, 132, 148, 104, 0, // з
124, 32, 16, 124, 0, // и
124, 33, 17, 124, 0, // й
124, 16, 40, 68, 0, // к
64, 56, 4, 124, 0, // л
124, 8, 16, 8, 124, // м
124, 16, 16, 124, 0, // н
56, 68, 68, 56, 0, // о
124, 4, 4, 124, 0, // п
125, 84, 84, 85, 0, // Ё
57, 84, 84, 73, 0 // ё
};
#endif // FONT5X7_H
