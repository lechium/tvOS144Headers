/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIIndexBarVisualStyle.h>

@class UIIndexBarView, NSString;

@interface UIIndexBarVisualStyle_Base : NSObject <UIIndexBarVisualStyle> {

	UIIndexBarView* _indexBarView;

}

@property (assign,nonatomic,__weak) UIIndexBarView * indexBarView;              //@synthesize indexBarView=_indexBarView - In the implementation block
@property (nonatomic,readonly) BOOL canBecomeFocused; 
@property (nonatomic,readonly) BOOL overlay; 
@property (nonatomic,readonly) double minLineHeight; 
@property (assign,nonatomic) BOOL expanded; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)overlay;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithView:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(UIIndexBarView *)indexBarView;
-(CGRect)_visibleBoundsForRect:(CGRect)arg1 stride:(double*)arg2 ;
-(long long)_indexForEntryAtPoint:(CGPoint)arg1 ;
-(double)minLineHeight;
-(id)displayEntryFromEntry:(id)arg1 ;
-(void)setIndexBarView:(UIIndexBarView *)arg1 ;
@end

