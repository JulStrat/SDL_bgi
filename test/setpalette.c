/* setpalette.c  -*- C -*-
 * 
 * To compile:
 * gcc -o setpalette setpalette.c -lSDL_bgi -lSDL2
 * 
 * Shows how to redefine the 16-colour palette and restore it.
 * 
 * By Guido Gonzato, June 2020.
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 * 
 */

#include <graphics.h>

char *col[] = {
  "BLACK", "BLUE", "GREEN", "CYAN", "RED", "MAGENTA", "BROWN",
  "LIGHTGRAY", "DARKGRAY", "LIGHTBLUE", "LIGHTGREEN", "LIGHTCYAN",
  "LIGHTRED", "LIGHTMAGENTA", "YELLOW", "WHITE"
};

#define RND256 random(256)

int main (int argc, char *argv[])
{
  int gd = DETECT, gm, i;
  
  initgraph (&gd, &gm, "");
  setcolor (WHITE);
  
  for (i = BLACK; i < WHITE + 1; i++) {
    setfillstyle (SOLID_FILL, i);
    bar (0, 30 * i, 200, 30 * i + 30);
    if (YELLOW == i)
      setcolor (BLACK);
    outtextxy (0, 30 * i + 15, col[i]);
  }
  
  // change the colours in the default palette
  setpalette (BLACK, COLOR (RND256, RND256, RND256));
  setpalette (BLUE, COLOR (RND256, RND256, RND256));
  setpalette (GREEN, COLOR (RND256, RND256, RND256));
  setpalette (CYAN, COLOR (RND256, RND256, RND256));
  setpalette (RED, COLOR (RND256, RND256, RND256));
  setpalette (BROWN, COLOR (RND256, RND256, RND256));
  setpalette (LIGHTGRAY, COLOR (RND256, RND256, RND256));
  setpalette (DARKGRAY, COLOR (RND256, RND256, RND256));
  setpalette (LIGHTBLUE, COLOR (RND256, RND256, RND256));
  setpalette (LIGHTGREEN, COLOR (RND256, RND256, RND256));
  setpalette (LIGHTCYAN, COLOR (RND256, RND256, RND256));
  setpalette (LIGHTRED, COLOR (RND256, RND256, RND256));
  setpalette (LIGHTMAGENTA, COLOR (RND256, RND256, RND256));
  setpalette (YELLOW, COLOR (RND256, RND256, RND256));
  // leave WHITE alone
  // setpalette (WHITE, COLOR (RND256, RND256, RND256));
  
  setcolor (WHITE);
  for (i = BLACK; i < WHITE + 1; i++) {
    setfillstyle (SOLID_FILL, i);
    bar (200, 30 * i, 400, 30 * i + 30);
    if (YELLOW == i)
      setcolor (BLACK); // whatever may it be
    outtextxy (200, 30 * i + 15, "NEW");
    outtextxy (240, 30 * i + 15, col[i]);
  }
  
  // restore the palette
  initpalette ();
  setcolor (WHITE);
  
  for (i = BLACK; i < WHITE + 1; i++) {
    setfillstyle (SOLID_FILL, i);
    bar (400, 30 * i, 600, 30 * i + 30);
    if (YELLOW == i)
      setcolor (BLACK);
    outtextxy (400, 30 * i + 15, "ORIG");
    outtextxy (440, 30 * i + 15, col[i]);
  }
  getch ();
  closegraph ();
  
}

// ----- end of file setpalette.c
