/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSCloudKitMirroringResult.h>

@class CKContainer, CKDatabase;

@interface NSCloudKitMirroringDelegateSetupResult : NSCloudKitMirroringResult {

	CKContainer* _container;
	CKDatabase* _database;

}

@property (nonatomic,readonly) CKContainer * container;              //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) CKDatabase * database;                //@synthesize database=_database - In the implementation block
-(void)dealloc;
-(CKContainer *)container;
-(CKDatabase *)database;
-(id)initWithRequest:(id)arg1 success:(BOOL)arg2 error:(id)arg3 container:(id)arg4 database:(id)arg5 ;
@end

