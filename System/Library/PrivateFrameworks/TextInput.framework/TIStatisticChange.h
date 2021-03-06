/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TIStatisticChange : NSObject <NSCopying, NSSecureCoding> {

	int _value;
	NSString* _name;
	NSString* _inputMode;

}

@property (nonatomic,readonly) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) int value;                         //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSString * inputMode;              //@synthesize inputMode=_inputMode - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)statisticChangeWithName:(id)arg1 andValue:(int)arg2 andInputMode:(id)arg3 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)value;
-(NSString *)inputMode;
-(id)initWithName:(id)arg1 andValue:(int)arg2 andInputMode:(id)arg3 ;
@end

