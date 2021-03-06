/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIView, UIPanGestureRecognizer, NSString;

@interface VUIViewUserInteractionMonitor : NSObject <UIGestureRecognizerDelegate> {

	UIView* _monitoredView;
	/*^block*/id _interactionHandler;
	UIPanGestureRecognizer* _panGestureRecognizer;

}

@property (nonatomic,retain) UIView * monitoredView;                                     //@synthesize monitoredView=_monitoredView - In the implementation block
@property (nonatomic,copy) id interactionHandler;                                        //@synthesize interactionHandler=_interactionHandler - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;              //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isEnabled;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(void)_panGestureRecognized:(id)arg1 ;
-(void)_registerPanGestureRecognizer;
-(UIView *)monitoredView;
-(id)interactionHandler;
-(id)initWithMonitoredView:(id)arg1 interactionHndler:(/*^block*/id)arg2 ;
-(void)setMonitoredView:(UIView *)arg1 ;
-(void)setInteractionHandler:(id)arg1 ;
@end

