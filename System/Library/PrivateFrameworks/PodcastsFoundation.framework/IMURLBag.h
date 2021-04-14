/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AMSBagProtocol.h>

@class NSDate, NSString, AMSProcessInfo, AMSBag;

@interface IMURLBag : NSObject <AMSBagProtocol> {

	AMSBag* _bag;

}

@property (nonatomic,retain) AMSBag * bag;                                     //@synthesize bag=_bag - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,copy,readonly) NSString * profile; 
@property (nonatomic,copy,readonly) NSString * profileVersion; 
@property (nonatomic,copy,readonly) AMSProcessInfo * processInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)registerBagKeys:(id)arg1 ;
+(void)_registerBagKeysIfNeeded;
-(id)init;
-(NSDate *)expirationDate;
-(id)boolForKey:(id)arg1 ;
-(id)integerForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)doubleForKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(BOOL)isExpired;
-(NSString *)profile;
-(id)mescalSignedActions;
-(id)mescalCertificateURL;
-(id)mescalSetupURL;
-(AMSBag *)bag;
-(void)setBag:(AMSBag *)arg1 ;
-(NSString *)profileVersion;
-(id)metricsDictionary;
-(void)createSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(id)trustedDomains;
-(id)metricsURL;
-(id)mescalSignSapRequests;
-(id)mescalSignSapResponses;
-(id)personalizedLookupURL;
-(id)unpersonalizedLookupURL;
-(id)reportAConcernURL;
-(void)reportAConcernURLWithCompletion:(/*^block*/id)arg1 ;
-(id)podcastsMediaAPIHostUrl;
-(id)mediaTaskCountryCode;
-(id)tokenServiceUrl;
@end

