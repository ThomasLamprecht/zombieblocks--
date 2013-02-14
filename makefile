SRCS=main.cpp vector2D.cpp player.cpp zombie.cpp graphics.cpp
OBJS=$(subst .cpp,.o,$(SRCS))

CXX = g++
LD = ld

DEBUG = -g
CFLAGS = -Wall -D_USE_MATH_DEFINES -I/usr/include/SDL -O2 $(DEBUG)
LDFLAGS = -lm -lSDL $(DEBUG)

zombieblocks: $(OBJS)
	$(CXX) $(LDFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CFLAGS) -c -o $@ $^

clean:
	rm $(OBJS)

.PHONY: clean