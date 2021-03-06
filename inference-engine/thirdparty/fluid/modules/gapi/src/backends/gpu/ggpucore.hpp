// This file is part of OpenCV project.
// It is subject to the license terms in the LICENSE file found in the top-level directory
// of this distribution and at http://opencv.org/license.html.
//
// Copyright (C) 2018-2019 Intel Corporation


#ifndef OPENCV_GAPI_GGPUCORE_HPP
#define OPENCV_GAPI_GGPUCORE_HPP

#include <map>
#include <string>

#include "opencv2/gapi/gpu/ggpukernel.hpp"

namespace cv { namespace gimpl {

// NB: This is what a "Kernel Package" from the original Wiki doc should be.
void loadGPUCore(std::map<std::string, cv::GGPUKernel> &kmap);

}
}

#endif // OPENCV_GAPI_GGPUCORE_HPP
