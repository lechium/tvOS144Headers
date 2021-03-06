/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RERelevanceProviderEnvironment;

@interface RERelevanceProvider : NSObject <NSCopying> {

	unsigned long long _cachedHash;
	unsigned long long _priority;
	RERelevanceProviderEnvironment* _environment;

}
+(id)relevanceSimulatorID;
+(id)customRelevanceProviderForFeature:(id)arg1 withValue:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(id)environment;
-(unsigned long long)_hash;
-(void)setEnvironment:(id)arg1 ;
-(id)dictionaryEncoding;
-(unsigned long long)relevancePriority;
-(id)providerWithPriority:(unsigned long long)arg1 ;
@end

