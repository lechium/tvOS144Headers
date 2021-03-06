/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIImageView.h>

@class UIView, UIImageView;

@interface _UIBarBackgroundImageView : UIImageView {

	UIView* _topStripView;
	UIImageView* _customImageContainer;
	BOOL _translucent;

}

@property (assign,getter=isTranslucent,nonatomic) BOOL translucent;              //@synthesize translucent=_translucent - In the implementation block
-(id)image;
-(void)setImage:(id)arg1 ;
-(void)setTranslucent:(BOOL)arg1 ;
-(BOOL)isTranslucent;
-(id)topStripView;
-(void)updateTopStripViewCreateIfNecessary;
-(void)removeTopStripView;
@end

