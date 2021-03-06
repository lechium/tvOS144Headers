/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiomeStreams/BMEventBase.h>
#import <libobjc.A.dylib/BMStoreData.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface BMAppClipLaunchEvent : BMEventBase <BMStoreData, NSSecureCoding> {

	NSString* _URLHash;
	NSString* _clipBundleID;
	NSString* _appBundleID;
	NSString* _webAppBundleID;
	NSString* _launchReason;
	NSURL* _fullURL;
	NSURL* _referrerURL;
	NSString* _referrerBundleID;

}

@property (nonatomic,copy,readonly) NSString * URLHash;                       //@synthesize URLHash=_URLHash - In the implementation block
@property (nonatomic,copy,readonly) NSString * clipBundleID;                  //@synthesize clipBundleID=_clipBundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * appBundleID;                   //@synthesize appBundleID=_appBundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * webAppBundleID;                //@synthesize webAppBundleID=_webAppBundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * launchReason;                  //@synthesize launchReason=_launchReason - In the implementation block
@property (nonatomic,copy,readonly) NSURL * fullURL;                          //@synthesize fullURL=_fullURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * referrerURL;                      //@synthesize referrerURL=_referrerURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * referrerBundleID;              //@synthesize referrerBundleID=_referrerBundleID - In the implementation block
@property (nonatomic,readonly) unsigned dataVersion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg1 dataVersion:(unsigned)arg2 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)appBundleID;
-(NSURL *)referrerURL;
-(NSURL *)fullURL;
-(unsigned)dataVersion;
-(NSString *)clipBundleID;
-(NSString *)launchReason;
-(NSString *)URLHash;
-(NSString *)webAppBundleID;
-(NSString *)referrerBundleID;
-(id)serialize;
-(id)initWithURLHash:(id)arg1 clipBundleID:(id)arg2 appBundleID:(id)arg3 webAppBundleID:(id)arg4 launchReason:(id)arg5 fullURL:(id)arg6 referrerURL:(id)arg7 referrerBundleID:(id)arg8 ;
@end

