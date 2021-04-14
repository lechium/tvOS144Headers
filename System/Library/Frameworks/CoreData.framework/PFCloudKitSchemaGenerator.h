/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CKRecordZone, NSCloudKitMirroringDelegateOptions;

@interface PFCloudKitSchemaGenerator : NSObject {

	CKRecordZone* _recordZone;
	NSCloudKitMirroringDelegateOptions* _mirroringOptions;

}

@property (nonatomic,readonly) CKRecordZone * recordZone;                                          //@synthesize recordZone=_recordZone - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringDelegateOptions * mirroringOptions;              //@synthesize mirroringOptions=_mirroringOptions - In the implementation block
+(id)newRepresentativeRecordForStaticFieldsInEntity:(id)arg1 inZoneWithID:(id)arg2 ;
+(id)representativeValueFor:(id)arg1 ;
-(void)dealloc;
-(CKRecordZone *)recordZone;
-(NSCloudKitMirroringDelegateOptions *)mirroringOptions;
-(id)initWithRecordZone:(id)arg1 mirroringOptions:(id)arg2 ;
-(id)newRepresentativeRecordsForStore:(id)arg1 error:(id*)arg2 ;
-(id)newManagedObjectContextForCoordinator:(id)arg1 ;
-(id)representativeObjectForEntity:(id)arg1 inStore:(id)arg2 withManagedObjectContext:(id)arg3 cache:(id)arg4 populate:(BOOL)arg5 ;
-(void)populateValuesOnObject:(id)arg1 ;
-(void)populateRelationshipsOnObject:(id)arg1 inStore:(id)arg2 withCache:(id)arg3 ;
@end

