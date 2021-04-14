/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UITextFieldVisualStyleSubject;
@interface _UITextFieldVisualStyle : NSObject {

	id<_UITextFieldVisualStyleSubject> _styleSubject;

}

@property (assign,nonatomic,__weak) id<_UITextFieldVisualStyleSubject> styleSubject;              //@synthesize styleSubject=_styleSubject - In the implementation block
+(id)inferredVisualStyleWithStyleSubject:(id)arg1 ;
-(id)placeholderColor;
-(id)defaultTextColor;
-(id)defaultTextColorForKeyboardAppearance;
-(id)parentViewForTextContentView;
-(id)defaultFocusedTextColor;
-(id)initWithStyleSubject:(id)arg1 ;
-(BOOL)textShouldUseVibrancy;
-(void)handleTextVibrancy;
-(id<_UITextFieldVisualStyleSubject>)styleSubject;
-(void)setStyleSubject:(id<_UITextFieldVisualStyleSubject>)arg1 ;
@end

