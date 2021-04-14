/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Engram.framework/Engram
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol ENDevicePublicKey, ENCypher;
@class NSData;

@interface ENParticipantDevice : NSObject <NSSecureCoding> {

	id<ENDevicePublicKey> _devicePublicKey;
	NSData* _identifier;
	id<ENCypher> _cypher;

}

@property (nonatomic,retain) id<ENCypher> cypher;                                  //@synthesize cypher=_cypher - In the implementation block
@property (nonatomic,readonly) id<ENDevicePublicKey> devicePublicKey;              //@synthesize devicePublicKey=_devicePublicKey - In the implementation block
@property (nonatomic,readonly) NSData * identifier;                                //@synthesize identifier=_identifier - In the implementation block
+(id)participantDeviceFromEndpoint:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)identifier;
-(id<ENCypher>)cypher;
-(void)setCypher:(id<ENCypher>)arg1 ;
-(id<ENDevicePublicKey>)devicePublicKey;
-(id)initWithDevicePublicKey:(id)arg1 cypher:(id)arg2 identifier:(id)arg3 ;
-(id)signAndConcealData:(id)arg1 withSender:(id)arg2 cypherIdentifier:(id*)arg3 error:(id*)arg4 ;
-(id)verifyAndRevealData:(id)arg1 withReceipient:(id)arg2 cypherIdentifier:(id)arg3 error:(id*)arg4 ;
@end

