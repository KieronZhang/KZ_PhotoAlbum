//
//  KZ_ImagePickerUtils.h
//  KZ_PhotoAlbum
//
//  Created by Kieron Zhang on 2016/12/25.
//  Copyright © 2016年 Kieron Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define ImageSpacing 20

@interface KZ_ImagePickerUtils : NSObject

+ (CGSize)transImageSizeWithImage:(UIImage *)image maxWidth:(float)width;
+ (CGSize)transImageSizeWithImage:(UIImage *)image;

+ (NSURL *)imagePickerVideoPathWithFilename:(NSString *)filename;
+ (NSString *)imagePickerVideoStringPathWithFilename:(NSString *)filename;
+ (NSData *)imagePickerVideoDataWithFilename:(NSString *)filename;
+ (NSString *)dataLengthStringWithData:(NSData *)data;

+ (void)removeVideoPathWithFilename:(NSString *)filename;

+ (void)popEffectStart:(UIView *)view;

+ (UIImage *)fixOrientation:(UIImage *)aImage;

@end
