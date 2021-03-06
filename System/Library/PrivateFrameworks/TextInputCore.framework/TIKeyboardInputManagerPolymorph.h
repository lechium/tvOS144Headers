/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputCore/TIKeyboardInputManagerWrapper.h>

@interface TIKeyboardInputManagerPolymorph : TIKeyboardInputManagerWrapper
-(void)dealloc;
-(void)syncToKeyboardState:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleKeyboardInput:(id)arg1 keyboardState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)skipHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2 ;
-(void)handleKeyboardState:(id)arg1 ;
-(void)setInputManagerForKeyboardState:(id)arg1 ;
-(void)setInputManagerForInputMode:(id)arg1 withKeyboardState:(id)arg2 class:(Class)arg3 ;
@end

