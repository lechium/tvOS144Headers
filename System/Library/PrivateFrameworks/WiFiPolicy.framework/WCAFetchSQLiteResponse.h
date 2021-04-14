/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiPolicy/WCAFetchResponse.h>

@class NSArray;

@interface WCAFetchSQLiteResponse : WCAFetchResponse {

	NSArray* _records;

}

@property (nonatomic,copy) NSArray * records;              //@synthesize records=_records - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)records;
-(void)setRecords:(NSArray *)arg1 ;
-(id)initWithRecords:(id)arg1 ;
@end

