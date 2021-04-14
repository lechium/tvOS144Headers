/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreBookkeeper/SBKResponse.h>

@class NSString, NSData;

@interface SBKPullValueResponse : SBKResponse {

	NSString* _itemKey;
	NSString* _itemVersion;
	NSData* _itemValuePayload;
	NSString* _domainVersion;

}

@property (readonly) NSString * itemKey;                     //@synthesize itemKey=_itemKey - In the implementation block
@property (readonly) NSString * itemVersion;                 //@synthesize itemVersion=_itemVersion - In the implementation block
@property (readonly) NSData * itemValuePayload;              //@synthesize itemValuePayload=_itemValuePayload - In the implementation block
@property (readonly) NSString * domainVersion;               //@synthesize domainVersion=_domainVersion - In the implementation block
+(id)responseWithResponse:(id)arg1 transaction:(id)arg2 ;
-(NSString *)domainVersion;
-(NSData *)itemValuePayload;
-(NSString *)itemKey;
-(NSString *)itemVersion;
-(void)deserializeResponseBodyWithTransaction:(id)arg1 ;
@end

