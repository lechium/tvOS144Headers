/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <KnowledgeGraphKit/MAFeatureExtractor.h>

@class NSString, MAIndexCache, MARelation;

@interface MARelationFeatureExtractor : MAFeatureExtractor {

	NSString* _name;
	MAIndexCache* _featureNameIndexCache;
	MARelation* _relation;
	/*^block*/id _labelForTargetBlock;

}

@property (nonatomic,readonly) MAIndexCache * featureNameIndexCache;              //@synthesize featureNameIndexCache=_featureNameIndexCache - In the implementation block
@property (nonatomic,readonly) MARelation * relation;                             //@synthesize relation=_relation - In the implementation block
@property (nonatomic,readonly) id labelForTargetBlock;                            //@synthesize labelForTargetBlock=_labelForTargetBlock - In the implementation block
-(id)name;
-(id)featureNames;
-(MARelation *)relation;
-(id)initWithName:(id)arg1 featureNames:(id)arg2 relation:(id)arg3 labelForTargetBlock:(/*^block*/id)arg4 ;
-(id)floatVectorWithEntity:(id)arg1 error:(id*)arg2 ;
-(MAIndexCache *)featureNameIndexCache;
-(id)labelForTargetBlock;
@end

