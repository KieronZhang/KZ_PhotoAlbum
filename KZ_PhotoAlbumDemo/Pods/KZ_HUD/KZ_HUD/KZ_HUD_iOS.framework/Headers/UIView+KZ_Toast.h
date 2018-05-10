//
//  UIView+KZ_Toast.h
//  KZ_HUDFramework
//
//  Created by Kieron Zhang on 2017/12/7.
//  Copyright © 2017年 Kieron Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, KZ_ToastPosition) {
    KZ_ToastPosition_Top,
    KZ_ToastPosition_Center,
    KZ_ToastPosition_Bottom
};

typedef NS_ENUM(NSInteger, KZ_ToastQueueType) {
    KZ_ToastQueueType_Normal,
    KZ_ToastQueueType_Queue,
    KZ_ToastQueueType_Cover,
};

@interface UIView (KZ_Toast)

- (void)showToast:(NSString *)toast;
- (void)showToast:(NSString *)toast duration:(NSTimeInterval)duration position:(KZ_ToastPosition)position;
- (void)showToast:(NSString *)toast duration:(NSTimeInterval)duration position:(KZ_ToastPosition)position completion:(void (^)(BOOL tapped))completion;

- (void)showToast:(NSString *)toast title:(NSString *)title image:(UIImage *)image duration:(NSTimeInterval)duration position:(KZ_ToastPosition)position;
- (void)showToast:(NSString *)toast title:(NSString *)title image:(UIImage *)image duration:(NSTimeInterval)duration position:(KZ_ToastPosition)position completion:(void (^)(BOOL tapped))completion;

- (void)showToastView:(UIView *)view;
- (void)showToastView:(UIView *)view duration:(NSTimeInterval)duration position:(KZ_ToastPosition)position completion:(void (^)(BOOL tapped))completion;

- (void)hideToastView:(UIView *)view;
- (void)hideAllToast;

@end

@interface KZ_ToastManager : NSObject

@property (nonatomic, assign) BOOL tapToDisappear;  //Default To YES
@property (nonatomic, assign) NSTimeInterval defaultDuration;   //Default To 2.0f
@property (nonatomic, assign) KZ_ToastPosition defaultPosition; //Default To KZ_ToastPosition_Center
@property (nonatomic, assign) KZ_ToastQueueType defaultQueueType;   //Default To KZ_ToastQueueType_Cover
@property (nonatomic, assign) NSTimeInterval fadeDuration;  //Default To 0.2f
@property (nonatomic, assign) CGFloat maxWidthPercent;  //Default To 0.8f
@property (nonatomic, assign) CGFloat maxHeightPercent; //Default To 0.8f
@property (nonatomic, assign) CGFloat horizontalDistance;   //Default To 10.0f
@property (nonatomic, assign) CGFloat verticalDistance; //Default To 10.0f
@property (nonatomic, assign) CGFloat cornerRadius; //Default To 10.0f

@property (nonatomic, strong) UIColor *backgroundColor; //Default To [UIColor colorWithWhite:0.0f alpha:0.8f]
@property (nonatomic, strong) UIColor *toastColor;  //Default To [UIColor whiteColor]
@property (nonatomic, strong) UIColor *titleColor;  //Default To [UIColor whiteColor]
@property (nonatomic, strong) UIFont *toastFont;    //Default To [UIFont systemFontOfSize:14.0f]
@property (nonatomic, strong) UIFont *titleFont;    //Default To [UIFont systemFontOfSize:16.0f]
@property (nonatomic, assign) NSTextAlignment toastAlignment;   //Default To NSTextAlignmentLeft
@property (nonatomic, assign) NSTextAlignment titleAlignment;   //Default To NSTextAlignmentLeft

+ (instancetype)sharedManager;

@end
