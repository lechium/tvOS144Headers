/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusKit/OpusKit-Structs.h>
#import <OpusFoundation/OFUIView.h>

@class OKWidgetView;

@interface OKWidgetContainerView : OFUIView {

	OKWidgetView* _widgetView;

}

@property (assign,nonatomic) OKWidgetView * widgetView; 
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setWidgetView:(OKWidgetView *)arg1 ;
-(OKWidgetView *)widgetView;
@end
