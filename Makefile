CHARMC = /jet/home/mkjacob3/charm/bin/charmc

OBJS = ping_pong.o


all: ping_pong


ping_pong: $(OBJS)
	$(CHARMC) -language charm++ -o ping_pong $(OBJS)

ping_pong.o: ping_pong.C ping_pong.decl.h
	$(CHARMC) -c ping_pong.C

ping_pong.decl.h: ping_pong.ci
	$(CHARMC) ping_pong.ci

clean:
	rm -f *.decl.h *.def.h conv-host *.o ping_pong charmrun




