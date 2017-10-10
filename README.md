Build for Windows:
1. Install [MSYS2](http://www.msys2.org/)
2. Inside **MSYS2 MinGW 32-bit** terminal install packages
```bash
$ pacman -S mingw-w64-i686-gcc mingw-w64-i686-jansson git make
```
3. Obtain a copy of this repository
```bash
$ git clone https://github.com/GOSTSec/gostoclminer.git
$ cd gostoclminer
```
4. Build gostclminer
```bash
$ make -f Makefile.mingw
```

Run:
```bash
$ gostoclminer --url http://127.0.0.1:9376 --userpass "your RPC user":"your RPC password" -i 16
```
