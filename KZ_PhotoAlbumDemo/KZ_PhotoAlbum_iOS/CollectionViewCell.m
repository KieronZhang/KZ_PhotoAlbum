//
//  CollectionViewCell.m
//  KZ_PhotoAlbum_iOS
//
//  Created by Kieron Zhang on 2018/5/10.
//  Copyright © 2018年 Kieron Zhang. All rights reserved.
//

#import "CollectionViewCell.h"

@implementation CollectionViewCell

- (instancetype)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        mainImageView = [[UIImageView alloc] initWithFrame:self.bounds];
        [self.contentView addSubview:mainImageView];
    }
    return self;
}

- (void)setImage:(UIImage *)image {
    mainImageView.image = image;
}

@end
