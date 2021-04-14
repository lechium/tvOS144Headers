/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, CKDPRecordIdentifier;

@interface CKDPRecordDeleteRequest : PBRequest <NSCopying> {

	NSString* _etag;
	NSMutableArray* _pluginFields;
	NSMutableArray* _publicKeys;
	CKDPRecordIdentifier* _recordIdentifier;
	BOOL _participantKeyLost;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasRecordIdentifier; 
@property (nonatomic,retain) CKDPRecordIdentifier * recordIdentifier;              //@synthesize recordIdentifier=_recordIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasEtag; 
@property (nonatomic,retain) NSString * etag;                                      //@synthesize etag=_etag - In the implementation block
@property (nonatomic,retain) NSMutableArray * pluginFields;                        //@synthesize pluginFields=_pluginFields - In the implementation block
@property (assign,nonatomic) BOOL hasParticipantKeyLost; 
@property (assign,nonatomic) BOOL participantKeyLost;                              //@synthesize participantKeyLost=_participantKeyLost - In the implementation block
@property (nonatomic,retain) NSMutableArray * publicKeys;                          //@synthesize publicKeys=_publicKeys - In the implementation block
+(id)options;
+(Class)pluginFieldsType;
+(Class)publicKeysType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(NSString *)etag;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setEtag:(NSString *)arg1 ;
-(BOOL)hasEtag;
-(void)setRecordIdentifier:(CKDPRecordIdentifier *)arg1 ;
-(BOOL)hasRecordIdentifier;
-(CKDPRecordIdentifier *)recordIdentifier;
-(NSMutableArray *)pluginFields;
-(void)setPluginFields:(NSMutableArray *)arg1 ;
-(void)addPluginFields:(id)arg1 ;
-(unsigned long long)pluginFieldsCount;
-(void)clearPluginFields;
-(id)pluginFieldsAtIndex:(unsigned long long)arg1 ;
-(void)addPublicKeys:(id)arg1 ;
-(unsigned long long)publicKeysCount;
-(void)clearPublicKeys;
-(id)publicKeysAtIndex:(unsigned long long)arg1 ;
-(void)setParticipantKeyLost:(BOOL)arg1 ;
-(void)setHasParticipantKeyLost:(BOOL)arg1 ;
-(BOOL)hasParticipantKeyLost;
-(BOOL)participantKeyLost;
-(NSMutableArray *)publicKeys;
-(void)setPublicKeys:(NSMutableArray *)arg1 ;
@end

