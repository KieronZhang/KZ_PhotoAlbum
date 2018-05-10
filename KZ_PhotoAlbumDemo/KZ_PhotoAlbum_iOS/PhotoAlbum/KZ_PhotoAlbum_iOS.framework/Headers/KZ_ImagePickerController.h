//
//  KZ_ImagePickerController.h
//  KZ_PhotoAlbum
//
//  Created by Kieron Zhang on 2016/12/25.
//  Copyright © 2016年 Kieron Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KZ_ImagePickerConst.h"
#import "KZ_ImagePickerUtils.h"
#import "KZ_ImagePicker.h"

@class KZ_ImagePickerController;

@protocol KZ_ImagePickerControllerDelegate <NSObject>

@optional
- (void)imagePickerController:(KZ_ImagePickerController *)imagePickerController didSelectImages:(NSArray<KZ_ImagePicker *> *)array;
- (void)imagePickerControllerDidAlreadyCancel:(KZ_ImagePickerController *)imagePickerController;

@end

@interface KZ_ImagePickerController : UINavigationController

@property (nonatomic, weak) id<KZ_ImagePickerControllerDelegate> imagePickerDelegate;
@property (nonatomic, assign) KZ_ImagePickerType type;
@property (nonatomic, assign) KZ_ImagePickerMediaType mediaType;
@property (nonatomic, strong) UIColor *navigationTintColor;
@property (nonatomic, assign) UIBarStyle navigationBarStyle;

@property (nonatomic, assign) int maxSelectImageCount;
@property (nonatomic, strong) UIColor *imageTintColor;
@property (nonatomic, assign) BOOL directShowLargePhoto;
@property (nonatomic, strong) NSString *noAuthorizationText;

- (instancetype)initWithType:(KZ_ImagePickerType)type;

@end
