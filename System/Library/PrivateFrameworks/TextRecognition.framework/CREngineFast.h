/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextRecognition/TextRecognition-Structs.h>
#import <libobjc.A.dylib/CREngine.h>

@class CRPerformanceStatistics, NSDictionary, CRLanguageCorrection, NSString;

@interface CREngineFast : NSObject <CREngine> {

	BOOL _shouldCancel;
	CRPerformanceStatistics* _textRecognitionStats;
	CRPerformanceStatistics* _languageCorrectionStats;
	unsigned long long _revision;
	NSDictionary* _options;
	CRLanguageCorrection* _languageCorrection;

}

@property (assign) unsigned long long revision;                                      //@synthesize revision=_revision - In the implementation block
@property (retain) NSDictionary * options;                                           //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) CRLanguageCorrection * languageCorrection;              //@synthesize languageCorrection=_languageCorrection - In the implementation block
@property (assign) BOOL shouldCancel;                                                //@synthesize shouldCancel=_shouldCancel - In the implementation block
@property (retain) CRPerformanceStatistics * textRecognitionStats;                   //@synthesize textRecognitionStats=_textRecognitionStats - In the implementation block
@property (retain) CRPerformanceStatistics * languageCorrectionStats;                //@synthesize languageCorrectionStats=_languageCorrectionStats - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) float mediumConfidenceThreshold; 
@property (readonly) float highConfidenceThreshold; 
+(id)supportedLanguagesForRevision:(long long)arg1 error:(id*)arg2 ;
-(void)cancel;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)setRevision:(unsigned long long)arg1 ;
-(unsigned long long)revision;
-(CGSize)smallestImageSizeForTextWithRelativeHeight:(double)arg1 originalImageSize:(CGSize)arg2 ;
-(BOOL)shouldCancel;
-(void)setShouldCancel:(BOOL)arg1 ;
-(float)mediumConfidenceThreshold;
-(float)highConfidenceThreshold;
-(id)textResultsInImage:(id)arg1 options:(id)arg2 withProgressHandler:(/*^block*/id)arg3 error:(id*)arg4 ;
-(void)setLanguageCorrection:(CRLanguageCorrection *)arg1 ;
-(void)setTextRecognitionStats:(CRPerformanceStatistics *)arg1 ;
-(void)setLanguageCorrectionStats:(CRPerformanceStatistics *)arg1 ;
-(CRLanguageCorrection *)languageCorrection;
-(CRPerformanceStatistics *)textRecognitionStats;
-(id)filterResultsForTextFeatures:(id)arg1 ;
-(id)applyLanguageCorrectionToResults:(id)arg1 image:(id)arg2 latticeResults:(id*)arg3 progressHandler:(/*^block*/id)arg4 ;
-(BOOL)noLMValidateProbability:(id)arg1 options:(id)arg2 ;
-(CRPerformanceStatistics *)languageCorrectionStats;
-(BOOL)lmValidateProbability:(id)arg1 options:(id)arg2 ;
-(BOOL)validateProbability:(id)arg1 validRangeMin:(double)arg2 validRangeMax:(double)arg3 options:(id)arg4 ;
@end

