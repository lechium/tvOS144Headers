/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/REFeatureTransformer.h>

@interface _REBlockFeatureTransformer : REFeatureTransformer {

	unsigned long long _featureCount;
	unsigned long long _outputFeatureType;
	/*^block*/id _block;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)_outputType;
-(long long)_bitCount;
-(unsigned long long)_featureCount;
-(unsigned long long)_createTransformFromValues:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)_validateWithFeatures:(id)arg1 ;
-(id)initWithFeatureCount:(unsigned long long)arg1 outputFeatureType:(unsigned long long)arg2 transformation:(/*^block*/id)arg3 ;
@end

