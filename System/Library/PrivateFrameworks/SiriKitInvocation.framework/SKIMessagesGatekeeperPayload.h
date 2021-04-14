/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriKitInvocation.framework/SiriKitInvocation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, SKIDirectInvocationPayload;

@interface SKIMessagesGatekeeperPayload : NSObject {

	NSString* _appBundleId;

}

@property (copy) NSString * appBundleId;                                                 //@synthesize appBundleId=_appBundleId - In the implementation block
@property (retain,readonly) SKIDirectInvocationPayload * invocationPayload; 
+(BOOL)supports:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setAppBundleId:(NSString *)arg1 ;
-(NSString *)appBundleId;
-(id)initWithAppBundleId:(id)arg1 ;
-(SKIDirectInvocationPayload *)invocationPayload;
@end
