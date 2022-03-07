# This is a comment (like Python comments)
# If you just type "make" the top most
# target is run.
# You can also specigy by typing "make main"
# "make help" etc. 
main: main.cpp
  g++ -omain main.cpp

help:
  echo "This is a help screen"
  echo "You can make main"
  echo "or or make clean"
  echo "or make help"

chain:
  echo "chain was called"

chain2: 
  echo "chain 2 was called"

chain3:
  echo "chain 3 was called"
  ls
// Did he add the a symblols before ehco???