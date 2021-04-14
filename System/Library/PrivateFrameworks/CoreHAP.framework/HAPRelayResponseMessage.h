/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class HAPRelayRequestMessage, NSData;

@interface HAPRelayResponseMessage : HMFObject {

	HAPRelayRequestMessage* _request;
	unsigned long long _type;
	long long _statusCode;
	NSData* _body;

}

@property (nonatomic,readonly) HAPRelayRequestMessage * request;               //@synthesize request=_request - In the implementation block
@property (getter=isEncrypted,nonatomic,readonly) BOOL encrypted; 
@property (nonatomic,readonly) unsigned long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long statusCode;                           //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,retain) NSData * body;                                    //@synthesize body=_body - In the implementation block
-(id)debugDescription;
-(id)description;
-(unsigned long long)type;
-(HAPRelayRequestMessage *)request;
-(long long)statusCode;
-(id)shortDescription;
-(void)setBody:(NSData *)arg1 ;
-(NSData *)body;
-(BOOL)isEncrypted;
-(BOOL)_deserializeResponseMessage:(id)arg1 ;
-(id)initWithRequest:(id)arg1 serializedMessage:(id)arg2 ;
@end

