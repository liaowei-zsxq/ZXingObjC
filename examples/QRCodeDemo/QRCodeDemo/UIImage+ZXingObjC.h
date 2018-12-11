//
//  UIImage+ZXingObjC.h
//  QRCodeDemo
//
//  Created by cntrump@gmail.com on 2018/12/11.
//  Copyright © 2018 vvveiii. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (ZXingObjC)

+ (UIImage *)zx_QRCodeWithString:(NSString *)string;

+ (UIImage *)zx_QRCodeWithString:(NSString *)string targetSize:(CGSize)targetSize;

+ (UIImage *)zx_QRCodeWithString:(NSString *)string targetSize:(CGSize)targetSize
                         onColor:(UIColor *)onColor offColor:(UIColor *)offColor;
@end
