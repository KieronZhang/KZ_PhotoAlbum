//
//  KZ_ImagePickerCollectViewController.h
//  KZ_PhotoAlbum
//
//  Created by Kieron Zhang on 2016/12/25.
//  Copyright © 2016年 Kieron Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KZ_ImagePickerProcotal.h"

@class KZ_Image;
@class KZ_ImageGroup;
@class KZ_ImagePickerCollectViewController;

@interface KZ_ImagePickerCollectViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource> {
    UICollectionView *imageCollectionView;
}
@property (nonatomic, weak) id<KZ_ImagePickerDelegate> delegate;
@property (nonatomic, strong) KZ_ImageGroup *group;

- (instancetype)initWithGroup:(KZ_ImageGroup *)group;

@end
