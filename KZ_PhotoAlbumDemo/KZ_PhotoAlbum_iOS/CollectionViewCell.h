//
//  CollectionViewCell.h
//  KZ_PhotoAlbum_iOS
//
//  Created by Kieron Zhang on 2018/5/10.
//  Copyright © 2018年 Kieron Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CollectionViewCell : UICollectionViewCell {
    UIImageView *mainImageView;
}
@property (nonatomic, strong) UIImage *image;

@end
