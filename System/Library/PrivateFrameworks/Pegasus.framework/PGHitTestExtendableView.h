/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Pegasus/Pegasus-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface PGHitTestExtendableView : UIView {

	UIView* _hitTestExtenderView;

}

@property (assign,nonatomic,__weak) UIView * hitTestExtenderView;              //@synthesize hitTestExtenderView=_hitTestExtenderView - In the implementation block
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIView *)hitTestExtenderView;
-(void)setHitTestExtenderView:(UIView *)arg1 ;
@end

