/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputCore/TILanguageModelOfflineLearningHandle.h>

@class TIWordSearch;

@interface TILanguageModelOfflineLearningHandleMecabra : TILanguageModelOfflineLearningHandle {

	TIWordSearch* _wordSearch;

}

@property (nonatomic,retain) TIWordSearch * wordSearch;              //@synthesize wordSearch=_wordSearch - In the implementation block
-(void)load;
-(TIWordSearch *)wordSearch;
-(void)didFinishLearning;
-(void)updateAdaptationContext:(id)arg1 ;
-(void)adaptToParagraph:(id)arg1 timeStamp:(double)arg2 adaptationType:(int)arg3 ;
-(void)setWordSearch:(TIWordSearch *)arg1 ;
@end

