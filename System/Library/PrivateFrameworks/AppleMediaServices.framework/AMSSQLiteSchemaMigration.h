/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AMSSQLiteConnection, NSError;

@interface AMSSQLiteSchemaMigration : NSObject {

	AMSSQLiteConnection* _connection;
	NSError* _error;
	BOOL _success;

}

@property (readonly) NSError * error;              //@synthesize error=_error - In the implementation block
@property (readonly) BOOL success;                 //@synthesize success=_success - In the implementation block
-(NSError *)error;
-(id)initWithConnection:(id)arg1 ;
-(BOOL)success;
-(void)executeStatement:(id)arg1 ;
-(void)_executeStatement:(id)arg1 canFailMigration:(BOOL)arg2 bindings:(/*^block*/id)arg3 ;
-(void)executeOptionalStatement:(id)arg1 ;
-(void)executeOptionalStatement:(id)arg1 bindings:(/*^block*/id)arg2 ;
-(void)executeStatement:(id)arg1 bindings:(/*^block*/id)arg2 ;
@end

