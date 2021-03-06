/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHandwriting/CHPostprocessingStep.h>

@class CHRecognizer;

@interface CHCandidateRefinementStep : CHPostprocessingStep {

	BOOL _shouldKeepOutOfPatternCandidates;
	BOOL _shouldKeepDuplicateTokenIDs;
	BOOL _shouldKeepOriginalSpelling;
	CHRecognizer* _recognizer;

}

@property (assign,nonatomic) CHRecognizer * recognizer;                          //@synthesize recognizer=_recognizer - In the implementation block
@property (assign,nonatomic) BOOL shouldKeepOutOfPatternCandidates;              //@synthesize shouldKeepOutOfPatternCandidates=_shouldKeepOutOfPatternCandidates - In the implementation block
@property (assign,nonatomic) BOOL shouldKeepDuplicateTokenIDs;                   //@synthesize shouldKeepDuplicateTokenIDs=_shouldKeepDuplicateTokenIDs - In the implementation block
@property (assign,nonatomic) BOOL shouldKeepOriginalSpelling;                    //@synthesize shouldKeepOriginalSpelling=_shouldKeepOriginalSpelling - In the implementation block
-(BOOL)shouldKeepDuplicateTokenIDs;
-(BOOL)shouldKeepOutOfPatternCandidates;
-(id)process:(id)arg1 ;
-(id)initWithRecognizer:(id)arg1 shouldKeepOutOfPatternCandidates:(BOOL)arg2 shouldKeepDuplicateTokenIDs:(BOOL)arg3 ;
-(CHRecognizer *)recognizer;
-(void)setRecognizer:(CHRecognizer *)arg1 ;
-(void)setShouldKeepOutOfPatternCandidates:(BOOL)arg1 ;
-(void)setShouldKeepDuplicateTokenIDs:(BOOL)arg1 ;
-(BOOL)shouldKeepOriginalSpelling;
-(void)setShouldKeepOriginalSpelling:(BOOL)arg1 ;
@end

