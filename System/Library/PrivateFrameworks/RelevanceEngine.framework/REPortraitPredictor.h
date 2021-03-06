/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/REPredictor.h>
#import <libobjc.A.dylib/REPortraitPredictorProperties.h>

@class NSDictionary, NSMutableDictionary;

@interface REPortraitPredictor : REPredictor <REPortraitPredictorProperties> {

	NSMutableDictionary* _namedEntityScores;

}

@property (nonatomic,readonly) NSDictionary * namedEntityScores; 
+(double)updateInterval;
-(void)dealloc;
-(id)_init;
-(void)update;
-(float)userAffinityToContent:(id)arg1 ;
-(void)_loadStoreIfNeeded;
-(NSDictionary *)namedEntityScores;
@end

