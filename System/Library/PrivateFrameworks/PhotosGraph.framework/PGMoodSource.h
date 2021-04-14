/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PHAssetCollection, PGManager, PGMoodGeneratorOptions, PGMoodVector, NSDictionary;

@interface PGMoodSource : NSObject {

	PHAssetCollection* _assetCollection;
	PGManager* _graphManager;
	PGMoodGeneratorOptions* _options;
	PGMoodVector* _positiveVector;
	PGMoodVector* _negativeVector;
	NSDictionary* _moodSourceDictionary;

}

@property (readonly) PHAssetCollection * assetCollection;              //@synthesize assetCollection=_assetCollection - In the implementation block
@property (readonly) PGManager * graphManager;                         //@synthesize graphManager=_graphManager - In the implementation block
@property (readonly) PGMoodGeneratorOptions * options;                 //@synthesize options=_options - In the implementation block
@property (retain) PGMoodVector * positiveVector;                      //@synthesize positiveVector=_positiveVector - In the implementation block
@property (retain) PGMoodVector * negativeVector;                      //@synthesize negativeVector=_negativeVector - In the implementation block
@property (readonly) NSDictionary * moodSourceDictionary;              //@synthesize moodSourceDictionary=_moodSourceDictionary - In the implementation block
+(id)_plistName;
-(PGMoodGeneratorOptions *)options;
-(double)weight;
-(PHAssetCollection *)assetCollection;
-(PGManager *)graphManager;
-(id)initWithAssetCollection:(id)arg1 graphManager:(id)arg2 options:(id)arg3 ;
-(id)_plistMoodIdentifiers;
-(PGMoodVector *)positiveVector;
-(void)setPositiveVector:(PGMoodVector *)arg1 ;
-(PGMoodVector *)negativeVector;
-(void)setNegativeVector:(PGMoodVector *)arg1 ;
-(id)_moodVectorForMoodIdentifier:(id)arg1 ;
-(id)_moodVectors;
-(void)_combineMoodVectors;
-(unsigned long long)_sourceInputCount;
-(NSDictionary *)moodSourceDictionary;
@end

