#include "Caller.h"


Cam_Stream* CreateCam()
{
    return new Cam_Stream();
}

void Start(Cam_Stream* a_pObject)
{
    if (a_pObject != NULL)
    {
        a_pObject->start();
    }
}


void Stop(Cam_Stream* a_pObject)
{
    if (a_pObject != NULL)
    {
        a_pObject->stop();
    }
}

cv::Mat* readFrame(Cam_Stream* a_pObject)
{
    if (a_pObject != NULL)
    {
        return a_pObject->read();
    }
}
