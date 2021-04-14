/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INSettingMetadata, INNumericSettingValue, NSString;

@interface INGetSettingResponseData : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	INSettingMetadata* _settingMetadata;
	INNumericSettingValue* _numericValue;
	long long _boundedValue;
	long long _binaryValue;
	NSString* _labeledValue;

}

@property (nonatomic,copy,readonly) INSettingMetadata * settingMetadata;               //@synthesize settingMetadata=_settingMetadata - In the implementation block
@property (nonatomic,copy,readonly) INNumericSettingValue * numericValue;              //@synthesize numericValue=_numericValue - In the implementation block
@property (nonatomic,readonly) long long boundedValue;                                 //@synthesize boundedValue=_boundedValue - In the implementation block
@property (nonatomic,readonly) long long binaryValue;                                  //@synthesize binaryValue=_binaryValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * labeledValue;                           //@synthesize labeledValue=_labeledValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)initWithSettingMetadata:(id)arg1 numericValue:(id)arg2 boundedValue:(long long)arg3 binaryValue:(long long)arg4 labeledValue:(id)arg5 ;
-(INSettingMetadata *)settingMetadata;
-(INNumericSettingValue *)numericValue;
-(long long)boundedValue;
-(long long)binaryValue;
-(NSString *)labeledValue;
@end

