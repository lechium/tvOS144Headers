/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@protocol CALayerDelegate;
@interface _UIStackedImageLayerWrappingView : UIView {

	id<CALayerDelegate> _actionDelegate;

}

@property (assign,nonatomic,__weak) id<CALayerDelegate> actionDelegate;              //@synthesize actionDelegate=_actionDelegate - In the implementation block
-(void)dealloc;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)setActionDelegate:(id<CALayerDelegate>)arg1 ;
-(id<CALayerDelegate>)actionDelegate;
@end

