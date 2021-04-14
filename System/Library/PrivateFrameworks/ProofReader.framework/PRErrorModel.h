/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PRErrorModeling.h>

@protocol PRErrorModeling;
@class NSString;

@interface PRErrorModel : NSObject <PRErrorModeling> {

	id<PRErrorModeling> _customErrorModel;

}

@property (readonly) BOOL hasCustomReplacementErrorScores; 
@property (readonly) BOOL hasCustomTranspositionErrorScores; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(double)replacementErrorScoreForIntendedCharacter:(unsigned short)arg1 actualCharacter:(unsigned short)arg2 ;
-(double)transpositionErrorScoreForIntendedFirstCharacter:(unsigned short)arg1 intendedSecondCharacter:(unsigned short)arg2 ;
-(double)errorScoreForType:(unsigned long long)arg1 ;
-(BOOL)hasCustomReplacementErrorScores;
-(BOOL)hasCustomTranspositionErrorScores;
-(id)initWithCustomErrorModel:(id)arg1 ;
@end

