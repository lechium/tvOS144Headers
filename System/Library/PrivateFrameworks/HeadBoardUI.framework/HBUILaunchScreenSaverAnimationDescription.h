/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HeadBoardUI.framework/HeadBoardUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HeadBoardUI/HBUILaunchAnimationDescription.h>

@class UIView, NSArray;

@interface HBUILaunchScreenSaverAnimationDescription : HBUILaunchAnimationDescription {

	UIView* _topShelfView;
	NSArray* _appGridViews;

}

@property (nonatomic,readonly) UIView * topShelfView;               //@synthesize topShelfView=_topShelfView - In the implementation block
@property (nonatomic,readonly) NSArray * appGridViews;              //@synthesize appGridViews=_appGridViews - In the implementation block
-(id)debugDescription;
-(id)initWithTopShelfView:(id)arg1 ;
-(id)initWithAppGridViews:(id)arg1 ;
-(UIView *)topShelfView;
-(NSArray *)appGridViews;
@end

