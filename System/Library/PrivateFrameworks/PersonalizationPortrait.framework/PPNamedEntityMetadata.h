/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <ProactiveSupport/_PASZonedObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet;

@interface PPNamedEntityMetadata : _PASZonedObject <NSCopying, NSSecureCoding, MLFeatureProvider> {

	unsigned short _impressionCount;
	unsigned short _occurrencesInSource;

}

@property (nonatomic,readonly) unsigned short impressionCount;                  //@synthesize impressionCount=_impressionCount - In the implementation block
@property (nonatomic,readonly) unsigned short occurrencesInSource;              //@synthesize occurrencesInSource=_occurrencesInSource - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithImpressionCount:(unsigned short)arg1 occurrencesInSource:(unsigned short)arg2 ;
-(BOOL)isEqualToNamedEntityMetadata:(id)arg1 ;
-(unsigned short)impressionCount;
-(unsigned short)occurrencesInSource;
@end
