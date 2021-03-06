//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CSVTSecondPassPhraseScore, NSDictionary;

@interface CSVTSecondPassScorer : NSObject
{
    NSDictionary *_phraseMap;	// 8 = 0x8
    CSVTSecondPassPhraseScore *_triggeredPhrase;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000255e4
@property(retain, nonatomic) CSVTSecondPassPhraseScore *triggeredPhrase; // @synthesize triggeredPhrase=_triggeredPhrase;
@property(retain, nonatomic) NSDictionary *phraseMap; // @synthesize phraseMap=_phraseMap;
- (id)description;	// IMP=0x0000000100025428
- (id)dictionaryRepresentationWithSecondChanceEnabled:(_Bool)arg1;	// IMP=0x00000001000251b0
- (id)bestScoringPhrase;	// IMP=0x000000010002501c
- (id)getNearMissPhraseWithSecondChanceEnabled:(_Bool)arg1;	// IMP=0x0000000100024ebc
- (id)getTriggeredPhraseWithSecondChanceEnabled:(_Bool)arg1;	// IMP=0x0000000100024cd8
- (void)updateWithCtcCheckerResults:(id)arg1;	// IMP=0x0000000100024adc
- (void)updateWithNdapiResults:(id)arg1;	// IMP=0x00000001000249c0
- (id)initWithAsset:(id)arg1 firstPassSource:(unsigned long long)arg2;	// IMP=0x00000001000246bc

@end

