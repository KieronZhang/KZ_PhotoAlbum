//
//  KZ_ImagePickerProcotal.h
//  KZ_PhotoAlbum
//
//  Created by Kieron Zhang on 2017/10/11.
//  Copyright © 2017年 Kieron Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol KZ_ImagePickerDelegate <NSObject>

- (void)imagePickerDidSendImages;
- (void)imagePickerDidCancel;

@end
