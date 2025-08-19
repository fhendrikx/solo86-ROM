include $(TOPDIR)/Makefile.conf

NAME = main
LIBS = -Larch -L$(TOPDIR)/lib -larch
OBJS = console.o ctype.o fault.o irq.o main.o mem.o printf.o string.o vsprintf.o

.c.o:
	$(CC) $(CCFLAGS) -o $*.o $<

.S.o:
	$(AS) $(ASFLAGS) -o $*.o $<

all: arch $(NAME)

arch::
	rm -f $(NAME)
	$(MAKE) -C arch

$(NAME): $(OBJS)
	$(LD) arch/entry.o $(OBJS) $(LIBS) -T $(NAME).ld --oformat=binary -m i386elks -Map $(NAME).map -o $(NAME)
	$(CP) $(NAME) $(TOPDIR)/out

clean:
	rm -f $(NAME)
	rm -f *.o *.a *.map *~
	$(MAKE) -C arch clean
