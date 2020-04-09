exe = main

c_type = g++
c_flgs = -Ofast -c -Wall

srcs = main.cpp performance.cpp
objs = $(srcs:.cpp=.o)

$(exe): $(objs)
	$(c_type) $^ -o $@

%.o: %.cpp
	$(c_type) $(c_flgs) $< -o $@

.PHONY: clean

clean:
	$(RM) $(objs)
