include $(TOPDIR)/Makefile.conf

NAME = libarch.a
OBJS = console.o divmodsi3.o ldivmod.o x86lib.o

.c.o:
	$(CC) $(CCFLAGS) -I.. -o $*.o $<

.S.o:
	$(AS) $(ASFLAGS) -I.. -o $*.o $<

all: $(NAME) entry.o

$(NAME): $(OBJS)
	rm -f $(NAME)
	$(AR) r $(NAME) $(OBJS)

clean:
	rm -f *.o *.a *.map *~

