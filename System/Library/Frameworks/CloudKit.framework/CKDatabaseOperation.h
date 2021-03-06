/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CKOperation.h>

@class CKDatabase, CKDatabaseOperationInfo;

@interface CKDatabaseOperation : CKOperation {

	CKDatabase* _database;

}

@property (nonatomic,readonly) CKDatabaseOperationInfo * operationInfo; 
@property (nonatomic,retain) CKDatabase * database;                                  //@synthesize database=_database - In the implementation block
-(CKDatabase *)database;
-(void)setDatabase:(CKDatabase *)arg1 ;
-(long long)databaseScope;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(id)flowControlKey;
@end

