#include <stdio.h>
#include <graphics.h>

int main ()
{
  int
    gd = DETECT,
    gm;
  
  FILE *w;
  
  unsigned char 
    i, str[2];
  
  str[1] = '\0';
  w = fopen ("width.dat", "w");
  
  initgraph (&gd, &gm, "");
  
  settextstyle (TRIPLEX_FONT, HORIZ_DIR, 0);
  fprintf (w, "TRIPLEX_FONT\n");
  
  for (i = 32; i < 128; i++) {
    str[0] = i;
    fprintf (w, "%d ", textwidth (str));
  }
  fprintf (w, "\n\n");

  settextstyle (SMALL_FONT, HORIZ_DIR, 0);
  fprintf (w, "SMALL_FONT\n");
  
  for (i = 32; i < 128; i++) {
    str[0] = i;
    fprintf (w, "%d ", textwidth (str));
  }
  fprintf (w, "\n\n");

  settextstyle (SANS_SERIF_FONT, HORIZ_DIR, 0);
  fprintf (w, "SANS_SERIF_FONT\n");
  
  for (i = 32; i < 128; i++) {
    str[0] = i;
    fprintf (w, "%d ", textwidth (str));
  }
  fprintf (w, "\n\n");

  settextstyle (GOTHIC_FONT, HORIZ_DIR, 0);
  fprintf (w, "GOTHIC_FONT\n");
  
  for (i = 32; i < 128; i++) {
    str[0] = i;
    fprintf (w, "%d ", textwidth (str));
  }
  fprintf (w, "\n\n");

  fclose (w);
  closegraph ();

}

/* --- end of file chrwidth.c */
