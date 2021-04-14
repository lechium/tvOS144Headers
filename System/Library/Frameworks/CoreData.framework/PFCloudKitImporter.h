/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PFCloudKitImporterOptions, NSCloudKitMirroringImportRequest, NSArray, NSMutableArray, CKServerChangeToken;

@interface PFCloudKitImporter : NSObject {

	PFCloudKitImporterOptions* _options;
	NSCloudKitMirroringImportRequest* _request;
	NSArray* _workItems;
	NSMutableArray* _workItemResults;
	CKServerChangeToken* _updatedDatabaseChangeToken;
	unsigned long long _totalImportedBytes;

}

@property (nonatomic,copy,readonly) PFCloudKitImporterOptions * options;                      //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringImportRequest * request;                    //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSArray * workItems;                                           //@synthesize workItems=_workItems - In the implementation block
@property (nonatomic,readonly) NSArray * workItemResults;                                     //@synthesize workItemResults=_workItemResults - In the implementation block
@property (nonatomic,readonly) CKServerChangeToken * updatedDatabaseChangeToken;              //@synthesize updatedDatabaseChangeToken=_updatedDatabaseChangeToken - In the implementation block
@property (nonatomic,readonly) unsigned long long totalImportedBytes;                         //@synthesize totalImportedBytes=_totalImportedBytes - In the implementation block
-(void)dealloc;
-(NSCloudKitMirroringImportRequest *)request;
-(PFCloudKitImporterOptions *)options;
-(id)initWithOptions:(id)arg1 request:(id)arg2 ;
-(void)processWorkItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)databaseFetchFinishWithContext:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)processDatabaseImportContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)dequeueWorkItem;
-(void)workItemFinished:(id)arg1 withResult:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)importIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)workItemResults;
-(NSArray *)workItems;
-(CKServerChangeToken *)updatedDatabaseChangeToken;
-(unsigned long long)totalImportedBytes;
@end

