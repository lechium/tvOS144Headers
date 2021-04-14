/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NaturalLanguage/NaturalLanguage-Structs.h>
#import <NaturalLanguage/NLDataProvider.h>

@class NSArray;

@interface NLConcatenatedDataProvider : NLDataProvider {

	NSArray* _dataProviders;

}
-(id)configuration;
-(id)instanceAtIndex:(unsigned long long)arg1 ;
-(CFStringTokenizerRef)tokenizer;
-(id)initWithDataProviders:(id)arg1 ;
-(id)labelMap;
-(id)vocabularyMap;
-(id)documentFrequencyMap;
-(unsigned long long)numberOfInstances;
-(id)inverseLabelMap;
-(void)_generateMaps;
-(unsigned long long)numberOfLabels;
-(unsigned long long)numberOfVocabularyEntries;
@end

