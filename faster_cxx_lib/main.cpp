#include "faster_rcnn.hpp"
int main()
{
	//string model_file = "/home/lyh1/workspace/py-faster-rcnn/models/pascal_voc/VGG_CNN_M_1024/faster_rcnn_alt_opt/faster_rcnn_test.pt";
	//string weights_file = "/home/lyh1/workspace/py-faster-rcnn/output/default/yuanzhang_car/vgg_cnn_m_1024_fast_rcnn_stage2_iter_40000.caffemodel";

    // alt_opt
    string model_file = "/data/jinbin.lin/dev/py-faster-rcnn/models/pascal_voc/VGG16/faster_rcnn_alt_opt/faster_rcnn_test.pt";
    string weights_file = "/data/jinbin.lin/dev/py-faster-rcnn/output/faster_rcnn_alt_opt/voc_2007_trainval/VGG16_faster_rcnn_final.caffemodel";

    // end2end
    //string model_file = "/data/jinbin.lin/dev/py-faster-rcnn/models/pascal_voc/VGG16/faster_rcnn_end2end/test.prototxt";
    //string weights_file = "/data/jinbin.lin/dev/py-faster-rcnn/output/faster_rcnn_end2end/voc_2007_trainval/vgg16_faster_rcnn_iter_70000.caffemodel";

    //Caffe::set_mode(Caffe::CPU);

    // TODO: set GPUID > 0 may result in one error (at least in my local testing):
    // error == cudaSuccess (77 vs. 0) an illegal memory access was encountered
    int GPUID = 0;
    Caffe::SetDevice(GPUID);
    Caffe::set_mode(Caffe::GPU);

    Detector det = Detector(model_file, weights_file);
    //det.Detect("/data/jinbin.lin/dev/py-faster-rcnn/data/demo/car.jpg");
    //det.Detect("/data/jinbin.lin/dev/py-faster-rcnn/data/demo/000456.jpg");
    //det.Detect("/data/jinbin.lin/dev/py-faster-rcnn/data/demo/001150.jpg");
    //det.Detect("/data/jinbin.lin/dev/py-faster-rcnn/data/demo/001763.jpg");
    det.Detect("/data/jinbin.lin/dev/py-faster-rcnn/data/demo/004545.jpg");
    return 0;
}
