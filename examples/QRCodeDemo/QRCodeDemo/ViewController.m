//
//  ViewController.m
//  QRCodeDemo
//
//  Created by cntrump@gmail.com on 2018/12/11.
//  Copyright © 2018 vvveiii. All rights reserved.
//

#import "ViewController.h"
#import "UIImage+ZXingObjC.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.

    UIImageView *qrcodeImageView = [[UIImageView alloc] initWithImage:[UIImage zx_QRCodeWithString:@"hello ZXingObjc!"]];
    qrcodeImageView.frame = CGRectMake(0, 0, 100, 100);
    [self.view addSubview:qrcodeImageView];
    qrcodeImageView.center = self.view.center;
}

@end
