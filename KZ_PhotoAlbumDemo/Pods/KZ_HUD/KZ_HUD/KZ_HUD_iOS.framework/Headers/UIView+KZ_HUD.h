//
//  UIView+KZ_HUD.h
//  KZ_HUDFramework
//
//  Created by Kieron Zhang on 2017/12/7.
//  Copyright © 2017年 Kieron Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (KZ_HUD)

@property (nonatomic, assign) CGFloat HUDProgress;

- (void)showHUD:(NSString *)HUD animated:(BOOL)animated;
- (void)showHUD:(NSString *)HUD content:(NSString *)content animated:(BOOL)animated;

- (void)showProgressHUD:(NSString *)HUD animated:(BOOL)animated;
- (void)showProgressHUD:(NSString *)HUD content:(NSString *)content animated:(BOOL)animated;
- (void)showAnnularProgressHUD:(NSString *)HUD animated:(BOOL)animated;
- (void)showAnnularProgressHUD:(NSString *)HUD content:(NSString *)content animated:(BOOL)animated;
- (void)showBarProgressHUD:(NSString *)HUD animated:(BOOL)animated;
- (void)showBarProgressHUD:(NSString *)HUD content:(NSString *)content animated:(BOOL)animated;

- (void)showTextHUD:(NSString *)HUD animated:(BOOL)animated;
- (void)showTextHUD:(NSString *)HUD content:(NSString *)content animated:(BOOL)animated;

- (void)showCustomHUD:(NSString *)HUD customView:(UIView *)customView animated:(BOOL)animated;
- (void)showCustomHUD:(NSString *)HUD customView:(UIView *)customView content:(NSString *)content animated:(BOOL)animated;

- (void)addHUDButtonWithTitle:(NSString *)title target:(id)target action:(SEL)action;

- (void)hideHUD;
- (void)hideHUDWithAnimated:(BOOL)animated;

@end

@interface KZ_HUDManager : NSObject

@property (nonatomic, assign) NSTimeInterval fadeDuration;  //Default To 0.2f
@property (nonatomic, assign) CGFloat maxWidthPercent;  //Default To 0.8f
@property (nonatomic, assign) CGFloat maxHeightPercent; //Default To 0.8f
@property (nonatomic, assign) CGFloat horizontalDistance;   //Default To 20.0f
@property (nonatomic, assign) CGFloat verticalDistance; //Default To 20.0f
@property (nonatomic, assign) CGFloat cornerRadius; //Default To 5.0f

@property (nonatomic, strong) UIColor *backgroundColor; //Default To [UIColor colorWithWhite:0.9f alpha:1.0f]
@property (nonatomic, strong) UIColor *activityColor;   //Default To [UIColor colorWithWhite:0.0f alpha:0.8f]
@property (nonatomic, strong) UIColor *HUDColor;    //Default To [UIColor blackColor]
@property (nonatomic, strong) UIColor *contentColor;    //Default To [UIColor blackColor]
@property (nonatomic, strong) UIFont *HUDFont;  //Default To [UIFont systemFontOfSize:16.0f]
@property (nonatomic, strong) UIFont *contentFont;  //Default To [UIFont systemFontOfSize:14.0f]
@property (nonatomic, strong) UIColor *buttonColor; //Default To [UIColor blackColor]
@property (nonatomic, strong) UIFont *buttonFont;   //Default To [UIFont systemFontOfSize:12.0f]
@property (nonatomic, strong) UIColor *buttonBorderColor;   //Default To [UIColor blackColor]
@property (nonatomic, assign) CGFloat buttonBorderWidth;    //Default To 1.0f

@property (nonatomic, assign) CGFloat annularProgressCorner;    //Default To 40.0f
@property (nonatomic, assign) CGFloat annularProgressLineWidth; //Default To 2.0f
@property (nonatomic, strong) UIColor *annularProgressLineColor;    //Default To [UIColor blackColor]
@property (nonatomic, strong) UIColor *annularProgressColor;    //Default To [UIColor colorWithWhite:0.0f alpha:0.1f]
@property (nonatomic, assign) CGFloat barProgressWidth; //Default To 120.0f
@property (nonatomic, assign) CGFloat barProgressHeight;    //Default To 10.0f
@property (nonatomic, assign) CGFloat barProgressLineWidth; //Default To 2.0f
@property (nonatomic, strong) UIColor *barProgressLineColor;    //Default To [UIColor blackColor]
@property (nonatomic, strong) UIColor *barProgressColor;    //Default To [UIColor blackColor]

+ (instancetype)sharedManager;

@end
