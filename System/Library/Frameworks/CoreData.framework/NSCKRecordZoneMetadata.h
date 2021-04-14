/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, CKServerChangeToken, NSCKDatabaseMetadata, NSDate, NSSet;

@interface NSCKRecordZoneMetadata : NSManagedObject

@property (nonatomic,retain) NSNumber * hasRecordZoneNum; 
@property (nonatomic,retain) NSNumber * hasSubscriptionNum; 
@property (nonatomic,retain) NSString * ckRecordZoneName; 
@property (nonatomic,retain) NSString * ckOwnerName; 
@property (nonatomic,retain) CKServerChangeToken * currentChangeToken; 
@property (nonatomic,retain) NSCKDatabaseMetadata * database; 
@property (nonatomic,retain) NSDate * lastFetchDate; 
@property (assign,nonatomic) BOOL hasRecordZone; 
@property (assign,nonatomic) BOOL hasSubscription; 
@property (nonatomic,retain) NSSet * records; 
@property (nonatomic,retain) NSSet * mirroredRelationships; 
@property (nonatomic,retain) NSSet * queries; 
@property (assign,nonatomic) BOOL supportsFetchChanges; 
@property (assign,nonatomic) BOOL supportsAtomicChanges; 
@property (assign,nonatomic) BOOL supportsRecordSharing; 
@property (assign,nonatomic) BOOL needsImport; 
@property (assign,nonatomic) BOOL needsRecoveryFromZoneDelete; 
@property (assign,nonatomic) BOOL needsRecoveryFromUserPurge; 
+(id)entityPath;
+(id)zoneMetadataForZoneID:(id)arg1 inDatabaseWithScope:(long long)arg2 forStore:(id)arg3 inContext:(id)arg4 error:(id*)arg5 ;
-(BOOL)hasRecordZone;
-(void)setHasRecordZone:(BOOL)arg1 ;
-(BOOL)hasSubscription;
-(void)setHasSubscription:(BOOL)arg1 ;
@end

