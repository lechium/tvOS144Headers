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

@class NSString, CKDPRecordIdentifier, NSMutableArray;

@interface CKDPUpdateMissingAssetStatusRequest : PBRequest <NSCopying> {

	SCD_Struct_CK19* _packageAssetSizes;
	long long _assetSize;
	NSString* _assetPutReceipt;
	CKDPRecordIdentifier* _missingAssetStatusRecordID;
	NSMutableArray* _packagePutReceipts;
	BOOL _recovered;
	SCD_Struct_CK4 _has;

}

@property (nonatomic,readonly) BOOL hasMissingAssetStatusRecordID; 
@property (nonatomic,retain) CKDPRecordIdentifier * missingAssetStatusRecordID;              //@synthesize missingAssetStatusRecordID=_missingAssetStatusRecordID - In the implementation block
@property (assign,nonatomic) BOOL hasRecovered; 
@property (assign,nonatomic) BOOL recovered;                                                 //@synthesize recovered=_recovered - In the implementation block
@property (assign,nonatomic) BOOL hasAssetSize; 
@property (assign,nonatomic) long long assetSize;                                            //@synthesize assetSize=_assetSize - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetPutReceipt; 
@property (nonatomic,retain) NSString * assetPutReceipt;                                     //@synthesize assetPutReceipt=_assetPutReceipt - In the implementation block
@property (nonatomic,readonly) unsigned long long packageAssetSizesCount; 
@property (nonatomic,readonly) long long* packageAssetSizes; 
@property (nonatomic,retain) NSMutableArray * packagePutReceipts;                            //@synthesize packagePutReceipts=_packagePutReceipts - In the implementation block
+(id)options;
+(Class)packagePutReceiptsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setAssetSize:(long long)arg1 ;
-(long long)assetSize;
-(void)addPackagePutReceipts:(id)arg1 ;
-(void)setMissingAssetStatusRecordID:(CKDPRecordIdentifier *)arg1 ;
-(void)setAssetPutReceipt:(NSString *)arg1 ;
-(unsigned long long)packageAssetSizesCount;
-(void)clearPackageAssetSizes;
-(long long)packageAssetSizeAtIndex:(unsigned long long)arg1 ;
-(void)addPackageAssetSize:(long long)arg1 ;
-(unsigned long long)packagePutReceiptsCount;
-(void)clearPackagePutReceipts;
-(id)packagePutReceiptsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasMissingAssetStatusRecordID;
-(void)setRecovered:(BOOL)arg1 ;
-(void)setHasRecovered:(BOOL)arg1 ;
-(BOOL)hasRecovered;
-(void)setHasAssetSize:(BOOL)arg1 ;
-(BOOL)hasAssetSize;
-(BOOL)hasAssetPutReceipt;
-(long long*)packageAssetSizes;
-(void)setPackageAssetSizes:(long long*)arg1 count:(unsigned long long)arg2 ;
-(CKDPRecordIdentifier *)missingAssetStatusRecordID;
-(BOOL)recovered;
-(NSString *)assetPutReceipt;
-(NSMutableArray *)packagePutReceipts;
-(void)setPackagePutReceipts:(NSMutableArray *)arg1 ;
@end

