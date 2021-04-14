/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVIdleServices.framework/TVIdleServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSUserDefaults;

@interface TVISAerialServiceDefaults : NSObject {

	NSString* _mode;
	NSUserDefaults* _defaults;

}

@property (nonatomic,readonly) NSString * mode;                        //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) NSUserDefaults * defaults;              //@synthesize defaults=_defaults - In the implementation block
-(NSString *)mode;
-(NSUserDefaults *)defaults;
-(id)initWithMode:(id)arg1 ;
-(id)activeCategoryIDs;
-(void)addActiveCategoryIDs:(id)arg1 ;
-(void)removeActiveCategoryIDs:(id)arg1 ;
-(id)nextScheduledAssetDownloadDate;
-(void)setNextScheduledAssetDownloadDate:(id)arg1 ;
-(id)nextScheduledManifestDownloadDate;
-(void)setNextScheduledManifestDownloadDate:(id)arg1 ;
@end

