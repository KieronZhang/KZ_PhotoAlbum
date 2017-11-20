//
//  CollectionViewCell.m
//  KZ_PhotoAlbum
//
//  Created by Kieron Zhang on 2016/12/25.
//  Copyright © 2016年 Kieron Zhang. All rights reserved.
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
