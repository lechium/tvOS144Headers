/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPShare, CKDPShareIdentifier;

@interface CKDPRecordRetrieveChangesResponseShareChange : PBCodable <NSCopying> {

	int _changeType;
	CKDPShare* _share;
	CKDPShareIdentifier* _shareIdentifier;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasShareIdentifier; 
@property (nonatomic,retain) CKDPShareIdentifier * shareIdentifier;              //@synthesize shareIdentifier=_shareIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasChangeType; 
@property (assign,nonatomic) int changeType;                                     //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,readonly) BOOL hasShare; 
@property (nonatomic,retain) CKDPShare * share;                                  //@synthesize share=_share - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(int)changeType;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setChangeType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(CKDPShare *)share;
-(void)setShare:(CKDPShare *)arg1 ;
-(void)setHasChangeType:(BOOL)arg1 ;
-(BOOL)hasChangeType;
-(id)changeTypeAsString:(int)arg1 ;
-(int)StringAsChangeType:(id)arg1 ;
-(BOOL)hasShare;
-(void)setShareIdentifier:(CKDPShareIdentifier *)arg1 ;
-(BOOL)hasShareIdentifier;
-(CKDPShareIdentifier *)shareIdentifier;
@end

