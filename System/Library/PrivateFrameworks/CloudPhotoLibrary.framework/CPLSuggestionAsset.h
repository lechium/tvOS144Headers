/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, CPLSuggestionAssetFlag, NSString;

@interface CPLSuggestionAsset : PBCodable <NSCopying> {

	NSData* _actionData;
	CPLSuggestionAssetFlag* _assetFlag;
	NSString* _assetIdentifier;
	NSString* _masterFingerprint;

}

@property (nonatomic,readonly) BOOL hasAssetIdentifier; 
@property (nonatomic,retain) NSString * assetIdentifier;                      //@synthesize assetIdentifier=_assetIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetFlag; 
@property (nonatomic,retain) CPLSuggestionAssetFlag * assetFlag;              //@synthesize assetFlag=_assetFlag - In the implementation block
@property (nonatomic,readonly) BOOL hasActionData; 
@property (nonatomic,retain) NSData * actionData;                             //@synthesize actionData=_actionData - In the implementation block
@property (nonatomic,readonly) BOOL hasMasterFingerprint; 
@property (nonatomic,retain) NSString * masterFingerprint;                    //@synthesize masterFingerprint=_masterFingerprint - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)actionData;
-(void)setActionData:(NSData *)arg1 ;
-(BOOL)hasAssetIdentifier;
-(BOOL)hasAssetFlag;
-(BOOL)hasMasterFingerprint;
-(NSString *)assetIdentifier;
-(void)setAssetIdentifier:(NSString *)arg1 ;
-(CPLSuggestionAssetFlag *)assetFlag;
-(void)setAssetFlag:(CPLSuggestionAssetFlag *)arg1 ;
-(NSString *)masterFingerprint;
-(void)setMasterFingerprint:(NSString *)arg1 ;
-(BOOL)hasActionData;
@end

