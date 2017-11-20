//
//  KZ_ImagePickerViewController.h
//  KZ_PhotoAlbum
//
//  Created by Kieron Zhang on 2016/12/25.
//  Copyright © 2016年 Kieron Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KZ_ImagePickerConst.h"
#import "KZ_ImagePickerProcotal.h"

@interface KZ_ImagePickerViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    UITableView *imageTableView;
    NSMutableArray *imagesListArray;
    UILabel *noAuthorizationLabel;
}
@property (nonatomic, weak) id<KZ_ImagePickerDelegate> delegate;
@property (nonatomic, assign) KZ_ImagePickerType type;
@property (nonatomic, assign) KZ_ImagePickerMediaType mediaType;

- (instancetype)initWithType:(KZ_ImagePickerType)type;

@end
