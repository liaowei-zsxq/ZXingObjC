//
//  UIImage+ZXingObjC.m
//  QRCodeDemo
//
//  Created by cntrump@gmail.com on 2018/12/11.
//  Copyright © 2018 vvveiii. All rights reserved.
//

#import "UIImage+ZXingObjC.h"
#import <ZXingObjC/ZXingObjC.h>

@implementation UIImage (ZXingObjC)

+ (UIImage *)zx_QRCodeWithString:(NSString *)string {
    return [self zx_QRCodeWithString:string targetSize:CGSizeZero];
}

+ (UIImage *)zx_QRCodeWithString:(NSString *)string targetSize:(CGSize)targetSize {
    return [self zx_QRCodeWithString:string targetSize:targetSize onColor:nil offColor:nil];
}

+ (UIImage *)zx_QRCodeWithString:(NSString *)string targetSize:(CGSize)targetSize
                         onColor:(UIColor *)onColor offColor:(UIColor *)offColor {
    if (string.length == 0) {
        return nil;
    }
    
    if (targetSize.width < 1 || targetSize.height < 1) {
        targetSize = CGSizeMake(64, 64);
    }

    if (!onColor) {
        onColor = UIColor.blackColor;
    }

    if (!offColor) {
        offColor = UIColor.clearColor;
    }

    CGFloat scale = [UIScreen mainScreen].scale;
    ZXEncodeHints *hints = [ZXEncodeHints hints];
    hints.encoding = NSUTF8StringEncoding;
    hints.margin = [NSNumber numberWithInteger:0];
    hints.errorCorrectionLevel = [ZXQRCodeErrorCorrectionLevel errorCorrectionLevelL];

    NSError *error = nil;
    ZXQRCodeWriter *writer = [[ZXQRCodeWriter alloc] init];
    ZXBitMatrix *result = [writer encode:string
                                  format:kBarcodeFormatQRCode
                                   width:ceil(targetSize.width * scale)
                                  height:ceil(targetSize.height * scale)
                                   hints:hints
                                   error:&error];

    CGImageRef imageRef = CGImageRetain([[ZXImage imageWithMatrix:result onColor:onColor.CGColor offColor:offColor.CGColor] cgimage]);
    UIImage *image = [UIImage imageWithCGImage:imageRef scale:scale orientation:UIImageOrientationUp];
    CGImageRelease(imageRef);

    return image;
}

@end
