/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSNumber, NSDictionary;

@interface AMSSubscriptionEntitlementsResult : NSObject {

	NSNumber* _appAdamId;
	NSNumber* _appVersion;
	NSDictionary* _entitlements;
	NSDictionary* _serverResponse;

}

@property (nonatomic,retain) NSNumber * appAdamId;                       //@synthesize appAdamId=_appAdamId - In the implementation block
@property (nonatomic,retain) NSNumber * appVersion;                      //@synthesize appVersion=_appVersion - In the implementation block
@property (nonatomic,retain) NSDictionary * entitlements;                //@synthesize entitlements=_entitlements - In the implementation block
@property (nonatomic,retain) NSDictionary * serverResponse;              //@synthesize serverResponse=_serverResponse - In the implementation block
-(NSDictionary *)entitlements;
-(void)setEntitlements:(NSDictionary *)arg1 ;
-(NSNumber *)appAdamId;
-(void)setAppAdamId:(NSNumber *)arg1 ;
-(NSNumber *)appVersion;
-(void)setAppVersion:(NSNumber *)arg1 ;
-(NSDictionary *)serverResponse;
-(id)exportObject;
-(void)setServerResponse:(NSDictionary *)arg1 ;
@end

