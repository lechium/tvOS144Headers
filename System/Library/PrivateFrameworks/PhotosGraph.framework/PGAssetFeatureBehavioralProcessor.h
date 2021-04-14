/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PGBehavioralAlgorithm.h>

@class PGGraph, NSSet, NSDictionary;

@interface PGAssetFeatureBehavioralProcessor : NSObject <PGBehavioralAlgorithm> {

	PGGraph* _graph;
	NSSet* _goldAssets;
	NSDictionary* _personFeatures;
	NSDictionary* _sceneFeatures;
	double _similarityScoreNormalizer;

}

@property (nonatomic,retain) NSDictionary * personFeatures;                 //@synthesize personFeatures=_personFeatures - In the implementation block
@property (nonatomic,retain) NSDictionary * sceneFeatures;                  //@synthesize sceneFeatures=_sceneFeatures - In the implementation block
@property (nonatomic,retain) PGGraph * graph;                               //@synthesize graph=_graph - In the implementation block
@property (nonatomic,retain) NSSet * goldAssets;                            //@synthesize goldAssets=_goldAssets - In the implementation block
@property (assign,nonatomic) double similarityScoreNormalizer;              //@synthesize similarityScoreNormalizer=_similarityScoreNormalizer - In the implementation block
-(PGGraph *)graph;
-(void)setGraph:(PGGraph *)arg1 ;
-(id)initWithGoldAssets:(id)arg1 graph:(id)arg2 ;
-(id)initWithGoldAssets:(id)arg1 graph:(id)arg2 persistedData:(id)arg3 ;
-(void)preprocessWithProgressBlock:(/*^block*/id)arg1 ;
-(float)semanticScoreForAsset:(id)arg1 ;
-(id)semanticScoreByAssetUUIDForAssets:(id)arg1 ;
-(id)dataToPersist;
-(NSSet *)goldAssets;
-(id)_semanticScoreByAssetUUIDForAssets:(id)arg1 normalize:(BOOL)arg2 ;
-(void)personAndSceneFeaturesFromGoldAssetsUsingBlock:(/*^block*/id)arg1 ;
-(void)setGoldAssets:(NSSet *)arg1 ;
-(NSDictionary *)personFeatures;
-(void)setPersonFeatures:(NSDictionary *)arg1 ;
-(NSDictionary *)sceneFeatures;
-(void)setSceneFeatures:(NSDictionary *)arg1 ;
-(double)similarityScoreNormalizer;
-(void)setSimilarityScoreNormalizer:(double)arg1 ;
@end

