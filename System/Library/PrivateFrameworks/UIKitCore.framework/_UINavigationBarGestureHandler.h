/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIGestureRecognizerDelegatePrivate.h>

@protocol _UINavigationBarGestureHandlerDelegate;
@class UISwipeGestureRecognizer, UINavigationBar, NSString;

@interface _UINavigationBarGestureHandler : NSObject <UIGestureRecognizerDelegatePrivate> {

	UISwipeGestureRecognizer* _popSwipeGestureRecognizer;
	UINavigationBar* _navigationBar;
	id<_UINavigationBarGestureHandlerDelegate> _delegate;
	long long _idiom;

}

@property (nonatomic,__weak,readonly) UINavigationBar * navigationBar;                                //@synthesize navigationBar=_navigationBar - In the implementation block
@property (assign,nonatomic,__weak) id<_UINavigationBarGestureHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long idiom;                                                         //@synthesize idiom=_idiom - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_UINavigationBarGestureHandlerDelegate>)delegate;
-(void)setDelegate:(id<_UINavigationBarGestureHandlerDelegate>)arg1 ;
-(long long)idiom;
-(void)setIdiom:(long long)arg1 ;
-(UINavigationBar *)navigationBar;
-(BOOL)_gestureRecognizerShouldBegin:(id)arg1 ;
-(id)initWithNavigationBar:(id)arg1 ;
-(void)_handlePopSwipe:(id)arg1 ;
@end

