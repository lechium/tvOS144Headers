/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Memories/Memories-Structs.h>
@class NSArray, NSString;

@interface FlexMLSummaryManager : NSObject {

	int _targetTimeScale;
	NSArray* _allFileNames;
	NSArray* _allDurations;
	NSString* _rootPath;
	NSString* _metadataPath;

}

@property (nonatomic,readonly) NSArray * allFileNames;               //@synthesize allFileNames=_allFileNames - In the implementation block
@property (nonatomic,readonly) NSArray * allDurations;               //@synthesize allDurations=_allDurations - In the implementation block
@property (nonatomic,readonly) NSString * rootPath;                  //@synthesize rootPath=_rootPath - In the implementation block
@property (nonatomic,readonly) NSString * metadataPath;              //@synthesize metadataPath=_metadataPath - In the implementation block
@property (nonatomic,readonly) int targetTimeScale;                  //@synthesize targetTimeScale=_targetTimeScale - In the implementation block
-(NSString *)rootPath;
-(id)initWithSummaryMapping:(id)arg1 bundlePath:(id)arg2 metadataPath:(id)arg3 targetTimeScale:(int)arg4 ;
-(id)summaryForDuration:(SCD_Struct_TV3)arg1 ;
-(id)allSummaryDurations;
-(NSString *)metadataPath;
-(NSArray *)allDurations;
-(double)averageGranularityBetweenSummaries;
-(id)_summaryForDuration:(SCD_Struct_TV3)arg1 ;
-(int)targetTimeScale;
-(NSArray *)allFileNames;
@end

