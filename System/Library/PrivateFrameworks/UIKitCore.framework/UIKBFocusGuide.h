/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIFocusGuide.h>

@protocol UIKBFocusGuideDelegate;
@interface UIKBFocusGuide : UIFocusGuide {

	unsigned long long focusHeading;
	id<UIKBFocusGuideDelegate> _keyboardDelegate;

}

@property (assign,nonatomic) unsigned long long focusHeading; 
@property (assign,nonatomic) id<UIKBFocusGuideDelegate> keyboardDelegate;              //@synthesize keyboardDelegate=_keyboardDelegate - In the implementation block
-(unsigned long long)focusHeading;
-(double)_focusPriority;
-(BOOL)_isUnoccludable;
-(void)_didUpdateFocusToPreferredFocusedView;
-(void)setFocusHeading:(unsigned long long)arg1 ;
-(void)setKeyboardDelegate:(id<UIKBFocusGuideDelegate>)arg1 ;
-(id<UIKBFocusGuideDelegate>)keyboardDelegate;
@end

