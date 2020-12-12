Test programs for SDL_bgi
-------------------------

By Guido Gonzato, PhD

This directory contains a few simple programs that show how to use
some features of `SDL_bgi`; type `make` to compile them.

You may want to compile the original `bgidemo.c` program by Borland.
It's not free software but it can be downloaded from several sources;
type `make bgidemo` to download it and compile it. You need the `wget`
tool in the $PATH.

`bgidemo` fails to build on MSYS2 because of its wrong `main()`
declaration; the Makefiles changes `int main()` to `int main(int argc,
char *argv[])`.

Original `.CHR` fonts are available here:
<https://github.com/ananay/turboc/tree/master/TC/BGI>

There may be compiler warnings using gcc releases newer than 7, as in
Ubuntu 20.

License: all programs are released under GPL2 or later.

- `boo.c` shows how to make a window transparent and change some of
  its properties.

- `buffers.c` shows how to use `getbuffer()` and `putbuffer()` to draw
pixel-based stuff on the screen. Using buffers (i.e. arrays) is much
faster than using `putpixel()`.

- `cellular.c` is a cellular automaton program. For more information,
please see <http://mathworld.wolfram.com/CellularAutomaton.html>. Run
it as `./cellular [rule]`, where `rule` is the generating rule (1-255).

- `dla.c` is a diffusion limited aggregation program; please see
<http://en.wikipedia.org/wiki/Diffusion-limited_aggregation>.

- `fern.c` is a famous IFS system; please see
<http://en.wikipedia.org/wiki/Iterated_function_system> This program is
written in a portable way, i.e. it can be compiled and run on other
implementations of BGI. It was tested on the original Turbo C and
the (horribly slow) GNU libgraph.

- `floodfilltest.c` shows the speed of the new `floodfill()` routine.

- `fonts.c` shows the new Hershey-based vector fonts. If `.CHR` fonts
are available in the same directory, they will be used instead of the
Hershey fonts. This is an experimental feature that works in GNU/Linux
only.

- `hopalong.c` is an implementation of Barry Martin's algorithm,
presented in the September 1986 issue of Scientific American. Run it
as `./hopalong <seed>`, where `<seed>` is an integer number.

- `kaleido.c` shows how to use alpha (transparency) to implement a
fade away effect.

- `life.c` is an implementation of Conway's Game of Life,
<https://en.wikipedia.org/wiki/Conway%27s_Game_of_Life>. Run it as
`./life [number]`, where `[number]` is the initial percentage of living
cells.

- `mandelbrot.c` is a simple, non-optimised program to display the
Mandelbrot set, <https://en.wikipedia.org/wiki/Mandelbrot_set>. It
shows how to setup and use RGB colour mode. Press '1', '2', '3' to
change the palette; left click to zoom in on a point; right click to
zoom out; arrow keys to move around; middle click to restore the
initial boundary.

- `mousetest.c` shows how to detect and use mouse clicks. Click around
using all buttons and mouse wheel.

- `plasma.c` writes the window contents to a .bmp file.

- `psychedelia.c` sets up an RGB palette and produces a plasma effect,
using either putpixel() or putbuffer(); left click to switch.
Algorithm is described at <https://lodev.org/cgtutor/plasma.html>.

- `scrolltext.c` shows how to use `getlinebuffer()` and
`putlinebuffer()`, which are faster than `getpixel()` and
`putpixel()`.

- `sdlbgidemo.c` shows how to use some of `SDL_bgi`'s features.

- `simple.c` displays simple shapes to test `SDL_bgi`'s speed.
**Note**: this programs hangs in Mingw, because of a bug in its
console routines (apparently).

- `turtledemo.c` uses a simple yet powerful turtle graphics
implementation to draw fractals and simple shapes.

Besides, 'f90_test' shows how to use `SDL_bgi` in Fortran programs.
Kindly provided by Angelo Graziosi.


Notes on Turtle Graphics
------------------------

Turtle graphics is based on polar coordinates: you draw lines
specifying the distance in pixels and an angle in degrees, called
``heading'' (0-359). Heading is the same as the bearing of a compass: it
starts from 0 (``North'') and increases clockwise.

For a thorough explanation, please read:
<http://en.wikipedia.org/wiki/Turtle_Graphics>

Commands available are:

````
void back (int);              move the turtle backwards by <int> pixels
void backward (int);
void bk (int);
void forwd (int);             move the turtle forwards by <int> pixels
void forward (int);
void fd (int);
void turnleft (int);          turns the turtle left by <int> degrees
void left (int);
void lt (int);
void turnright (int);         turns the turns right by <int> degrees
void right (int);
void rt (int);
void setposition (int, int);  move the turtle to X, Y
void go_to (int, int);
void setpos (int, int);
void setx (int);              set the X coordinate
void sety (int);              set the Y coordinate
void setheading (int);        set the turtle heading to <int> (0-359)
void seth (int);
void home (void);             move the turtle to the screen centre
                              and set the heading to 0
int *position (void)          return the turtle's position
int  xcor (void);             return the turtle's X coordinate
int  ycor (void);             return the turtle's Y coordinate
int  heading (void);          get the turtle heading (0-359)
void savestate (void);        save turtle state, i.e. position and heading
void restorestate (void);     restore saved state
void pendown (void);          activate drawing (put the pen down)
void pd (void);
void down (void);
void penup (void);            suspend drawing (lift the pen)
void pu (void);
void up (void);
int  isdown (void);           is the pen down?
void hideturtle (void);       hide the turtle
void showturtle (void);       show the turtle
int  isvisible (void);        is the turtle visible?
void wrap (void);             wrap around the window
void nowrap (void);           don't wrap around the window
````

Some functions have aliases, which have the same name as Python's
turtle graphics routines; please see
<https://docs.python.org/3/library/turtle.html>.

By default, the turtle is not visible, the pen is down, wrapping is
disabled, and the heading is 0.

Constants:

````
T_TRUE  1
T_FALSE 0

T_NORTH           0
T_NORTHEAST      45
T_EAST           90
T_SOUTHEAST     135
T_SOUTH         180
T_SOUTHWEST     225
T_WEST          270
T_NORTHWEST     315

T_TWELVE    T_NORTH
T_THREE      T_EAST
T_SIX       T_SOUTH
T_NINE       T_WEST
````

Please have a look at `turtle.h` for more details.
