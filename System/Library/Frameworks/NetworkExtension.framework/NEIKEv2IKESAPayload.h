/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NEIKEv2Payload.h>

@class NSArray, NEIKEv2IKESPI;

@interface NEIKEv2IKESAPayload : NEIKEv2Payload {

	NSArray* _proposals;
	NEIKEv2IKESPI* _rekeyIKESPI;

}

@property (retain) NSArray * proposals;                      //@synthesize proposals=_proposals - In the implementation block
@property (retain) NEIKEv2IKESPI * rekeyIKESPI;              //@synthesize rekeyIKESPI=_rekeyIKESPI - In the implementation block
+(id)copyTypeDescription;
-(id)description;
-(unsigned long long)type;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(NSArray *)proposals;
-(void)setProposals:(NSArray *)arg1 ;
-(void)setRekeyIKESPI:(NEIKEv2IKESPI *)arg1 ;
-(NEIKEv2IKESPI *)rekeyIKESPI;
-(BOOL)hasRequiredFields;
-(BOOL)generatePayloadData;
-(BOOL)parsePayloadData;
@end

