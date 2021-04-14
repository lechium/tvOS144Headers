/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, CKDPRecordReference;

@interface CKDPRecordChainParent : PBCodable <NSCopying> {

	NSData* _publicKeyID;
	CKDPRecordReference* _reference;

}

@property (nonatomic,readonly) BOOL hasPublicKeyID; 
@property (nonatomic,retain) NSData * publicKeyID;                         //@synthesize publicKeyID=_publicKeyID - In the implementation block
@property (nonatomic,readonly) BOOL hasReference; 
@property (nonatomic,retain) CKDPRecordReference * reference;              //@synthesize reference=_reference - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(CKDPRecordReference *)reference;
-(void)setReference:(CKDPRecordReference *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasReference;
-(void)setPublicKeyID:(NSData *)arg1 ;
-(BOOL)hasPublicKeyID;
-(NSData *)publicKeyID;
@end

