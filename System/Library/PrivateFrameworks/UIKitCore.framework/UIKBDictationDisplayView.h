/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBKeyView.h>

@class UIDictationView;

@interface UIKBDictationDisplayView : UIKBKeyView {

	UIDictationView* _dictationView;

}

@property (nonatomic,retain) UIDictationView * dictationView;              //@synthesize dictationView=_dictationView - In the implementation block
-(void)dealloc;
-(void)removeFromSuperview;
-(void)prepareForDisplay;
-(void)setRenderConfig:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(void)updateForKeyplane:(id)arg1 key:(id)arg2 ;
-(UIDictationView *)dictationView;
-(void)setDictationView:(UIDictationView *)arg1 ;
-(void)updateDictationColor;
@end

