/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKLinkedApplicationObserver.h>

@class WLEasyToHitCustomButton, UIImage, PKLinkedApplication, NSString;

@interface PKLinkedAppIconView : UIView <PKLinkedApplicationObserver> {

	WLEasyToHitCustomButton* _iconButton;
	UIImage* _iconImage;
	PKLinkedApplication* _linkedApplication;

}

@property (nonatomic,readonly) PKLinkedApplication * linkedApplication;              //@synthesize linkedApplication=_linkedApplication - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)tapped:(id)arg1 ;
-(id)initWithLinkedApplication:(id)arg1 ;
-(void)linkedApplicationDidChangeState:(id)arg1 ;
-(PKLinkedApplication *)linkedApplication;
-(void)_updateWithIconImage:(id)arg1 animated:(BOOL)arg2 ;
@end

