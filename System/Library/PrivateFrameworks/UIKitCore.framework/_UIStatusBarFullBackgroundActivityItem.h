/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIStatusBarBackgroundActivityItem.h>

@class _UIStatusBarStringView;

@interface _UIStatusBarFullBackgroundActivityItem : _UIStatusBarBackgroundActivityItem {

	_UIStatusBarStringView* _detailStringView;

}

@property (nonatomic,retain) _UIStatusBarStringView * detailStringView;              //@synthesize detailStringView=_detailStringView - In the implementation block
+(id)detailDisplayIdentifier;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)viewForIdentifier:(id)arg1 ;
-(id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 ;
-(id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 ;
-(void)_create_backgroundView;
-(_UIStatusBarStringView *)detailStringView;
-(void)_create_detailStringView;
-(void)setDetailStringView:(_UIStatusBarStringView *)arg1 ;
@end

