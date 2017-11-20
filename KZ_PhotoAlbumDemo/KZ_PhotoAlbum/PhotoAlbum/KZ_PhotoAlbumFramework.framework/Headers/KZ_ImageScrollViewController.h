//
//  KZ_ImageScrollViewController.h
//  KZ_PhotoAlbum
//
//  Created by Kieron Zhang on 2016/12/25.
//  Copyright © 2016年 Kieron Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KZ_ImagePickerProcotal.h"

@class KZ_ImageScrollViewController;
@class KZ_Image;
@class KZ_ReuseScrollView;

@interface KZ_ImageScrollViewController : UIViewController {
    KZ_ReuseScrollView *imageScrollView;
    NSMutableArray *imagesArray;
}
@property (nonatomic, weak) id<KZ_ImagePickerDelegate> delegate;
@property (nonatomic, assign) NSInteger selectIndex;

- (instancetype)initWithImagesArray:(NSArray *)array selectIndex:(NSInteger)selectIndex;

@end
