export CPLUS_INCLUDE_PATH=$CPLUS_INCLUDE_PATH:/usr/include/python2.7
export PYTHONPATH=$PYTHONPATH:/data/jinbin.lin/dev/py-faster-rcnn/caffe-fast-rcnn/python

cd lib/

rm CMakeCache.txt

cmake .
make clean
make

cd ..

rm CMakeCache.txt

cmake .
make clean
make
