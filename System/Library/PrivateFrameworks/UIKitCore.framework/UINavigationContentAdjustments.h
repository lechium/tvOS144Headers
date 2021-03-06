/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class UIScrollView;

@interface UINavigationContentAdjustments : NSObject {

	UIScrollView* _adjustedScrollView;
	UIEdgeInsets _insetAdjustment;

}

@property (assign,nonatomic,__weak) UIScrollView * adjustedScrollView;              //@synthesize adjustedScrollView=_adjustedScrollView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insetAdjustment;                          //@synthesize insetAdjustment=_insetAdjustment - In the implementation block
-(UIScrollView *)adjustedScrollView;
-(void)setAdjustedScrollView:(UIScrollView *)arg1 ;
-(UIEdgeInsets)insetAdjustment;
-(void)setInsetAdjustment:(UIEdgeInsets)arg1 ;
@end

