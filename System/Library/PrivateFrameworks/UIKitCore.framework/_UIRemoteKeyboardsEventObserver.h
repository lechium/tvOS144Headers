/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIEventObserver.h>

@protocol _UIRemoteKeyboardsEventObserverDelegate;
@class NSMutableDictionary, NSString;

@interface _UIRemoteKeyboardsEventObserver : NSObject <_UIEventObserver> {

	NSMutableDictionary* _touchTracker;
	BOOL _keyboardIsVisible;
	BOOL _hasTextInputResponder;
	id<_UIRemoteKeyboardsEventObserverDelegate> _delegate;

}

@property (assign,nonatomic) BOOL hasTextInputResponder;                                               //@synthesize hasTextInputResponder=_hasTextInputResponder - In the implementation block
@property (assign,nonatomic,__weak) id<_UIRemoteKeyboardsEventObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL keyboardIsVisible;                                                   //@synthesize keyboardIsVisible=_keyboardIsVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<_UIRemoteKeyboardsEventObserverDelegate>)delegate;
-(void)setDelegate:(id<_UIRemoteKeyboardsEventObserverDelegate>)arg1 ;
-(void)textInputResponderDidChange:(id)arg1 ;
-(void)setHasTextInputResponder:(BOOL)arg1 ;
-(BOOL)keyboardIsVisible;
-(BOOL)hasTextInputResponder;
-(long long)_preferredEventSourceForTouch:(id)arg1 tracking:(id)arg2 shouldUpdateOut:(BOOL*)arg3 ;
-(BOOL)_isTrackingPencilTouch;
-(BOOL)_shouldTrackTouch:(id)arg1 ;
-(void)_startTrackingForTouch:(id)arg1 ;
-(void)_updateTrackingForTouch:(id)arg1 ;
-(void)_endTrackingForTouch:(id)arg1 ;
-(void)_cancelTrackingForTouch:(id)arg1 ;
-(void)_trackTouch:(id)arg1 ;
-(void)_invalidateTrackingForTouch:(id)arg1 ;
-(void)_markTrackingForTouch:(id)arg1 withGesture:(id)arg2 ;
-(void)_gestureRecognizer:(id)arg1 didTransitionToState:(long long)arg2 ;
-(void)peekApplicationEvent:(id)arg1 ;
-(void)setKeyboardIsVisible:(BOOL)arg1 ;
@end

