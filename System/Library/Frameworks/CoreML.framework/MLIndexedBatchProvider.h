/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MLBatchProvider.h>

@protocol MLBatchProvider;
@class NSArray;

@interface MLIndexedBatchProvider : NSObject <MLBatchProvider> {

	id<MLBatchProvider> _fullBatch;
	NSArray* _indices;

}

@property (nonatomic,retain) id<MLBatchProvider> fullBatch;              //@synthesize fullBatch=_fullBatch - In the implementation block
@property (nonatomic,retain) NSArray * indices;                          //@synthesize indices=_indices - In the implementation block
@property (nonatomic,readonly) long long count; 
-(long long)count;
-(id)featuresAtIndex:(long long)arg1 ;
-(NSArray *)indices;
-(id<MLBatchProvider>)fullBatch;
-(void)setFullBatch:(id<MLBatchProvider>)arg1 ;
-(id)initWithBatch:(id)arg1 indices:(id)arg2 error:(id*)arg3 ;
-(void)setIndices:(NSArray *)arg1 ;
@end

