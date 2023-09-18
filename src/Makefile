CC = g++
TARGET = main
OBJS = card.o cardDeck.o

all: $(TARGET)

$(TARGET): $(OBJS) main.cpp card.h cardDeck.h card.cpp cardDeck.cpp
	$(CC) main.cpp -o $(TARGET) $(OBJS)

$(OBJS): %.o: %.cpp %.h
	$(CC) -c $< -o $@

clean:
	rm -f $(TARGET) *.o 

