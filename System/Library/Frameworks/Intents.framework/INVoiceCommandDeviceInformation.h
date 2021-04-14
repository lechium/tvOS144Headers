/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString;

@interface INVoiceCommandDeviceInformation : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	long long _deviceIdiom;
	NSNumber* _isHomePodInUltimateMode;

}

@property (nonatomic,readonly) long long deviceIdiom;                                //@synthesize deviceIdiom=_deviceIdiom - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * isHomePodInUltimateMode;              //@synthesize isHomePodInUltimateMode=_isHomePodInUltimateMode - In the implementation block
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
-(long long)deviceIdiom;
-(NSNumber *)isHomePodInUltimateMode;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)initWithDeviceIdiom:(long long)arg1 isHomePodInUltimateMode:(id)arg2 ;
@end

