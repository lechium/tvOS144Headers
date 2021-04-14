/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSData;

@interface FARegisterPushTokenRequest : FAFamilyCircleRequest {

	NSData* _pushToken;

}

@property (copy,readonly) NSData * pushToken;              //@synthesize pushToken=_pushToken - In the implementation block
-(NSData *)pushToken;
-(void)startRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithPushToken:(id)arg1 ;
@end
