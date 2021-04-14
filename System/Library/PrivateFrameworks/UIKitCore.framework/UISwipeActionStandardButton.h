/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UISwipeActionButton.h>

@interface UISwipeActionStandardButton : UISwipeActionButton {

	double _buttonWidth;
	SCD_Struct_UI30 _flags;
	double _extensionLength;

}

@property (assign,nonatomic) double extensionLength;              //@synthesize extensionLength=_extensionLength - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)titleLabel;
-(void)setTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(double)buttonWidth;
-(void)setExtensionLength:(double)arg1 ;
-(double)extensionLength;
@end

