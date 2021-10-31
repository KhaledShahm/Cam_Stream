#include "Cam_Stream.h"

#ifdef __cplusplus
extern "C" {
#endif
	extern __declspec(dllexport) Cam_Stream* CreateCam();
	extern __declspec(dllexport) void Start(Cam_Stream* a_pObject);
	extern __declspec(dllexport) void Stop(Cam_Stream* a_pObject);
	extern __declspec(dllexport) cv::Mat* readFrame(Cam_Stream* a_pObject);
#ifdef __cplusplus
}
#endif

