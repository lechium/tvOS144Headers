/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NEIKEv2Payload.h>

@class NSData;

@interface NEIKEv2CustomPayload : NEIKEv2Payload {

	unsigned long long _customType;
	NSData* _customData;

}

@property (assign) unsigned long long customType;              //@synthesize customType=_customType - In the implementation block
@property (retain) NSData * customData;                        //@synthesize customData=_customData - In the implementation block
+(id)copyTypeDescription;
-(unsigned long long)type;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(unsigned long long)customType;
-(NSData *)customData;
-(void)setCustomType:(unsigned long long)arg1 ;
-(void)setCustomData:(NSData *)arg1 ;
-(BOOL)hasRequiredFields;
-(BOOL)generatePayloadData;
-(BOOL)parsePayloadData;
@end

