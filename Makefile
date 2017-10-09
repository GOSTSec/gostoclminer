INCLUDEPATHS=-I.

LIBS=-lOpenCL -ljansson -lcurl -lpthread 
# LDFLAGS = -L$(AMDAPPSDKROOT)/lib/x86_64
LDFLAGS = -L/usr/local/cuda/lib64

DEFS=
DEBUGFLAGS=-g
CFLAGS=-O3 -Wformat $(DEBUGFLAGS) $(DEFS) $(INCLUDEPATHS)
HEADERS=

OBJS=miner.o ocl.o util.o streebog.o

all: gostoclminer

%.o: %.c $(HEADERS)
	gcc -c $(CFLAGS) -o $@ $<

gostoclminer: $(OBJS) 
	gcc $(LDFLAGS) -o $@ $^ $(LIBS)

clean:
	-rm *.o gostoclminer
