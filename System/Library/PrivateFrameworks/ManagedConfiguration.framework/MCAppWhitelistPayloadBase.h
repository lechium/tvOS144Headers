/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCAppWhitelistPayloadBase : MCPayload {

	BOOL _allowAccessWithoutPasscode;
	BOOL _forceAllowSupervisorAccess;
	NSArray* _whitelistedAppsAndOptions;

}

@property (nonatomic,retain) NSArray * whitelistedAppsAndOptions;              //@synthesize whitelistedAppsAndOptions=_whitelistedAppsAndOptions - In the implementation block
@property (assign,nonatomic) BOOL allowAccessWithoutPasscode;                  //@synthesize allowAccessWithoutPasscode=_allowAccessWithoutPasscode - In the implementation block
@property (assign,nonatomic) BOOL forceAllowSupervisorAccess;                  //@synthesize forceAllowSupervisorAccess=_forceAllowSupervisorAccess - In the implementation block
+(id)knownOptionsKeys;
+(id)knownUserEnabledOptionKeys;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(id)verboseDescription;
-(id)restrictions;
-(void)setWhitelistedAppsAndOptions:(NSArray *)arg1 ;
-(NSArray *)whitelistedAppsAndOptions;
-(BOOL)allowAccessWithoutPasscode;
-(BOOL)forceAllowSupervisorAccess;
-(void)setAllowAccessWithoutPasscode:(BOOL)arg1 ;
-(void)setForceAllowSupervisorAccess:(BOOL)arg1 ;
@end

