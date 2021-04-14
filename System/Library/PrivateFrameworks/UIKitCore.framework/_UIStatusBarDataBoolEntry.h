/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarDataEntry.h>

@interface _UIStatusBarDataBoolEntry : _UIStatusBarDataEntry {

	BOOL _boolValue;

}

@property (assign,nonatomic) BOOL boolValue;              //@synthesize boolValue=_boolValue - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)entryWithBoolValue:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)boolValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setBoolValue:(BOOL)arg1 ;
-(id)_ui_descriptionBuilder;
-(id)initFromData:(const SCD_Struct_UI114*)arg1 type:(int)arg2 boolValue:(BOOL)arg3 ;
@end

