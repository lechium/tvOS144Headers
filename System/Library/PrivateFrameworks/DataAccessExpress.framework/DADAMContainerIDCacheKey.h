/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DataAccessExpress/DataAccessExpress-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface DADAMContainerIDCacheKey : NSObject <NSCopying> {

	NSString* _accountID;
	long long _dataclass;

}

@property (nonatomic,readonly) NSString * accountID;              //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) long long dataclass;               //@synthesize dataclass=_dataclass - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)accountID;
-(long long)dataclass;
-(id)initWithAccountID:(id)arg1 andDataclass:(long long)arg2 ;
@end

