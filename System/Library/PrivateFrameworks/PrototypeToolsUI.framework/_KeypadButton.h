/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIButton.h>

@interface _KeypadButton : UIButton {

	long long _keyType;
	unsigned long long _digit;

}

@property (nonatomic,readonly) long long keyType;                     //@synthesize keyType=_keyType - In the implementation block
@property (nonatomic,readonly) unsigned long long digit;              //@synthesize digit=_digit - In the implementation block
-(long long)keyType;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_updateBackgroundColor;
-(id)initWithKeyType:(long long)arg1 digit:(unsigned long long)arg2 target:(id)arg3 ;
-(id)initWithKeyType:(long long)arg1 target:(id)arg2 ;
-(id)initWithDigit:(unsigned long long)arg1 target:(id)arg2 ;
-(unsigned long long)digit;
@end

