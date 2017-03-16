export CPLUS_INCLUDE_PATH=$CPLUS_INCLUDE_PATH:/usr/include/python2.7

cd lib/
cmake .
make clean
make

cd ..
cmake .
make clean
make
