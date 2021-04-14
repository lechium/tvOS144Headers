/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REFeature.h>

@class NSString, REFeatureSet, REFeatureTransformer;

@interface _RETransformedFeature : REFeature {

	NSString* _name;
	unsigned long long _hash;
	REFeatureSet* _features;
	REFeatureTransformer* _transformer;

}

@property (nonatomic,readonly) REFeatureSet * features;                         //@synthesize features=_features - In the implementation block
@property (nonatomic,readonly) REFeatureTransformer * transformer;              //@synthesize transformer=_transformer - In the implementation block
-(id)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(REFeatureSet *)features;
-(unsigned long long)featureType;
-(REFeatureTransformer *)transformer;
-(long long)_bitCount;
-(id)_dependentFeatures;
-(id)_rootFeatures;
-(void)_replaceDependentFeature:(id)arg1 withFeature:(id)arg2 ;
-(id)initWithTransformer:(id)arg1 features:(id)arg2 ;
-(void)_computeHash;
@end
