/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAPTLVUnsignedNumberValue, NSString;

@interface HAPCharacteristicValueTransitionFetch : NSObject <NSCopying, HAPTLVProtocol> {

	HAPTLVUnsignedNumberValue* _HAPInstanceID;

}

@property (nonatomic,retain) HAPTLVUnsignedNumberValue * HAPInstanceID;              //@synthesize HAPInstanceID=_HAPInstanceID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(id)serializeWithError:(id*)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(void)setHAPInstanceID:(HAPTLVUnsignedNumberValue *)arg1 ;
-(HAPTLVUnsignedNumberValue *)HAPInstanceID;
-(id)initWithHAPInstanceID:(id)arg1 ;
@end

