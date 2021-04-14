/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol UILayoutContainerViewDelegate;
@class UIView;

@interface UILayoutContainerView : UIView <NSCoding> {

	UIView* _shadowView;
	struct {
		unsigned delegateRespondsToSemanticContentAttributeChanged : 1;
		unsigned delegateRespondsToViewWillLayoutSubviews : 1;
		unsigned delegateRespondsToWillMoveToWindow : 1;
		unsigned delegateRespondsToDidMoveToWindow : 1;
	}  _layoutContainerViewFlags;
	BOOL _usesInnerShadow;
	BOOL _usesRoundedCorners;
	id<UILayoutContainerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<UILayoutContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL usesInnerShadow;                                           //@synthesize usesInnerShadow=_usesInnerShadow - In the implementation block
@property (assign,nonatomic) BOOL usesRoundedCorners;                                        //@synthesize usesRoundedCorners=_usesRoundedCorners - In the implementation block
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<UILayoutContainerViewDelegate>)delegate;
-(void)setDelegate:(id<UILayoutContainerViewDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)addSubview:(id)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)_setFlagsFromDelegate:(id)arg1 ;
-(void)_updateShadowViews;
-(void)_installShadowViews;
-(void)_tearDownShadowViews;
-(void)setUsesRoundedCorners:(BOOL)arg1 ;
-(void)setUsesInnerShadow:(BOOL)arg1 ;
-(BOOL)usesInnerShadow;
-(BOOL)usesRoundedCorners;
@end

