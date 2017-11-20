//
//  CollectionViewCell.h
//  KZ_PhotoAlbum
//
//  Created by Kieron Zhang on 2016/12/25.
//  Copyright © 2016年 Kieron Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CollectionViewCell : UICollectionViewCell {
    UIImageView *mainImageView;
}
@property (nonatomic, strong) UIImage *image;

@end
