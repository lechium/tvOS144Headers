/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ManagedConfiguration/MCPayload.h>

@class NSDictionary;

@interface MCDomainsPayload : MCPayload {

	NSDictionary* _restrictions;

}

@property (nonatomic,retain) NSDictionary * restrictions;              //@synthesize restrictions=_restrictions - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
+(id)invalidDomainPatternErrorWithPattern:(id)arg1 ;
+(BOOL)isPatternValid:(id)arg1 outError:(id*)arg2 ;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(NSDictionary *)restrictions;
-(void)setRestrictions:(NSDictionary *)arg1 ;
@end

