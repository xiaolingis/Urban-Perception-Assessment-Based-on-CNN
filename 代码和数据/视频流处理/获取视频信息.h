#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

void ��ȡ��Ƶ��Ϣ() {

	VideoCapture capture;
	// �򿪱��ص���Ƶ�ļ�
	capture.open("E:\\_SpatialData\\GIS-Q4\\Q4-�����̵�-20200102_150503\\video.mp4");

	if (!capture.isOpened()) {
		cout << "could not open this capture.." << endl;
		return;
	}

	int width = static_cast<int>(capture.get(CAP_PROP_FRAME_WIDTH));
	int height = static_cast<int>(capture.get(CAP_PROP_FRAME_HEIGHT));
	int count = static_cast<int>(capture.get(CAP_PROP_FRAME_COUNT));
	int fps = static_cast<int>(capture.get(CAP_PROP_FPS));
	cout << "�ֱ��ʣ�(" << width << "x" << height << ") " << endl;
	cout << "��֡����" << capture.get(CAP_PROP_FRAME_COUNT) << endl;
	cout << "֡�ʣ�" << capture.get(CAP_PROP_FPS) << endl;

	// �ͷ���Դ
	capture.release();

}