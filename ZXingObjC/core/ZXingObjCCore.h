/*
 * Copyright 2012 ZXing authors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _ZXINGOBJC_CORE_

#define _ZXINGOBJC_CORE_

// Client
#import <ZXingObjC/ZXCapture.h>
#import <ZXingObjC/ZXCaptureDelegate.h>
#import <ZXingObjC/ZXCGImageLuminanceSource.h>
#import <ZXingObjC/ZXImage.h>

// Common
#import <ZXingObjC/ZXBitArray.h>
#import <ZXingObjC/ZXBitMatrix.h>
#import <ZXingObjC/ZXBitSource.h>
#import <ZXingObjC/ZXBoolArray.h>
#import <ZXingObjC/ZXByteArray.h>
#import <ZXingObjC/ZXCharacterSetECI.h>
#import <ZXingObjC/ZXDecoderResult.h>
#import <ZXingObjC/ZXDefaultGridSampler.h>
#import <ZXingObjC/ZXDetectorResult.h>
#import <ZXingObjC/ZXGenericGF.h>
#import <ZXingObjC/ZXGlobalHistogramBinarizer.h>
#import <ZXingObjC/ZXGridSampler.h>
#import <ZXingObjC/ZXHybridBinarizer.h>
#import <ZXingObjC/ZXIntArray.h>
#import <ZXingObjC/ZXMathUtils.h>
#import <ZXingObjC/ZXMonochromeRectangleDetector.h>
#import <ZXingObjC/ZXPerspectiveTransform.h>
#import <ZXingObjC/ZXReedSolomonDecoder.h>
#import <ZXingObjC/ZXReedSolomonEncoder.h>
#import <ZXingObjC/ZXStringUtils.h>
#import <ZXingObjC/ZXWhiteRectangleDetector.h>

// Core
#import <ZXingObjC/ZXBarcodeFormat.h>
#import <ZXingObjC/ZXBinarizer.h>
#import <ZXingObjC/ZXBinaryBitmap.h>
#import <ZXingObjC/ZXByteMatrix.h>
#import <ZXingObjC/ZXDecodeHints.h>
#import <ZXingObjC/ZXDimension.h>
#import <ZXingObjC/ZXEncodeHints.h>
#import <ZXingObjC/ZXErrors.h>
#import <ZXingObjC/ZXInvertedLuminanceSource.h>
#import <ZXingObjC/ZXLuminanceSource.h>
#import <ZXingObjC/ZXPlanarYUVLuminanceSource.h>
#import <ZXingObjC/ZXReader.h>
#import <ZXingObjC/ZXResult.h>
#import <ZXingObjC/ZXResultMetadataType.h>
#import <ZXingObjC/ZXResultPoint.h>
#import <ZXingObjC/ZXResultPointCallback.h>
#import <ZXingObjC/ZXRGBLuminanceSource.h>
#import <ZXingObjC/ZXWriter.h>

// Multi
#import <ZXingObjC/ZXByQuadrantReader.h>
#import <ZXingObjC/ZXGenericMultipleBarcodeReader.h>
#import <ZXingObjC/ZXMultipleBarcodeReader.h>

#endif
