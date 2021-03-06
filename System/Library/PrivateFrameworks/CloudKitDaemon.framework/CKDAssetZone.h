/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CKDAssetZoneKey, NSMutableOrderedSet, NSMutableDictionary;

@interface CKDAssetZone : NSObject {

	CKDAssetZoneKey* _assetZoneKey;
	NSMutableOrderedSet* _assetRecords;
	NSMutableDictionary* _assetRecordsByRecordID;

}

@property (nonatomic,retain) NSMutableOrderedSet * assetRecords;                        //@synthesize assetRecords=_assetRecords - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetRecordsByRecordID;              //@synthesize assetRecordsByRecordID=_assetRecordsByRecordID - In the implementation block
@property (nonatomic,retain) CKDAssetZoneKey * assetZoneKey;                            //@synthesize assetZoneKey=_assetZoneKey - In the implementation block
-(id)description;
-(id)CKPropertiesDescription;
-(NSMutableOrderedSet *)assetRecords;
-(void)addMMCSItem:(id)arg1 ;
-(void)addRereferencedMMCSItem:(id)arg1 ;
-(void)addMMCSSectionItem:(id)arg1 ;
-(CKDAssetZoneKey *)assetZoneKey;
-(id)initWithAssetZoneKey:(id)arg1 ;
-(void)setAssetZoneKey:(CKDAssetZoneKey *)arg1 ;
-(void)setAssetRecords:(NSMutableOrderedSet *)arg1 ;
-(NSMutableDictionary *)assetRecordsByRecordID;
-(void)setAssetRecordsByRecordID:(NSMutableDictionary *)arg1 ;
@end

