//
//  SkinVideoViewController.h
//  polyvSDK
//
//  Created by seanwong on 8/17/15.
//  Copyright (c) 2015 easefun. All rights reserved.
//
#import <UIKit/UIKit.h>

@interface SkinVideoViewControllerView : UIView

@property (nonatomic, strong, readonly) UIView *topBar;
@property (nonatomic, strong, readonly) UIView *bitRateView;
@property (nonatomic, strong, readonly) UIView *bottomBar;
@property (nonatomic, strong, readonly) UIButton *playButton;
@property (nonatomic, strong, readonly) UIButton *backButton;
@property (nonatomic, strong, readonly) UIButton *pauseButton;
@property (nonatomic, strong, readonly) UIButton *fullScreenButton;
@property (nonatomic, strong, readonly) UIButton *shrinkScreenButton;
@property (nonatomic, strong, readonly) UISlider *progressSlider;
@property (nonatomic, strong, readonly) UIButton *closeButton;
@property (nonatomic, strong, readonly) UILabel *timeLabel;
@property (nonatomic, strong, readonly) UIActivityIndicatorView *indicatorView;
@property (nonatomic, strong, readonly) UIButton *bitRateButton;
@property (nonatomic, strong, readonly) UIButton *danmuButton;
@property (nonatomic, strong, readonly) UIButton *sendDanmuButton;
@property (nonatomic, assign) BOOL showInWindowMode;


- (void)animateHide;
- (void)animateShow;
- (void)autoFadeOutControlBar;
- (void)cancelAutoFadeOutControlBar;
- (NSMutableArray*)createBitRateButton:(int)dfnum;
- (void)changeToFullsreen;
- (void)changeToSmallsreen;
- (void)videoInfoLoaded:(NSDictionary*)videoInfo;
- (void)setHeadTitle:(NSString*)headtitle;
- (void)setDanmuButtonColor:(UIColor*)color;
- (NSString *)videoImageName:(NSString *)name;
@end