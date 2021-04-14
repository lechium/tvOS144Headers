/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, NSURL, NSUUID;

@interface FBSBundleInfo : NSObject <BSDescriptionProviding> {

	NSString* _displayName;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSString* _bundleType;
	NSURL* _bundleURL;
	unsigned long long _sequenceNumber;
	NSUUID* _cacheGUID;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;               //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * bundleURL;                              //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                    //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleVersion;                  //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleType;                     //@synthesize bundleType=_bundleType - In the implementation block
@property (nonatomic,readonly) unsigned long long sequenceNumber;              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * cacheGUID;                        //@synthesize cacheGUID=_cacheGUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)debugDescription;
-(NSString *)description;
-(id)init;
-(NSString *)bundleIdentifier;
-(NSURL *)bundleURL;
-(NSString *)displayName;
-(unsigned long long)sequenceNumber;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)_initWithBundleProxy:(id)arg1 overrideURL:(id)arg2 ;
-(id)_initWithBundleIdentifier:(id)arg1 url:(id)arg2 ;
-(id)_initWithBundleProxy:(id)arg1 bundleIdentifier:(id)arg2 url:(id)arg3 ;
-(NSString *)bundleVersion;
-(NSString *)bundleType;
-(NSUUID *)cacheGUID;
@end

