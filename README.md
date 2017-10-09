Build for Windows:  
1. Install MSYS2
2. Inside MSYS2's window install packages.  pacman -S mingw-w64-i686-gcc mingw-w64-i686-jansson git make 
3. Obtain a copy of this repository. git clone https://github.com/GOSTSec/gostoclminer.git  
4. export PATH=/mingw32/bin:/usr/bin; cd gostoclminer; make -f Makefile.mingw  

Run:  
gostoclminer --url http://127.0.0.1:9376 --userpass "your RPC user":"your RPC password"  
