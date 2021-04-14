/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/SSRequest.h>

@class NSArray, NSString;

@interface SSWishlistAddItemsRequest : SSRequest {

	NSArray* _items;
	NSString* _caller;
	NSString* _version;

}

@property (copy,readonly) NSArray * items;                 //@synthesize items=_items - In the implementation block
@property (copy,readonly) NSString * caller;               //@synthesize caller=_caller - In the implementation block
@property (copy,readonly) NSString * version;              //@synthesize version=_version - In the implementation block
-(id)init;
-(NSString *)version;
-(NSArray *)items;
-(NSString *)caller;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)_convertedValueForValue:(id)arg1 ;
-(id)copyQueryStringParameters;
-(id)initWithItems:(id)arg1 caller:(id)arg2 version:(id)arg3 ;
-(void)startWithAddItemsResponseBlock:(/*^block*/id)arg1 ;
@end

