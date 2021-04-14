/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CKContainer, CKDatabase;

@interface WFCloudKitWebServiceRequest : NSObject {

	CKContainer* _container;
	CKDatabase* _database;

}

@property (nonatomic,readonly) CKContainer * container;              //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) CKDatabase * database;                //@synthesize database=_database - In the implementation block
-(CKContainer *)container;
-(CKDatabase *)database;
-(id)databaseName;
-(id)initWithContainer:(id)arg1 database:(id)arg2 ;
-(id)fetchRecordsWithItemType:(Class)arg1 filter:(id)arg2 cacheKey:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)fetchProxiedRecordWithIdentifier:(id)arg1 possibleItemTypes:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)queryWithItemType:(Class)arg1 filter:(id)arg2 ;
-(id)postJSON:(id)arg1 toURL:(id)arg2 cacheKey:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)getJSONFromURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)webServiceForRequestType:(unsigned long long)arg1 ;
-(id)pathComponentsForType:(unsigned long long)arg1 parameters:(id)arg2 ;
-(id)cloudKitEnvironment;
-(id)cloudKitAPIToken;
-(id)urlForType:(unsigned long long)arg1 parameters:(id)arg2 ;
-(id)recordsFromQueryResponse:(id)arg1 ;
-(id)extractRecordDictFromRecordIfNecessary:(id)arg1 recordType:(id)arg2 ;
-(void)parseRecord:(id)arg1 intoItem:(id)arg2 allKeys:(BOOL)arg3 ;
@end

