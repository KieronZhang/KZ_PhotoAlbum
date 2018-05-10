//
//  KZ_ImagePickerVideoViewController.h
//  KZ_PhotoAlbum
//
//  Created by Kieron Zhang on 2016/12/25.
//  Copyright © 2016年 Kieron Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KZ_ImagePickerProcotal.h"

@class KZ_Image;
@class KZ_ImagePickerVideoViewController;

@interface KZ_ImagePickerVideoViewController : UIViewController

@property (nonatomic, weak) id<KZ_ImagePickerDelegate> delegate;
@property (nonatomic, strong) KZ_Image *image;

- (instancetype)initWithImage:(KZ_Image *)image;

@end
