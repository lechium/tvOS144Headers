/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <NaturalLanguage/NaturalLanguage-Structs.h>
@class NLModelConfiguration, NLDataProvider;

@interface NLDataSet : NSObject {

	NLModelConfiguration* _configuration;
	NLDataProvider* _trainingDataProvider;
	NLDataProvider* _validationDataProvider;
	NLDataProvider* _testDataProvider;

}

@property (copy,readonly) NLModelConfiguration * configuration; 
@property (readonly) unsigned long long numberOfTrainingInstances; 
@property (readonly) unsigned long long numberOfValidationInstances; 
@property (readonly) unsigned long long numberOfTestInstances; 
+(id)dataSetWithDataSet:(id)arg1 constraintParameters:(NLConstraintParameters)arg2 modelTrainer:(id)arg3 ;
-(NLModelConfiguration *)configuration;
-(id)labelMap;
-(id)vocabularyMap;
-(id)documentFrequencyMap;
-(id)dataProviderOfType:(long long)arg1 ;
-(unsigned long long)numberOfTrainingInstances;
-(id)inverseLabelMap;
-(id)initWithConfiguration:(id)arg1 trainingDataURL:(id)arg2 validationDataURL:(id)arg3 testDataURL:(id)arg4 ;
-(unsigned long long)numberOfValidationInstances;
-(unsigned long long)numberOfLabels;
-(unsigned long long)numberOfVocabularyEntries;
-(id)initWithConfiguration:(id)arg1 trainingDataProvider:(id)arg2 validationDataProvider:(id)arg3 testDataProvider:(id)arg4 ;
-(id)initWithConfiguration:(id)arg1 dataProvider:(id)arg2 validationSplit:(double)arg3 testingSplit:(double)arg4 ;
-(unsigned long long)numberOfTestInstances;
-(id)trainingInstanceAtIndex:(unsigned long long)arg1 ;
-(id)validationInstanceAtIndex:(unsigned long long)arg1 ;
-(id)testInstanceAtIndex:(unsigned long long)arg1 ;
@end
