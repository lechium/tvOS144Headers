/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDictionary;

@interface CKFetchArchivedRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	BOOL _shouldFetchAssetContents;
	BOOL _fetchAllChanges;
	NSArray* _recordZoneIDs;
	NSDictionary* _configurationsByRecordZoneID;
	NSDictionary* _assetTransferOptionsByRecordTypeAndKey;

}

@property (nonatomic,retain) NSArray * recordZoneIDs;                                            //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * configurationsByRecordZoneID;                        //@synthesize configurationsByRecordZoneID=_configurationsByRecordZoneID - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContents;                                      //@synthesize shouldFetchAssetContents=_shouldFetchAssetContents - In the implementation block
@property (assign,nonatomic) BOOL fetchAllChanges;                                               //@synthesize fetchAllChanges=_fetchAllChanges - In the implementation block
@property (nonatomic,retain) NSDictionary * assetTransferOptionsByRecordTypeAndKey;              //@synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)recordZoneIDs;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(BOOL)fetchAllChanges;
-(void)setFetchAllChanges:(BOOL)arg1 ;
-(NSDictionary *)configurationsByRecordZoneID;
-(void)setConfigurationsByRecordZoneID:(NSDictionary *)arg1 ;
-(BOOL)shouldFetchAssetContents;
-(void)setShouldFetchAssetContents:(BOOL)arg1 ;
-(NSDictionary *)assetTransferOptionsByRecordTypeAndKey;
-(void)setAssetTransferOptionsByRecordTypeAndKey:(NSDictionary *)arg1 ;
@end

