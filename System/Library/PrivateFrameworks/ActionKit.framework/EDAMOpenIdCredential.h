/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/FATObject.h>

@class NSString, NSNumber;

@interface EDAMOpenIdCredential : FATObject {

	NSString* _tokenPayload;
	NSNumber* _serviceProvider;

}

@property (nonatomic,retain) NSString * tokenPayload;                 //@synthesize tokenPayload=_tokenPayload - In the implementation block
@property (nonatomic,retain) NSNumber * serviceProvider;              //@synthesize serviceProvider=_serviceProvider - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)serviceProvider;
-(void)setServiceProvider:(NSNumber *)arg1 ;
-(NSString *)tokenPayload;
-(void)setTokenPayload:(NSString *)arg1 ;
@end

