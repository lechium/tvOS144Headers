/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSError;

@interface PBSMigration : NSObject {

	Class _handlingClass;
	NSString* _name;
	/*^block*/id _handler;
	unsigned long long _state;
	NSError* _error;

}

@property (nonatomic,copy,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSError * error;                       //@synthesize error=_error - In the implementation block
-(NSString *)name;
-(id)init;
-(NSError *)error;
-(unsigned long long)state;
-(id)initWithHandlingClass:(Class)arg1 ;
-(id)initWithName:(id)arg1 handler:(/*^block*/id)arg2 ;
-(unsigned long long)executeMigrationWithContext:(id)arg1 ;
@end

