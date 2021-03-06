/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudMediaServicesQueueController.framework/CloudMediaServicesQueueController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString, NSDictionary, CMSNetworkActivity;

@interface CMSPlayerPointer : NSObject <NSSecureCoding> {

	BOOL _preroll;
	NSNumber* _contentMillisecondOffset;
	NSString* _contentIdentifier;
	NSString* _appIdentifier;
	NSString* _appBundleIdentifier;
	NSString* _appBundleVersion;
	NSString* _userAccountSharedUserID;
	NSString* _cachedEndpointConfigurationURL;
	NSDictionary* _cachedEndpointConfigurationDictionary;
	NSString* _sessionIdentifier;
	NSString* _sessionAuthHeader;
	NSNumber* _speakerUpdateListeningHistory;
	NSString* _userAccountHomeUserID;
	NSString* _appServiceID;
	NSString* _userActivityPersistentID;
	CMSNetworkActivity* _parentNetworkActivity;

}

@property (nonatomic,retain) NSNumber * contentMillisecondOffset;                             //@synthesize contentMillisecondOffset=_contentMillisecondOffset - In the implementation block
@property (nonatomic,copy) NSString * contentIdentifier;                                      //@synthesize contentIdentifier=_contentIdentifier - In the implementation block
@property (nonatomic,copy) NSString * appIdentifier;                                          //@synthesize appIdentifier=_appIdentifier - In the implementation block
@property (nonatomic,copy) NSString * appBundleIdentifier;                                    //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * appBundleVersion;                                       //@synthesize appBundleVersion=_appBundleVersion - In the implementation block
@property (nonatomic,copy) NSString * userAccountSharedUserID;                                //@synthesize userAccountSharedUserID=_userAccountSharedUserID - In the implementation block
@property (nonatomic,copy) NSString * cachedEndpointConfigurationURL;                         //@synthesize cachedEndpointConfigurationURL=_cachedEndpointConfigurationURL - In the implementation block
@property (nonatomic,copy) NSDictionary * cachedEndpointConfigurationDictionary;              //@synthesize cachedEndpointConfigurationDictionary=_cachedEndpointConfigurationDictionary - In the implementation block
@property (nonatomic,copy) NSString * sessionIdentifier;                                      //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * sessionAuthHeader;                                      //@synthesize sessionAuthHeader=_sessionAuthHeader - In the implementation block
@property (nonatomic,copy) NSNumber * speakerUpdateListeningHistory;                          //@synthesize speakerUpdateListeningHistory=_speakerUpdateListeningHistory - In the implementation block
@property (nonatomic,copy) NSString * userAccountHomeUserID;                                  //@synthesize userAccountHomeUserID=_userAccountHomeUserID - In the implementation block
@property (nonatomic,copy) NSString * appServiceID;                                           //@synthesize appServiceID=_appServiceID - In the implementation block
@property (nonatomic,copy) NSString * userActivityPersistentID;                               //@synthesize userActivityPersistentID=_userActivityPersistentID - In the implementation block
@property (assign,nonatomic) BOOL preroll;                                                    //@synthesize preroll=_preroll - In the implementation block
@property (nonatomic,readonly) CMSNetworkActivity * parentNetworkActivity;                    //@synthesize parentNetworkActivity=_parentNetworkActivity - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)appBundleIdentifier;
-(void)setContentIdentifier:(NSString *)arg1 ;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(NSString *)appIdentifier;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(NSString *)sessionIdentifier;
-(void)setSessionIdentifier:(NSString *)arg1 ;
-(id)intentData;
-(NSString *)contentIdentifier;
-(CMSNetworkActivity *)parentNetworkActivity;
-(NSNumber *)contentMillisecondOffset;
-(NSString *)appBundleVersion;
-(NSString *)userAccountSharedUserID;
-(NSString *)cachedEndpointConfigurationURL;
-(NSDictionary *)cachedEndpointConfigurationDictionary;
-(NSString *)sessionAuthHeader;
-(NSNumber *)speakerUpdateListeningHistory;
-(NSString *)userAccountHomeUserID;
-(NSString *)appServiceID;
-(NSString *)userActivityPersistentID;
-(BOOL)preroll;
-(id)initWithDictionary:(id)arg1 prepareQueue:(BOOL)arg2 ;
-(void)setContentMillisecondOffset:(NSNumber *)arg1 ;
-(void)setAppBundleVersion:(NSString *)arg1 ;
-(void)setUserAccountSharedUserID:(NSString *)arg1 ;
-(void)setCachedEndpointConfigurationURL:(NSString *)arg1 ;
-(void)setCachedEndpointConfigurationDictionary:(NSDictionary *)arg1 ;
-(void)setSessionAuthHeader:(NSString *)arg1 ;
-(void)setSpeakerUpdateListeningHistory:(NSNumber *)arg1 ;
-(void)setUserAccountHomeUserID:(NSString *)arg1 ;
-(void)setAppServiceID:(NSString *)arg1 ;
-(void)setUserActivityPersistentID:(NSString *)arg1 ;
-(void)setPreroll:(BOOL)arg1 ;
@end

