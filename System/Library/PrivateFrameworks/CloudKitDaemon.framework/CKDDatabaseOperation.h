/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDOperation.h>

@interface CKDDatabaseOperation : CKDOperation {

	long long _databaseScope;

}

@property (assign,nonatomic) long long databaseScope;              //@synthesize databaseScope=_databaseScope - In the implementation block
-(long long)databaseScope;
-(void)setDatabaseScope:(long long)arg1 ;
-(id)activityCreate;
-(id)flowControlKey;
-(id)analyticsPayload;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)spawnAndRunOperationOfClass:(Class)arg1 operationInfo:(id)arg2 spawnQueue:(id)arg3 clientContext:(id)arg4 operationConfigurationBlock:(/*^block*/id)arg5 ;
-(id)CKStatusReportProperties;
-(BOOL)supportsClearAssetEncryption;
-(void)setPCSData:(id)arg1 forFetchedZoneID:(id)arg2 ;
-(void)setPCSData:(id)arg1 forFetchedShareID:(id)arg2 ;
-(void)setPCSData:(id)arg1 forFetchedRecordID:(id)arg2 ;
@end

