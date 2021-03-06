/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSString, NSNumber, NSData;

@interface TIUserModelDataStoreEntry : NSObject {

	NSDate* _timestamp;
	NSString* _key;
	NSString* _inputMode;
	NSNumber* _value;
	NSNumber* _secondaryValue;
	NSNumber* _realValue;
	NSData* _properties;

}

@property (retain) NSDate * timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (retain) NSString * key;                         //@synthesize key=_key - In the implementation block
@property (retain) NSString * inputMode;                   //@synthesize inputMode=_inputMode - In the implementation block
@property (retain) NSNumber * value;                       //@synthesize value=_value - In the implementation block
@property (retain) NSNumber * secondaryValue;              //@synthesize secondaryValue=_secondaryValue - In the implementation block
@property (retain) NSNumber * realValue;                   //@synthesize realValue=_realValue - In the implementation block
@property (retain) NSData * properties;                    //@synthesize properties=_properties - In the implementation block
-(NSNumber *)value;
-(void)setValue:(NSNumber *)arg1 ;
-(NSData *)properties;
-(NSString *)key;
-(NSDate *)timestamp;
-(void)setKey:(NSString *)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)setProperties:(NSData *)arg1 ;
-(NSString *)inputMode;
-(void)setInputMode:(NSString *)arg1 ;
-(id)initWithTimestamp:(id)arg1 withKey:(id)arg2 withInputMode:(id)arg3 withValue:(id)arg4 withSecondaryValue:(id)arg5 withRealValue:(id)arg6 withProperties:(id)arg7 ;
-(NSNumber *)secondaryValue;
-(void)setSecondaryValue:(NSNumber *)arg1 ;
-(NSNumber *)realValue;
-(void)setRealValue:(NSNumber *)arg1 ;
@end

