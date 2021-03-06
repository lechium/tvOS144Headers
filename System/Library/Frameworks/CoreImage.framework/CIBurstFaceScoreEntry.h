/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CIBurstFaceScoreEntry : NSObject {

	float maxScore;
	float minScore;
	float sumScores;
	float sumSqScores;
	int numScores;

}

@property (assign) float maxScore; 
@property (assign) float minScore; 
@property (assign) int numScores; 
-(float)computeAverage;
-(id)initWithScore:(float)arg1 ;
-(void)addScore:(float)arg1 ;
-(float)computeStandardDeviation;
-(float)maxScore;
-(void)setMaxScore:(float)arg1 ;
-(float)minScore;
-(void)setMinScore:(float)arg1 ;
-(int)numScores;
-(void)setNumScores:(int)arg1 ;
@end

