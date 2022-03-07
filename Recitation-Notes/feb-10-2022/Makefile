adders.o: adders.cpp adders.h
  g++ -c adders.cpp
utils.o: utils.cpp utils.h adders.h
  g++ -c utils.cpp
main.o: main.cpp utilsh adders.h
  g++ -c main.cpp
main: main.o utils.o adders.o
  g++ -o main main.o utils.o adders.o

clean:
  rm -f main.o adders.o utils.o
help:
  @echo "Targets;"
  @echo " main"
  @echo " clean"
  @echo " help"