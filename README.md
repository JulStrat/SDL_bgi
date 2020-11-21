README
------

This is `SDL_bgi`, a Borland Graphics Interface (BGI) emulation
library written in C and based on SDL2. `SDL_bgi` provides graphics
primitives, and is much easier to use than plain SDL2. It should be
especially useful for beginners, i.e. in introductory programming
courses. I wrote `SDL_bgi` because I wanted a simple to use but fast
graphics library for my experiments with fractals and cellular
automata, using the BGI syntax I'm used to.

`SDL_bgi` is fully compatible with the BGI implementation by Borland
(`graphics.h`) that was the 'de facto' standard in PC graphics back in
DOS days (e.g. in Turbo C 2.01). For instance, it compiles and runs
the original `bgidemo.c`. `SDL_bgi` also provides nearly full
compatibility with another BGI implementation, WinBGIm (see links
below). One of the aims of `SDL_bgi` is the preservation of old
software written for BGI. 

`SDL_bgi` is pretty fast and very easy to use, and it also provides
extensions for ARGB colours, mouse support, vector fonts, and multiple
windows. Native SDL2 functions can be used alongside `SDL_bgi`
functions. `SDL_bgi` can be used by C++ programs, too.

`SDL_bgi` should compile on any platform supported by SDL2; it has
been tested on GNU/Linux, MS Windows (MSYS2 + Mingw-w64, CodeBlocks,
Dev-C++), macOS (Yosemite and Catalina), and Raspberry Pi. A few
example programs are provided in the `test/` directory.

If you don't need BGI compatibility, I suggest that you check out
`SDL_gfx`, a graphics library that is more complete and more powerful
than `SDL_bgi`.

Links:

0. The SDL library:
   <https://www.libsdl.org/>

1. WinBGIm, another BGI Windows port:
   <http://www.cs.colorado.edu/~main/cs1300/doc/bgi/>

2. SDL_gfx, graphics drawing primitives and more:
   <https://sourceforge.net/projects/sdl2gfx/>

3. BGI on Wikipedia:
   <https://en.wikipedia.org/wiki/Borland_Graphics_Interface>

4. Xbgi, a BGI XLib port:
   <http://libxbgi.sourceforge.net/>

5. Borland Turbo C 2.01 online emulator:
   <https://archive.org/details/msdos_borland_turbo_c_2.01>

This library is licensed under the Zlib license; please see the
enclosed file LICENSE.

The 8x8 bitmap font comes from Dosbox; GPL.

Hershey fonts `cursive.h`, `futural.h` `futuram.h`, `gothgbt.h`,
`rowmant.h`, `timesrb.h`, and `timesr.h` come from Jari Komppa'a
adaptation, <www.iki.fi/sol/hershey>, released under a very liberal
license. `small.h` is my own work (ZLib license). The original Hershey
fonts are released under their own liberal license.

Brought to you by Guido Gonzato, PhD
<guido dot gonzato at gmail dot com>
