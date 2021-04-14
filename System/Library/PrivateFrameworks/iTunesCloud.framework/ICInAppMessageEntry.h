/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSString, NSMutableDictionary, NSObject, ICIAMApplicationMessage, NSDictionary;

@interface ICInAppMessageEntry : NSObject <NSCopying, NSSecureCoding> {

	NSString* _bundleIdentifier;
	NSMutableDictionary* _metadata;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _resourceCache;
	BOOL _shouldDownloadResources;
	BOOL _didCacheRequiredResources;
	ICIAMApplicationMessage* _applicationMessage;

}

@property (nonatomic,readonly) ICIAMApplicationMessage * applicationMessage;              //@synthesize applicationMessage=_applicationMessage - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                               //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * metadata; 
@property (assign,nonatomic) BOOL shouldDownloadResources;                                //@synthesize shouldDownloadResources=_shouldDownloadResources - In the implementation block
@property (assign,nonatomic) BOOL didCacheRequiredResources;                              //@synthesize didCacheRequiredResources=_didCacheRequiredResources - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSDictionary *)metadata;
-(ICIAMApplicationMessage *)applicationMessage;
-(id)initWithApplicationMessage:(id)arg1 bundleIdentifier:(id)arg2 ;
-(BOOL)shouldDownloadResources;
-(void)setShouldDownloadResources:(BOOL)arg1 ;
-(void)clearCachedResources;
-(id)cachedLocationForResourceWithIdentifier:(id)arg1 ;
-(void)setCacheLocation:(id)arg1 forResourceWithIdentifier:(id)arg2 ;
-(void)setDidCacheRequiredResources:(BOOL)arg1 ;
-(BOOL)didCacheRequiredResources;
-(void)updateMetadataValue:(id)arg1 forKey:(id)arg2 ;
-(id)allCachedResourceLocations;
@end
