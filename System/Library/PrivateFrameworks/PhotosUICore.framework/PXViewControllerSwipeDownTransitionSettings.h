/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXSettings.h>

@class PXSwipeDownSettings;

@interface PXViewControllerSwipeDownTransitionSettings : PXSettings {

	BOOL _allowSwipeDown;
	double _minimumDimmingOpacity;
	PXSwipeDownSettings* _swipeDownSettings;

}

@property (assign,nonatomic) BOOL allowSwipeDown;                                  //@synthesize allowSwipeDown=_allowSwipeDown - In the implementation block
@property (assign,nonatomic) double minimumDimmingOpacity;                         //@synthesize minimumDimmingOpacity=_minimumDimmingOpacity - In the implementation block
@property (nonatomic,retain) PXSwipeDownSettings * swipeDownSettings;              //@synthesize swipeDownSettings=_swipeDownSettings - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(void)createChildren;
-(void)setDefaultValues;
-(id)parentSettings;
-(BOOL)allowSwipeDown;
-(void)setAllowSwipeDown:(BOOL)arg1 ;
-(double)minimumDimmingOpacity;
-(void)setMinimumDimmingOpacity:(double)arg1 ;
-(PXSwipeDownSettings *)swipeDownSettings;
-(void)setSwipeDownSettings:(PXSwipeDownSettings *)arg1 ;
@end
