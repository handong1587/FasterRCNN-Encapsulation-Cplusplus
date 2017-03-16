
#This part is used for compile faster_rcnn_demo.cpp
cmake_minimum_required (VERSION 2.8)

project (main_demo)

add_executable(main main.cpp)

include_directories ( "${PROJECT_SOURCE_DIR}/../caffe-fast-rcnn/include"
    "${PROJECT_SOURCE_DIR}/../lib/nms" 
    "${PROJECT_SOURCE_DIR}/lib" 
    /data/jinbin.lin/dev/py-faster-rcnn/lib/nms 
    /share/apps/local/include
    /usr/local/include 
    /opt/python/include/python2.7
    /share/apps/opt/intel/mkl/include 
    /usr/local/cuda/include )

target_link_libraries(main /data/jinbin.lin/dev/py-faster-rcnn/faster_cxx_lib/lib/libfaster_rcnn.so
    /data/jinbin.lin/dev/py-faster-rcnn/caffe-fast-rcnn/build/lib/libcaffe.so
    /data/jinbin.lin/dev/py-faster-rcnn/lib/nms/gpu_nms.so 
    /usr/local/lib/libopencv_highgui.so 
    /usr/local/lib/libopencv_core.so 
    /usr/local/lib/libopencv_imgproc.so 
    /usr/lib/x86_64-linux-gnu/libglog.so
    /usr/lib/x86_64-linux-gnu/libboost_system.so
    /usr/lib/x86_64-linux-gnu/libboost_python.so
    /usr/lib/x86_64-linux-gnu/libglog.so
    /usr/lib/x86_64-linux-gnu/libpython2.7.so
    )

