//
//  KZ_ImagePicker.h
//  KZ_PhotoAlbum
//
//  Created by Kieron Zhang on 2017/10/11.
//  Copyright © 2017年 Kieron Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KZ_ImagePickerConst.h"

@interface KZ_ImagePicker : NSObject

@property (nonatomic, assign) KZ_AssetMediaType mediaType;

@property (nonatomic, strong) UIImage *thumbnail;
@property (nonatomic, strong) UIImage *fullScreenImage;

@property (nonatomic, strong) NSString *videoFilename;
@property (nonatomic, strong, readonly) NSURL *videoFileURL;
@property (nonatomic, strong, readonly) NSString *videoFilePath;
@property (nonatomic, strong, readonly) NSData *videoFileData;

@end
