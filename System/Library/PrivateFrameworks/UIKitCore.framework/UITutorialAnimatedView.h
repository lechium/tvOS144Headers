/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class CALayer, CAPackage;

@interface UITutorialAnimatedView : UIView {

	CALayer* _packageLayer;
	long long _appearance;
	CAPackage* _package;

}

@property (assign,nonatomic) long long appearance;              //@synthesize appearance=_appearance - In the implementation block
@property (nonatomic,retain) CAPackage * package;               //@synthesize package=_package - In the implementation block
-(void)setPackage:(CAPackage *)arg1 ;
-(long long)appearance;
-(void)setAppearance:(long long)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CAPackage *)package;
-(id)initWithKeyboardAppearance:(long long)arg1 ;
-(void)_setPackage:(id)arg1 ;
@end
