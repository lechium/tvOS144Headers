/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ManagedConfiguration/MCPayload.h>

@class NSMutableDictionary, NSString;

@interface MCRestrictionsPayload : MCPayload {

	NSMutableDictionary* _restrictions;
	NSString* _iCloudPassword;

}

@property (nonatomic,retain) NSString * iCloudPassword;              //@synthesize iCloudPassword=_iCloudPassword - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)restrictions;
-(id)filterForUserEnrollmentOutError:(id*)arg1 ;
-(id)installationWarnings;
-(id)_invalidFieldErrorWithFieldName:(id)arg1 ;
-(id)_restrictedFeatureStrings;
-(id)_enforcedFeatureStrings;
-(id)_defaultValueRestrictions;
-(id)_intersectionStrings;
-(id)_unionStrings;
-(id)localizedRestrictionStrings;
-(void)_insertRestrictedBoolForKey:(id)arg1 value:(id)arg2 preferenc:(BOOL)arg3 ;
-(NSString *)iCloudPassword;
-(void)setICloudPassword:(NSString *)arg1 ;
@end
