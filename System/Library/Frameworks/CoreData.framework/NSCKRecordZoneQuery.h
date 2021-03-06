/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSCKRecordZoneMetadata, NSString, NSDate, NSPredicate, CKQueryCursor;

@interface NSCKRecordZoneQuery : NSManagedObject

@property (nonatomic,retain) NSCKRecordZoneMetadata * recordZone; 
@property (nonatomic,retain) NSString * recordType; 
@property (nonatomic,retain) NSDate * lastFetchDate; 
@property (nonatomic,retain) NSPredicate * predicate; 
@property (nonatomic,retain) CKQueryCursor * queryCursor; 
+(id)entityPath;
+(id)zoneQueryForRecordType:(id)arg1 inZone:(id)arg2 inStore:(id)arg3 managedObjectContext:(id)arg4 error:(id*)arg5 ;
-(id)createQueryForUpdatingRecords;
@end

