/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKNumericBorderButton.h>

@class UIColor, PKNumericSuggestion;

@interface PKNumericSuggestionButton : PKNumericBorderButton {

	UIColor* _textColor;
	PKNumericSuggestion* _suggestion;

}

@property (nonatomic,copy) UIColor * textColor;                             //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) PKNumericSuggestion * suggestion;              //@synthesize suggestion=_suggestion - In the implementation block
+(id)buttonWithSuggestion:(id)arg1 ;
-(id)init;
-(UIColor *)textColor;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSuggestion:(PKNumericSuggestion *)arg1 ;
-(PKNumericSuggestion *)suggestion;
@end

