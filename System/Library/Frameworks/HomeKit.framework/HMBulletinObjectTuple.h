/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface HMBulletinObjectTuple : NSObject {

	NSString* _queryName;
	NSString* _uuidString;

}

@property (nonatomic,readonly) NSString * queryName;               //@synthesize queryName=_queryName - In the implementation block
@property (nonatomic,readonly) NSString * uuidString;              //@synthesize uuidString=_uuidString - In the implementation block
+(id)tupleWithQueryType:(long long)arg1 uuidString:(id)arg2 ;
-(NSString *)uuidString;
-(NSString *)queryName;
-(id)initWithQueryType:(long long)arg1 uuidString:(id)arg2 ;
@end

