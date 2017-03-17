This project is forked from [FasterRCNN-Encapsulation-Cplusplus](https://github.com/YihangLou/FasterRCNN-Encapsulation-Cplusplu) .

Please refer to below blogs for detail explanations.

**faster_rcnn c++版本的 caffe 封装（1）**

[http://www.cnblogs.com/louyihang-loves-baiyan/p/5485955.html](http://www.cnblogs.com/louyihang-loves-baiyan/p/5485955.html)

**faster_rcnn c++版本的 caffe 封装，动态库（2）**

[http://www.cnblogs.com/louyihang-loves-baiyan/p/5493344.html](http://www.cnblogs.com/louyihang-loves-baiyan/p/5493344.html)

**将Faster RCNN的python demo改成C++ demo**

[http://blog.csdn.net/xyy19920105/article/details/50440957](http://blog.csdn.net/xyy19920105/article/details/50440957)


I added some local modifications to make it run on my Ubuntu 14.04 system, mostly on directory `faster_cxx_lib`.

Original project use OpenCV3, I downgrade to use OpenCV2 (I remove all libopencv_imgcodecs dependencies in make scripts)

To use this demo, you will need to put directory `faster_cxx_lib` under `py-faster-rcnn/` .

cd to faster_cxx_lib, first run `./make_all.sh`, then run `./run_main.sh`

It can run on both py-faster-rcnn's `alt-opt` and `end2end` caffemodels.
