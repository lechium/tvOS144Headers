/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PGGraphIngestProcessor.h>

@class NSDictionary, NSString;

@interface PGGraphIngestPersonAgeCategoryProcessor : NSObject <PGGraphIngestProcessor> {

	NSDictionary* _confidenceThresholdByBabySceneIdentifier;
	NSDictionary* _confidenceThresholdByChildSceneIdentifier;
	NSDictionary* _confidenceThresholdByTeenSceneIdentifier;
	NSDictionary* _confidenceThresholdByAdultSceneIdentifier;

}

@property (nonatomic,readonly) NSDictionary * confidenceThresholdByBabySceneIdentifier;               //@synthesize confidenceThresholdByBabySceneIdentifier=_confidenceThresholdByBabySceneIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * confidenceThresholdByChildSceneIdentifier;              //@synthesize confidenceThresholdByChildSceneIdentifier=_confidenceThresholdByChildSceneIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * confidenceThresholdByTeenSceneIdentifier;               //@synthesize confidenceThresholdByTeenSceneIdentifier=_confidenceThresholdByTeenSceneIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * confidenceThresholdByAdultSceneIdentifier;              //@synthesize confidenceThresholdByAdultSceneIdentifier=_confidenceThresholdByAdultSceneIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldRunWithGraphUpdate:(id)arg1 ;
-(void)runWithGraphUpdate:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)processPersonAgeCategoryForPersonNodes:(id)arg1 graph:(id)arg2 withProgressBlock:(/*^block*/id)arg3 ;
-(unsigned long long)_ageCategoryUsingFaceAttributesForPersonNode:(id)arg1 graph:(id)arg2 ;
-(unsigned long long)ageCategoryForPersonNode:(id)arg1 ageCategoryCountedSet:(id)arg2 ;
-(unsigned long long)_ageCategoryFromPHFaceAgeType:(unsigned short)arg1 ;
-(unsigned long long)ageCategoryFromBirthdayDateComponents:(id)arg1 currentDate:(id)arg2 ;
-(unsigned long long)_ageCategoryFromBirthdayDateForPersonNode:(id)arg1 ;
-(NSDictionary *)confidenceThresholdByBabySceneIdentifier;
-(NSDictionary *)confidenceThresholdByChildSceneIdentifier;
-(NSDictionary *)confidenceThresholdByTeenSceneIdentifier;
-(NSDictionary *)confidenceThresholdByAdultSceneIdentifier;
-(unsigned long long)_ageCategoryFromAssetSamplingScenesForPersonNode:(id)arg1 graph:(id)arg2 ;
-(unsigned long long)ageCategoryFromScenesByAssetLocalIdentifier:(id)arg1 personNode:(id)arg2 ;
-(id)_ageDescriptionFromAge:(unsigned long long)arg1 ;
@end

